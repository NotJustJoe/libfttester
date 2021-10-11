/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:56:40 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 10:42:35 by trofidal         ###   ########.fr       */
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
    std::string fN = "strdup"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_strdup
    #define b strdup
    #define s std::to_string
    #define t setTesting
    
    char    *realStrdup;
    char    *fakeStrdup;
    char    tempReal[255];
    char    tempFake[255];
    int     ret = 0, retReal = 0;

    fakeStrdup = a("");realStrdup = b(""); ret = strcmp(fakeStrdup, ""); retReal = strcmp(realStrdup, "");
    /*1*/trofidal.t(fN, "");trofidal.tIntPtr(ret, retReal);
    trofidal.tripouilleCheck(fakeStrdup, 1);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeStrdup = a("42Nice");realStrdup = b("42Nice"); ret = strcmp(fakeStrdup, "42Nice"); retReal = strcmp(realStrdup, "42Nice");
    /*2*/trofidal.t(fN, "42Nice");trofidal.tIntPtr(ret, retReal);
    trofidal.tripouilleCheck(fakeStrdup, 7);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeStrdup = a("hello everyone !");realStrdup = b("hello everyone !"); ret = strcmp(fakeStrdup, "hello everyone !"); retReal = strcmp(realStrdup, "hello everyone !");
    /*3*/trofidal.t(fN, "hello everyone !");trofidal.tIntPtr(ret, retReal);
    trofidal.tripouilleCheck(fakeStrdup, 17);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeStrdup = a("aaaaaaaaaaaaaaaaaaaaaaaaa");realStrdup = b("aaaaaaaaaaaaaaaaaaaaaaaaa"); ret = strcmp(fakeStrdup, "aaaaaaaaaaaaaaaaaaaaaaaaa"); retReal = strcmp(realStrdup, "aaaaaaaaaaaaaaaaaaaaaaaaa");
    /*4*/trofidal.t(fN, "aaaaaaaaaaaaaaaaaaaaaaaaa");trofidal.tIntPtr(ret, retReal);
    trofidal.tripouilleCheck(fakeStrdup, 26);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeStrdup = a("0560ez65r1rtye961rty650er56tyh0r65");realStrdup = b("0560ez65r1rtye961rty650er56tyh0r65"); ret = strcmp(fakeStrdup, "0560ez65r1rtye961rty650er56tyh0r65"); retReal = strcmp(realStrdup, "0560ez65r1rtye961rty650er56tyh0r65");
    /*5*/trofidal.t(fN, "0560ez65r1rtye961rty650er56tyh0r65");trofidal.tIntPtr(ret, retReal);    
    trofidal.tripouilleCheck(fakeStrdup, 35);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeStrdup = a("pendant (str[i])");realStrdup = b("pendant (str[i])"); ret = strcmp(fakeStrdup, "pendant (str[i])"); retReal = strcmp(realStrdup, "pendant (str[i])");
    /*6*/trofidal.t(fN, "pendant (str[i])");trofidal.tIntPtr(ret, retReal);    
    trofidal.tripouilleCheck(fakeStrdup, 17);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
}