/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:35:50 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:36 by trofidal         ###   ########.fr       */
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

int main(void){
    std::string fN = "lstadd_back"; //Function Name
    Infos   trofidal(fN, 3);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
	t_list *lst = NULL;
    int retA = 0, retB = 0;

    ft_lstadd_back(&lst, ft_lstnew((void *)42));
    retA = lst->content == (void *)42 ? 1 : 0;
    retB = lst->next == 0 ? 1 : 0;
    /*1*/trofidal.t(fN, "&lst, ft_lstnew((void *)42)");trofidal.tIntLst(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
    ft_lstadd_back(&lst, ft_lstnew((void *)24));
    retA = (lst->content == (void *)42 && lst->next->content == (void *)24) ? 1 : 0;
    retB = lst->next->next == 0 ? 1 : 0;
    /*2*/trofidal.t(fN, "&lst, ft_lstnew((void *)24)");trofidal.tIntLst(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));
    ft_lstadd_back(&lst, ft_lstnew((void *)69420));
    retA = (lst->next->next->content == (void *)69420 && lst->content == (void *)42) ? 1 : 0;
    retB = lst->next->next->next == 0 ? 1 : 0;
    /*3*/trofidal.t(fN, "&lst, ft_lstnew((void *)69420)");trofidal.tIntPtr(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));free_list(lst);trofidal.showLeaks(retA, retB);
}