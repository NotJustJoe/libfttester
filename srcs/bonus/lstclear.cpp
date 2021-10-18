/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:35:51 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:49 by trofidal         ###   ########.fr       */
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
    std::string fN = "lstclear"; //Function Name
    Infos   trofidal(fN, 1);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
	t_list *lst = ft_lstnew(malloc(1));
    int retA = 0, retB = 0;
	for (int i = 0; i < 5; ++i)
		ft_lstadd_front(&lst, ft_lstnew(malloc(1)));
    ft_lstclear(&lst, free);
    /*1*/trofidal.t(fN, "lst, free");trofidal.tIntPtr(ft_lstsize(lst), retB - 1);
    trofidal.showLeaks(ft_lstsize(lst) == 0 ? 1 : 0, 1);
}