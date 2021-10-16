/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:55:23 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 09:51:26 by trofidal         ###   ########.fr       */
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
    std::string fN = "memset"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char tab[100];
    char toto[100];

    #define a ft_memset
    #define b memset
    #define s std::to_string
    #define t setTesting

    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 'A', 42);b(tab, 'A', 42);
    /*1*/trofidal.t(fN, "(tab, 'A', 42) [checking tab[42]");trofidal.tInt(tab[42], toto[42]); 
    /*****************/
    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 'A', 42);b(tab, 'A', 42);
    /*2*/trofidal.t(fN, "(tab, 'A', 42) [checking tab[41]");trofidal.tInt(tab[41], toto[41]); 
    /*****************/
    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 0, 42);b(tab, 0, 42);
    /*3*/trofidal.t(fN, "(tab, 'A', 42) [checking tab[43]");trofidal.tInt(tab[43], toto[43]); 
    /*****************/
    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 'A', 1);b(tab, 'A', 1);
    /*4*/trofidal.t(fN, "(tab, 'A', 1) [checking tab[0]");trofidal.tInt(tab[0], toto[0]); 
    /*****************/
    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 'A', 99);b(tab, 'A', 99);
    /*5*/trofidal.t(fN, "(tab, 0, 99) [checking tab[99]");trofidal.tInt(tab[99], toto[99]); 
    /*****************/
    memset(tab, '0', 100); memset(toto, '0', 100);
    a(toto, 0, 32);b(tab, 0, 32);
    /*6*/trofidal.t(fN, "(tab, 0, 32) [checking tab[32]");trofidal.tInt(tab[32], toto[32]); 
    /*****************/
}