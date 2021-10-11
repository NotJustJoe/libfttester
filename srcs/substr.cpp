/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:25:32 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 10:43:08 by trofidal         ###   ########.fr       */
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
    std::string fN = "substr"; //Function Name
    Infos   trofidal(fN, 9);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_substr
    #define b strndup
    #define s std::to_string
    #define t setTesting
    
    char    *realSubstr;
    char    *fakeSubstr;
    char    tempReal[255];
    char    tempFake[255];
    int     ret = 0, retReal = 0;

    fakeSubstr = a("", 0, 100);realSubstr = b("", 100);
    /*1*/trofidal.t(fN, "");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 1);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));

    fakeSubstr = a("42Nice", 2, 50);realSubstr = b("42Nice" + 2, 50);
    /*2*/trofidal.t(fN, "42Nice, 2, 50");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 5);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeSubstr = a("hello everyone !", 50, 20);realSubstr = b("hello everyone !", 0);
    /*3*/trofidal.t(fN, "hello everyone !, 50, 20");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 1);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeSubstr = a("aaaaaaaaaaaaaaaaaaaaaaaaa", 0, 200);realSubstr = b("aaaaaaaaaaaaaaaaaaaaaaaaa", 200);
    /*4*/trofidal.t(fN, "aaaaaaaaaaaaaaaaaaaaaaaaa");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 26);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("0560ez65r1rtye961rty650er56tyh0r65", 5, 20);realSubstr = b("0560ez65r1rtye961rty650er56tyh0r65f" + 5, 20);
    /*5*/trofidal.t(fN, "0560ez65r1rtye961rty650er56tyh0r65, 5, 20");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 21);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("pendant (str[i])", 1, 1);realSubstr = b("pendant (str[i])" + 1, 1);
    /*6*/trofidal.t(fN, "pendant (str[i]), 1, 1");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr)); 
    trofidal.tripouilleCheck(fakeSubstr, 2);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("pendant (str[i])", 16, 17);realSubstr = b("pendant (str[i])" + 16, 17);
    /*7*/trofidal.t(fN, "pendant (str[i]), 16, 17");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr)); 
    trofidal.tripouilleCheck(fakeSubstr, 2);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("pendant (str[i])", 0, 0);realSubstr = strdup("");
    /*8*/trofidal.t(fN, "pendant (str[i]), 0, 0");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr)); 
    trofidal.tripouilleCheck(fakeSubstr, 2);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("", 0, 17);realSubstr = realSubstr = strdup("");
    /*9*/trofidal.t(fN, """, 16, 17");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 1 : 0, strlen(fakeSubstr) == strlen(realSubstr)); 
    trofidal.tripouilleCheck(fakeSubstr, 2);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
}