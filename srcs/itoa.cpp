/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:48:25 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/29 09:56:27 by trofidal         ###   ########.fr       */
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
    std::string fN = "itoa"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_itoa
    #define b strdup
    #define s std::to_string
    #define t setTesting
    
    char    *realItoa;
    char    *fakeItoa;
    char    tempReal[255];
    char    tempFake[255];
    int     ret = 0, retReal = 0;

    fakeItoa = a(2147483647);realItoa = b("2147483647");
    /*1*/trofidal.t(fN, "2147483647");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 12);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
    fakeItoa = a(-2147483648);realItoa = b("-2147483648");
    /*2*/trofidal.t(fN, "-2147483648   if this test is ko, maybe a LONG value can help :)");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 13);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
    fakeItoa = a(0);realItoa = b("0");
    /*3*/trofidal.t(fN, "0");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 2);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
	fakeItoa = a(51951);realItoa = b("51951");
    /*4*/trofidal.t(fN, "51951");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 7);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
	fakeItoa = a(1);realItoa = b("1");
    /*4*/trofidal.t(fN, "1");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 1);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
	fakeItoa = a(-51951);realItoa = b("-51951");
    /*4*/trofidal.t(fN, "-51951");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeItoa, 8);strcpy(tempReal, realItoa);strcpy(tempFake, fakeItoa);free(fakeItoa); free(realItoa);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal));
}
