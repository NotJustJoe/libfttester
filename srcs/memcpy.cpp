/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:21:31 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 14:32:46 by trofidal         ###   ########.fr       */
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
    std::string fN = "memcpy"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char tab[100];
	char dest_tab[100];
	char dest_toto[100];

    #define a ft_memcpy
    #define b memcpy
    #define s std::to_string
    #define t setTesting

	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg"); 
    a(dest_toto, tab, 42);b(dest_tab, tab, 42);
    /*1*/trofidal.t(fN, "(tab, dest_toto, 42) [checking tab[42]");trofidal.tInt(dest_tab[42], dest_toto[42]);
    /*****************/
	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    a(dest_toto, tab, 42);b(dest_tab, tab, 42);
    /*2*/trofidal.t(fN, "(tab, dest_toto, 42) [checking tab[41]");trofidal.tInt(dest_tab[41], dest_toto[41]); 
    /*****************/
	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    a(dest_toto, tab, 42);b(dest_tab, tab, 42);
    /*3*/trofidal.t(fN, "(tab, dest_toto, 42) [checking tab[43]");trofidal.tInt(dest_tab[43], dest_toto[43]); 
    /*****************/
	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    a(dest_toto, tab, 1);b(dest_tab, tab, 1);
    /*4*/trofidal.t(fN, "(tab, dest_toto, 1) [checking tab[0]");trofidal.tInt(dest_tab[0], dest_toto[0]); 
    /*****************/
 	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    a(dest_toto, tab, 98);b(dest_tab, tab, 98);
    /*5*/trofidal.t(fN, "(tab, dest_toto, 98) [checking tab[99]");trofidal.tInt(dest_tab[98], dest_toto[98]); 
    /*****************/
 	memset(dest_tab, 0, 100); memset(dest_toto, 0, 100);
	strcpy(tab, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    a(dest_toto, tab, 32);b(dest_tab, tab, 32);
    /*6*/trofidal.t(fN, "(tab, dest_toto, 32) [checking tab[32]");trofidal.tInt(dest_tab[32], dest_toto[32]); 
    /*****************/
}