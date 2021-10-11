/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:04:46 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 15:02:27 by trofidal         ###   ########.fr       */
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

char	Mapi(unsigned int i, char c){
	if (i + c > 127)
		return (i + c - 127);
	return (c + i);
}

int main(void){
    std::string fN = "strmapi"; //Function Name
    Infos   trofidal(fN, 3);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_strmapi
    #define b strdup
    #define s std::to_string
    #define t setTesting
    
    char    *realStrdup;
    char    *fakeStrdup;
    char    tempReal[255];
    char    tempFake[255];


	std::cout << "\033[1;32mMapi function | " << "return : unsigned int i + char c\033[0m" << std::endl;
    fakeStrdup = a("aaaa", Mapi);realStrdup = b("abcd");
    /*1*/trofidal.t(fN, "aaaa, Mapi");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeStrdup, 5);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
	fakeStrdup = a("12345", Mapi);realStrdup = b("13579");
	/*2*/trofidal.t(fN, "12345, Mapi");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeStrdup, 6);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeStrdup = a("", Mapi);realStrdup = b("");
    /*3*/trofidal.t(fN, ", Mapi");trofidal.tIntPtr(1, 1);
    trofidal.tripouilleCheck(fakeStrdup, 2);strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
}