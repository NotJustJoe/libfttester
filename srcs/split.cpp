/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:05 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/29 09:49:36 by trofidal         ###   ########.fr       */
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
    std::string fN = "split"; //Function Name
    Infos   trofidal(fN, 12);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_split
    #define b strdup
    #define s std::to_string
    #define t setTesting
    
    char    **fakeSplit;
	char	*NPtr;
    char    *realSplit;
    char    tempReal[255];
    char    tempFake[255];

    fakeSplit = a("je suis toto", ' ');realSplit = b("je");
    /*1*/trofidal.t(fN, "je suis toto, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 3);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("je suis toto", ' ');realSplit = b("suis");
    /*2*/trofidal.t(fN, "je suis toto, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 5);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[1]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("je suis toto", ' ');realSplit = b("toto");
    /*3*/trofidal.t(fN, "je suis toto, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 5);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[2]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("je suis toto", '\0');realSplit = b("je suis toto");
    /*4*/trofidal.t(fN, "je suis toto, \\0");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 14);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("             ", ' ');realSplit = b("");
    /*5*/trofidal.t(fN, "             , ' '");trofidal.tIntPtr(1, 1);
    NPtr = fakeSplit[0]; free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(NPtr == NULL ? 1 : 0, 1);
    fakeSplit = a("je suis toto", ' ');realSplit = b("je");
    /*6*/trofidal.t(fN, "je suis toto, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 3);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("LeStringSympas", ' ');realSplit = b("LeStringSympas");
    /*7*/trofidal.t(fN, "LeStringSympas, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 16);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a(" LeStringSympas", ' ');realSplit = b("LeStringSympas");
    /*8*/trofidal.t(fN, " LeStringSympas, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 16);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("LeStringSympas ", ' ');realSplit = b("LeStringSympas");
    /*9*/trofidal.t(fN, "LeStringSympas , ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[0], 16);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[0]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("fd5dfg5fd5f1g5f1gdf5g1d5f1g", '5');realSplit = b("dfg");
    /*10*/trofidal.t(fN, "fd5dfg5fd5f1g5f1gdf5g1d5f1g, '5'");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[1], 4);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[1]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("a a a a aaa a", ' ');realSplit = b("aaa");
    /*11*/trofidal.t(fN, "a a a a aaa a, ' '");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeSplit[4], 4);strcpy(tempReal, realSplit);strcpy(tempFake, fakeSplit[4]);free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeSplit = a("", ' ');realSplit = b("aaa");
    /*12*/trofidal.t(fN, "aaa, ' '");trofidal.tIntPtr(1, 1);
    NPtr = fakeSplit[0]; free_tabs(fakeSplit); free(realSplit);trofidal.showLeaks(NPtr == NULL ? 1 : 0, 1);
}