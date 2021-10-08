/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:05:17 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 14:32:50 by trofidal         ###   ########.fr       */
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
    std::string fN = "strlcpy"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
	char dest[100]; memset(dest, 0, 99);
	char destReal[100]; memset(destReal, 0, 99);
	char srcs[100]; memset(srcs, 0, 99);
	int lenFake = 0, lenReal = 0;

	strcpy(srcs, "mais c'est quoi ce string la, le mec il passe philo a 4 403 200 200 il se sent plus, oui je flex..");
    #define a ft_strlcpy
    #define b strlcpy
    #define s std::to_string
    #define t setTesting
	
	lenFake = a(dest, srcs, 32); lenReal = b(destReal, srcs, 32);
	/*1*/trofidal.t(fN, "(dest, srcs, 28) [checking tab[28]");trofidal.tInt(destReal[28] == dest[28], lenFake == lenReal); 
	lenFake = 0; lenReal = 0; memset(dest, 0, 99);
	lenFake = a(dest, srcs, 99); lenReal = b(destReal, srcs, 99);
	/*2*/trofidal.t(fN, "(dest, srcs, 99) [checking tab[99]");trofidal.tInt(destReal[98] == dest[98], lenFake == lenReal); 
	lenFake = 0; lenReal = 0; memset(dest, 0, 99);
	lenFake = a(dest, srcs, 0); lenReal = b(destReal, srcs, 0);
	/*3*/trofidal.t(fN, "(dest, srcs, 0) [checking tab[0]");trofidal.tInt(destReal[0] != dest[0], lenFake == lenReal); 
	lenFake = 0; lenReal = 0; memset(dest, 0, 99);
	lenFake = a(dest, srcs, 99); lenReal = b(destReal, srcs, 99);
	/*4*/trofidal.t(fN, "(dest, srcs, 99) [checking tab[50]");trofidal.tInt(destReal[50] == dest[50], lenFake == lenReal); 
	lenFake = 0; lenReal = 0; memset(dest, 0, 99);
	lenFake = a(dest, srcs, 1); lenReal = b(destReal, srcs, 1);
	/*5*/trofidal.t(fN, "(dest, srcs, 1) [checking tab[0]");trofidal.tInt(destReal[0] == dest[0], lenFake == lenReal); 
	lenFake = 0; lenReal = 0; memset(dest, 0, 99);
	lenFake = a(dest, srcs, 32); lenReal = b(destReal, srcs, 32);
	/*6*/trofidal.t(fN, "(dest, srcs, 32) [checking tab[32]");trofidal.tInt(destReal[32] != dest[32], lenFake == lenReal); 
    /*****************/
}