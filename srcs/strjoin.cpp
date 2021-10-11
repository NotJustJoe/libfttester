/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 08:07:33 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 15:02:13 by trofidal         ###   ########.fr       */
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
    std::string fN = "strjoin"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_strjoin
    #define b strndup
    #define s std::to_string
    #define t setTesting
    
    char    *realSubstr;
    char    *fakeSubstr;
    char    tempReal[255];
    char    tempFake[255];
    int     ret = 0, retReal = 0;

    fakeSubstr = a("", "");realSubstr = b("", 1);
    /*1*/trofidal.t(fN, "");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 3);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("42Nice", "Is cool");realSubstr = b("42NiceIs cool", 50);
    /*2*/trofidal.t(fN, "42Nice, Is cool");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 16);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeSubstr = a("hello everyone !", "");realSubstr = b("hello everyone !", 50);
    /*3*/trofidal.t(fN, "hello everyone !, ");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 18);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    
    fakeSubstr = a("", "aaaaaaaaaaaaaaaaaaaaaaaaa");realSubstr = b("aaaaaaaaaaaaaaaaaaaaaaaaa", 200);
    /*4*/trofidal.t(fN, ", aaaaaaaaaaaaaaaaaaaaaaaaa");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 27);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("0560e", "0560e");realSubstr = b("0560e0560e", 50);
    /*5*/trofidal.t(fN, "0560e, 0560e");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr));
    trofidal.tripouilleCheck(fakeSubstr, 13);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);

    fakeSubstr = a("pendant (str[i])", "1");realSubstr = b("pendant (str[i])1", 100);
    /*6*/trofidal.t(fN, "pendant (str[i]), 1");trofidal.tIntPtr(strcmp(fakeSubstr, realSubstr) == 0 ? 0 : 1, strlen(fakeSubstr) == strlen(realSubstr)); 
    trofidal.tripouilleCheck(fakeSubstr, 19);strcpy(tempReal, realSubstr);strcpy(tempFake, fakeSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
}