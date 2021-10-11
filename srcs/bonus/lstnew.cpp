/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:40:05 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 17:54:12 by trofidal         ###   ########.fr       */
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

int main(void){
    std::string fN = "lstnew"; //Function Name
    Infos   trofidal(fN, 3);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
	t_list *lst;
    int retA = 0, retB = 0;

    lst = ft_lstnew((void *)13);
    retA = lst->content == (void *)13 ? 1 : 0;
    retB = lst->next == 0 ? 1 : 0;
    /*1*/trofidal.t(fN, "(void *)13");trofidal.tIntPtr(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));free(lst);trofidal.showLeaks(retA, retB);
    lst = ft_lstnew((void *)'a');
    retA = lst->content == (void *)'a' ? 1 : 0;
    retB = lst->next == 0 ? 1 : 0;
    /*2*/trofidal.t(fN, "(void *)'a'");trofidal.tIntPtr(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));free(lst);trofidal.showLeaks(retA, retB);
    lst = ft_lstnew((void *)8565);
    retA = lst->content == (void *)8565 ? 1 : 0;
    retB = lst->next == 0 ? 1 : 0;
    /*3*/trofidal.t(fN, "(void *)8565");trofidal.tIntPtr(retA, retB);
    trofidal.tripouilleCheck(lst, sizeof(t_list));free(lst);trofidal.showLeaks(retA, retB);
}