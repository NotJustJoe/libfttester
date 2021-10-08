/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:09:02 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 16:19:27 by trofidal         ###   ########.fr       */
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
    std::string fN = "memcmp"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char tab[] = {0, 1, 9, 6, 5, 3, -32, 65, 84, 2, 32, 81, 2};
	char tabDub[] = {0, 1, 9, 6, 5, 3, 32, 65, 84, 2, 32, -81, 2};
	char randomStr[] = {0, -98, 65, 34, 21, 0, 84, 75, 65, 0, 32, 3, 0};
	char randomStrNd[] = {65, 2, 0, 4, 0, 87, 98, -65, 0, 2 ,7, 32, 0};

    #define a ft_memcmp
    #define b memcmp
    #define s std::to_string
    #define t setTesting

    /*1*/trofidal.t(fN, "(tab, tabDub, 0)");trofidal.tInt(a(tab, tabDub, 0), b(tab, tabDub, 0));
    /*2*/trofidal.t(fN, "(tab, tabDub, 8)");trofidal.tInt(a(tab, tabDub, 8), b(tab, tabDub, 8)); 
    /*3*/trofidal.t(fN, "(tab, randomStr, 1)");trofidal.tInt(a(tab, randomStr, 1), b(tab, randomStr, 1)); 
    /*4*/trofidal.t(fN, "(tab, randomStrNd, 1)");trofidal.tInt(a(tab, randomStrNd, 1), b(tab, randomStrNd, 42)); 
    /*5*/trofidal.t(fN, "(tab, randomStr, 5)");trofidal.tInt(a(tab, randomStr, 5), b(tab, randomStr, 5)); 
    /*6*/trofidal.t(fN, "(tab, randomStrNd, 1)");trofidal.tInt(a(tab, randomStrNd, 1), b(tab, randomStrNd, 1)); 
}
