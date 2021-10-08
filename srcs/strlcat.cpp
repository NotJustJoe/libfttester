/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:38:51 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 14:32:49 by trofidal         ###   ########.fr       */
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
    std::string fN = "strlcat"; //Function Name
    Infos   trofidal(fN, 15);
    signal(SIGSEGV, segfault_handler);
	char dest[100]; memset(dest, 0, 99);
	char destReal[100]; memset(destReal, 0, 99);
	char srcs[100]; memset(srcs, 0, 99);
	int lenFake = 0, lenReal = 0;

    #define a ft_strlcat
    #define b strlcat
    #define s std::to_string
    #define t setTesting
	
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 32); lenReal = b(destReal, srcs, 32);
	/*1*/trofidal.t(fN, "(dest, srcs, 32) [checking tab[15]");trofidal.tInt(destReal[15] == dest[15], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 1); lenReal = b(destReal, srcs, 1);
	/*2*/trofidal.t(fN, "(dest, srcs, 1) [checking tab[15]");trofidal.tInt(destReal[15] == dest[15], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 65); lenReal = b(destReal, srcs, 65);
	/*3*/trofidal.t(fN, "(dest, srcs, 65) [checking tab[37]");trofidal.tInt(destReal[37] == dest[37], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 99); lenReal = b(destReal, srcs, 99);
	/*4*/trofidal.t(fN, "(dest, srcs, 99) [checking tab[99]");trofidal.tInt(destReal[99] == dest[99], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, -1515); lenReal = b(destReal, srcs, -1515);
	/*5*/trofidal.t(fN, "(dest, srcs, -1515) [checking tab[0]");trofidal.tInt(destReal[0] == dest[0], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 195959); lenReal = b(destReal, srcs, 195959);
	/*6*/trofidal.t(fN, "(dest, srcs, 195959) [checking tab[65]");trofidal.tInt(destReal[65] == dest[65], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 0); lenReal = b(destReal, srcs, 0);
	/*7*/trofidal.t(fN, "(dest, srcs, 0) [checking tab[15]");trofidal.tInt(destReal[15] == dest[15], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 22); lenReal = b(destReal, srcs, 22);
	/*8*/trofidal.t(fN, "(dest, srcs, 22) [checking tab[22]");trofidal.tInt(destReal[22] == dest[22], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "");strcpy(destReal, "");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 3); lenReal = b(destReal, srcs, 3);
	/*9*/trofidal.t(fN, "(dest, srcs, 3) [checking tab[2]");trofidal.tInt(destReal[2] == dest[2], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh");strcpy(destReal, "oh");strcpy(srcs, "");
	lenFake = a(dest, srcs, 13); lenReal = b(destReal, srcs, 13);
	/*10*/trofidal.t(fN, "(dest, srcs, 13) [checking tab[2]");trofidal.tInt(destReal[2] == dest[2], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "");strcpy(destReal, "");strcpy(srcs, "");
	lenFake = a(dest, srcs, 10); lenReal = b(destReal, srcs, 10);
	/*11*/trofidal.t(fN, "(dest, srcs, 10) [checking tab[1]");trofidal.tInt(destReal[1] == dest[1], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "");strcpy(destReal, "");strcpy(srcs, "");
	lenFake = a(dest, srcs, 0); lenReal = b(destReal, srcs, 0);
	/*12*/trofidal.t(fN, "(dest, srcs, 0) [checking tab[0]");trofidal.tInt(destReal[0] == dest[0], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "lewle");strcpy(destReal, "lewle");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 13); lenReal = b(destReal, srcs, 13);
	/*13*/trofidal.t(fN, "(dest, srcs, 13) [checking tab[5]");trofidal.tInt(destReal[5] == dest[5], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "yyyyyyyyyyyy");strcpy(destReal, "yyyyyyyyyyyy");strcpy(srcs, "le petit testeur qui carry");
	lenFake = a(dest, srcs, 10); lenReal = b(destReal, srcs, 10);
	/*14*/trofidal.t(fN, "(dest, srcs, 10) [checking tab[11]");trofidal.tInt(destReal[11] == dest[11], lenFake == lenReal); 
	memset(dest, 0, 99); memset(destReal, 0, 99); memset(srcs, 0, 99);strcpy(dest, "oh la La enchainement");strcpy(destReal, "oh la La enchainement");strcpy(srcs, "le petit testeur qui carry truc de ouuuuuuf enfaite WOW");
	lenFake = a(dest, srcs, 99); lenReal = b(destReal, srcs, 99);
	/*15*/trofidal.t(fN, "(dest, srcs, 99) [checking tab[69]");trofidal.tInt(destReal[69] == dest[69], lenFake == lenReal); 
	/*****************/
}