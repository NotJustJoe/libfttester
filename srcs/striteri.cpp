/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:37:16 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 13:54:51 by trofidal         ###   ########.fr       */
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

void	iteri(unsigned int i, char *c){
	if (i + *c > 127){
		*c += (i - 127);
		return ;
	}
	*c += i;
}

int main(void){
    std::string fN = "striteri"; //Function Name
    Infos   trofidal(fN, 4);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_striteri
    #define b strdup
    #define s std::to_string
    #define t setTesting
    
    char    *realStrdup;
    char    *fakeStrdup;
    char    tempReal[255];
    char    tempFake[255];


	std::cout << "\033[1;32miteri function | " << "return : unsigned int i + char c\033[0m" << std::endl;
    fakeStrdup = strdup("0000000000"); realStrdup = strdup("0123456789"); a(fakeStrdup, iteri);
    /*1*/trofidal.t(fN, "0000000000, iteri");trofidal.tIntPtr(1, 1);
    strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeStrdup = strdup("aaaaaaaaa"); realStrdup = strdup("abcdefghi"); a(fakeStrdup, iteri);
	/*2*/trofidal.t(fN, "aaaaaaaaa, iteri");trofidal.tIntPtr(1, 1);
    strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
    fakeStrdup = strdup("0"); realStrdup = strdup("0"); a(fakeStrdup, iteri);
    /*3*/trofidal.t(fN, "0, iteri");trofidal.tIntPtr(1, 1);
    strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
   fakeStrdup = strdup(""); realStrdup = strdup(""); a(fakeStrdup, iteri);
    /*4*/trofidal.t(fN, ", iteri");trofidal.tIntPtr(1, 1);
    strcpy(tempReal, realStrdup);strcpy(tempFake, fakeStrdup);free(fakeStrdup); free(realStrdup);trofidal.showLeaks(strcmp(tempFake, tempReal) == 0 ? 1 : 0, strlen(tempFake) == strlen(tempReal) ? 1 : 0);
}