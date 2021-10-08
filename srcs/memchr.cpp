/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:43:36 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 16:09:09 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern "C" {
#define new bar
#include "../../libft.h"
#undef new
};

#include "../includes/main_header.hpp"

std::string testing;
int         test_number;

int main(void){
    std::string fN = "memchr"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char tab[] = {0, 1, 9, 6, 5, 3, 32, 65, 84, 2, 32, 81, 2};

    #define a ft_memchr
    #define b memchr
    #define s std::to_string
    #define t setTesting

    /*1*/trofidal.t(fN, "(tab, 3, 42)");trofidal.tInt(a(tab, 3, 42) == tab + 5 ? 1 : 0, b(tab, 3, 42) == tab + 5 ? 1 : 0);
    /*2*/trofidal.t(fN, "(tab, 0, 42)");trofidal.tInt(a(tab, 0, 42) == tab + 0 ? 1 : 0, b(tab, 0, 42) == tab + 0 ? 1 : 0); 
    /*3*/trofidal.t(fN, "(tab, 120, 1)");trofidal.tInt(a(tab, 120, 1) == NULL ? 1 : 0, b(tab, 120, 1) == NULL ? 1 : 0); 
    /*4*/trofidal.t(fN, "(tab, 9 + 256, 42)");trofidal.tInt(a(tab, 9 + 256, 42) == tab + 2 ? 1 : 0, b(tab, 9 + 256, 42) == tab + 2 ? 1 : 0); 
    /*5*/trofidal.t(fN, "(tab, 2, 13)");trofidal.tInt(a(tab, 2, 13) == tab + 12 ? 1 : 0, b(tab, 2, 13) == tab + 12 ? 1 : 0); 
    /*6*/trofidal.t(fN, "(tab, 7, 13)");trofidal.tInt(a(tab, 7, 13) == NULL ? 1 : 0, b(tab, 7, 13) == NULL ? 1 : 0); 
}