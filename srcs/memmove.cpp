/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:39:10 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 09:55:39 by trofidal         ###   ########.fr       */
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

void    set_mem(char *str, char *str2)
{
    strcpy(str, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
    strcpy(str2,"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg");
}

int main(void){
    std::string fN = "memmove"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char s1[100];
	char sHandle[100];
    char SNull[100]; memset(SNull, 0, 100);
    #define a ft_memmove
    #define b memmove
    #define s std::to_string
    #define t setTesting
    
    set_mem(s1, sHandle);
    a(s1, s1 + 32, 62);b(sHandle, sHandle + 32, 62);
    /*1*/trofidal.t(fN, "(s1, s1 + 32, 62) [checking tab[61]");trofidal.tInt(s1[61], sHandle[61]); 
    trofidal.checkLeaksNoCheck();
    set_mem(s1, sHandle);
    a(s1, s1 + 99, 1);b(sHandle, sHandle + 99, 1);
    /*1*/trofidal.t(fN, "(s1, s1 + 99, 1) [checking tab[0]");trofidal.tInt(s1[0], sHandle[0]); 
    set_mem(s1, sHandle);
    a(s1, s1, 0);b(sHandle, sHandle, 0);
    /*1*/trofidal.t(fN, "(s1, s1 , 0) [checking tab[0]");trofidal.tInt(s1[0], sHandle[0]); 
    set_mem(s1, sHandle);
    a(s1, s1 + 42, 42);b(sHandle, sHandle + 42, 42);
    /*1*/trofidal.t(fN, "(s1, s1, 42) [checking tab[42]");trofidal.tInt(s1[42], sHandle[42]); 
    set_mem(s1, sHandle);
    a(s1, s1 + 1, 99);b(sHandle, sHandle + 1, 99);
    /*1*/trofidal.t(fN, "(s1, s1 + 1, 99) [checking tab[99]");trofidal.tInt(s1[99], sHandle[99]); 
    set_mem(s1, sHandle);
    a(s1 + 1, s1, 42);b(sHandle + 1, sHandle, 42);
    /*1*/trofidal.t(fN, "(s1 + 1, s1, 42) [checking tab[1]");trofidal.tInt(s1[1], sHandle[1]); 
}