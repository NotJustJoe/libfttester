/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:37:00 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 00:44:55 by trofidal         ###   ########.fr       */
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
    std::string fN = "strtrim"; //Function Name
    Infos   trofidal(fN, 9);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_strtrim
    #define b strndup
    #define s std::to_string
    #define t setTesting
    
    char    *realSubstr;
    char    *fakeSubstr;
	char	tempFake[255];
	char	tempReal[255];
    int     ret = 0, retReal = 0;

    fakeSubstr = a("", "");realSubstr = b("", 1);
    /*1*/trofidal.t(fN, "");trofidal.tIntPtr(1, 1);
	trofidal.tripouilleCheck(fakeSubstr, 3);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));

    fakeSubstr = a("42Nice", "Is cool");realSubstr = b("42Nice", 50);
    /*2*/trofidal.t(fN, "42Nice, Is cool");trofidal.tIntPtr(1, 1);
	trofidal.tripouilleCheck(fakeSubstr, 3);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));
    
    fakeSubstr = a("hello everyone !", "");realSubstr = b("hello everyone !", 50);
    /*3*/trofidal.t(fN, "hello everyone !, ");trofidal.tIntPtr(1, 1);
	trofidal.tripouilleCheck(fakeSubstr, 18);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));
    
    fakeSubstr = a("", "aaaaaaaaaaaaaaaaaaaaaaaaa");realSubstr = b("", 200);
    /*4*/trofidal.t(fN, ", aaaaaaaaaaaaaaaaaaaaaaaaa");trofidal.tIntPtr(1, 1);
	trofidal.tripouilleCheck(fakeSubstr, 3);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));

    fakeSubstr = a("0560e", "0560e");realSubstr = b("", 50);
    /*5*/trofidal.t(fN, "0560e, 0560e");trofidal.tIntPtr(1, 1);
	trofidal.tripouilleCheck(fakeSubstr, 3);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));

    fakeSubstr = a("pendant (str[i])", "1");realSubstr = b("pendant (str[i])", 100);
    /*6*/trofidal.t(fN, "pendant (str[i]), 1");trofidal.tIntPtr(1, 1); 
	trofidal.tripouilleCheck(fakeSubstr, 17);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));
	
    fakeSubstr = a("llpelndlant (sltlr[i])l", "l");realSubstr = b("pelndlant (sltlr[i])", 100);
    /*7*/trofidal.t(fN, "llpelndlant (sltlr[i])l, 1");trofidal.tIntPtr(1, 1); 
	trofidal.tripouilleCheck(fakeSubstr, 21);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));

    fakeSubstr = a("YYYYYYYYpenYYYdanYYYYt (strYYYY[i])YYYY", "YYYY");realSubstr = b("penYYYdanYYYYt (strYYYY[i])", 100);
    /*8*/trofidal.t(fN, "YYYYYYYYpenYYYdanYYYYt (strYYYY[i])YYYY, 1");trofidal.tIntPtr(1, 1);  
 	trofidal.tripouilleCheck(fakeSubstr, 21);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));

    fakeSubstr = a("pendant (str[i])", "pendant (str[i])");realSubstr = b("", 100);
    /*9*/trofidal.t(fN, "pendant (str[i]), pendant (str[i])");trofidal.tIntPtr(1, 1); 
	trofidal.tripouilleCheck(fakeSubstr, 2);strcpy(tempFake, fakeSubstr);strcpy(tempReal, realSubstr);free(fakeSubstr); free(realSubstr);trofidal.showLeaks(strcmp(tempReal, tempFake) == 0 ? 1 : 0, strlen(tempReal) == strlen(tempFake));
}