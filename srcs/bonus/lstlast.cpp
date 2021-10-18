/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:49:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/18 16:43:48 by trofidal         ###   ########.fr       */
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
    std::string fN = "lstlast"; //Function Name
    Infos   trofidal(fN, 2);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
	t_list *lst = NULL;
    int retA = 0, retB = 0;

    ft_lstadd_back(&lst, ft_lstnew((void *)5));
    ft_lstadd_back(&lst, ft_lstnew((void *)5));
    ft_lstadd_back(&lst, ft_lstnew((void *)6));
    ft_lstadd_back(&lst, ft_lstnew((void *)9));
    ft_lstadd_back(&lst, ft_lstnew((void *)3));
    ft_lstadd_back(&lst, ft_lstnew((void *)1));
    ft_lstadd_back(&lst, ft_lstnew((void *)6));
    ft_lstadd_back(&lst, ft_lstnew((void *)3));
	retA = (ft_lstlast(lst)->content == (void *)3) ? 1 : 0; retB = 1;
	/*1*/trofidal.t(fN, "lstlast (last lst content == 3)");trofidal.tIntPtr(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));free_list(lst);trofidal.showLeaks(retA, retB);
	lst = NULL; lst = ft_lstnew((void *)65);
	/*2*/trofidal.t(fN, "lst (size of lst is 1)");trofidal.tIntPtr(retA, retB);
	retA = (ft_lstlast(lst)->content == (void *)65) ? 1 : 0; retB = 1;
    trofidal.tripouilleCheck(lst, sizeof(t_list));free_list(lst);trofidal.showLeaks(retA, retB);
}