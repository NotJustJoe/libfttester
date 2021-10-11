/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:27:01 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 16:09:42 by trofidal         ###   ########.fr       */
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
    std::string fN = "strnstr"; //Function Name
    Infos   trofidal(fN, 11);
	char	str[] = {"little string is enough"};
	char	findme[] = {"string"};
	char	reallyvoidy[] = {""};
    signal(SIGSEGV, segfault_handler);

    #define a ft_strnstr
    #define b strnstr
    #define s std::to_string
    #define t setTesting
	
	/*1*/trofidal.t(fN, "str, findme, 10");trofidal.tCharPtr(a(str, findme, 10), b(str, findme, 10));
	/*2*/trofidal.t(fN, "str, findme, -50");trofidal.tCharPtr(a(str, findme, -50), b(str, findme, -50));
	/*3*/trofidal.t(fN, "str, you, -10");trofidal.tCharPtr(a(str, "findme", -10), b(str, "findme", -10));
	/*4*/trofidal.t(fN, "str, l, -1");trofidal.tCharPtr(a(str, "l", -1), b(str, "l", -1));
	/*5*/trofidal.t(fN, "str, findme, -1");trofidal.tCharPtr(a(str, "", -1), b(str, "", -1));
	/*6*/trofidal.t(fN, "str, little string is enough, -1");trofidal.tCharPtr(a(str, "little string is enough", -1), b(str, "little string is enough", -1));
	/*7*/trofidal.t(fN, "str, little string is enough, 0");trofidal.tCharPtr(a(str, "little string is enough", 0), b(str, "little string is enough", 0));
	/*8*/trofidal.t(fN, "str, ough, 22");trofidal.tCharPtr(a(str, "ough", 22), b(str, "ough", 22));
	/*9*/trofidal.t(fN, "str, findme, 10");trofidal.tCharPtr(a(str, findme, 10), b(str, findme, 10));
	/*10*/trofidal.t(fN, "str, little string is enough, 0");trofidal.tCharPtr(a(findme, "little string is enough", 0), b(findme, "little string is enough", 0));
	/*11*/trofidal.t(fN, "str, ough, 22");trofidal.tCharPtr(a(str, "ough", 22), b(str, "ough", 22));
}
