/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:51:27 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:59 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern "C" {
#define new bar
#include "../../../libft.h"
#undef new
};

#include "../../includes/main_header.hpp"

std::string testing;
int         test_number;

void	free_list(t_list *lst){
	if (lst) 
		free_list(lst->next);
	free(lst);
}
void * addOne(void * p) {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}

/*
*	Tests taken from tripouille
*/

int main(void){
    std::string fN = "lstmap"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
	int tab[] = {0, 1, 2, 3, 4, 5};
    
	t_list *lst = ft_lstnew(tab);
    int retA = 0, retB = 0;
	for (int i = 1; i < 6; ++i)
		ft_lstadd_back(&lst, ft_lstnew(tab + i));
	t_list *map =    ft_lstmap(lst, addOne, free);
	t_list *tmp = lst;
	std::cout << "Function passed to lstmap : void * addOne(void * p) {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}" << std::endl;
	trofidal.tripouilleCheck(lst, sizeof(t_list));
    /*1*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 1");trofidal.tIntLst(*(int *)tmp->content == 0 ? 1 : 0, 1);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
	tmp = tmp->next;
	/*2*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 2");trofidal.tIntLst(*(int *)tmp->content == 1 ? 1 : 0, 1);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
	tmp = tmp->next;
	/*3*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 3");trofidal.tIntLst(*(int *)tmp->content == 2 ? 1 : 0, 1);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
	tmp = tmp->next;
	/*4*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 4");trofidal.tIntLst(*(int *)tmp->content == 3 ? 1 : 0, 1);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
	tmp = tmp->next;
	/*5*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 5");trofidal.tIntLst(*(int *)tmp->content == 4 ? 1 : 0, 1);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
	tmp = tmp->next;
	/*6*/trofidal.t(fN, "lst, addOne | checking if *(int *)tmp->content == 6");trofidal.tIntLst(*(int *)tmp->content == 5 ? 1 : 0, 1);
	free_list(lst) ; ft_lstclear(&map, free); trofidal.checkLeaksNoCheck();
}
