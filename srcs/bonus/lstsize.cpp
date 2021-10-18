/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:38:55 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/18 18:08:10 by trofidal         ###   ########.fr       */
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
    std::string fN = "lstsize"; //Function Name
    Infos   trofidal(fN, 2);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
	t_list *lst = NULL;
    int retA = 0, retB = 0;

    ft_lstadd_back(&lst, ft_lstnew((void *)42));
    ft_lstadd_back(&lst, ft_lstnew((void *)24));
    ft_lstadd_back(&lst, ft_lstnew((void *)69420));
	retA = ft_lstsize(lst); retB = 3;
	/*1*/trofidal.t(fN, "lst (size of lst is 3)");trofidal.tIntPtr(retA, retB);
	if (retA == retB)
		retA = 1; retB = 1;
    trofidal.tripouilleCheck(lst, sizeof(t_list));free_list(lst);trofidal.showLeaks(retA, retB);
	lst = NULL; lst = ft_lstnew((void *)65);
	/*1*/trofidal.t(fN, "lst (size of lst is 3)");trofidal.tIntPtr(retA, retB);
	retA = ft_lstsize(lst); retB = 1;
    trofidal.tripouilleCheck(lst, sizeof(t_list));free_list(lst);trofidal.showLeaks(retA, retB);
}