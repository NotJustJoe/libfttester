/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:40:15 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 16:10:17 by trofidal         ###   ########.fr       */
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
    std::string fN = "strrchr"; //Function Name
    Infos   trofidal(fN, 11);
    signal(SIGSEGV, segfault_handler);
	const char *retFake;
	const char *retReal;

    #define a ft_strrchr
    #define b strrchr
    #define s std::to_string
    #define t setTesting
	
	/*1*/trofidal.t(fN, "tibooo, 'o'");trofidal.tCharPtr(a("tibooo", 'o'), (char *)b("tibooo", 'o')); 
	/*2*/trofidal.t(fN, "tabbbeererere, 'o'");trofidal.tCharPtr(a("tabbbeererere", 'o'), (char *)b("tabbbeererere", 'o')); 
	/*3*/trofidal.t(fN, """, 'o'");trofidal.tCharPtr(a("", 'o'), (char *)b("", 'o')); 
	/*4*/trofidal.t(fN, "trofidal, '4'");trofidal.tCharPtr(a("trofidal", '4'), (char *)b("trofidal", '4')); 
	/*5*/trofidal.t(fN, "trofidal, '2'");trofidal.tCharPtr(a("trofidal", '2'), (char *)b("trofidal", '2')); 
	/*6*/trofidal.t(fN, "trofidal, 's'");trofidal.tCharPtr(a("trofidal", 's'), (char *)b("trofidal", 's')); 
	/*7*/trofidal.t(fN, "trofidal, 'h'");trofidal.tCharPtr(a("trofidal", 'h'), (char *)b("trofidal", 'h')); 
	/*8*/trofidal.t(fN, "gggggggggggggggghg, 'g'");trofidal.tCharPtr(a("gggggggggggggggghg", 'g'), (char *)b("gggggggggggggggghg", 'g')); 
	/*9*/trofidal.t(fN, """, 0");trofidal.tCharPtr(a("", 0), (char *)b("", 0)); 
	/*10*/trofidal.t(fN, "asma, \\0");trofidal.tCharPtr(a("asma", '\0'), (char *)b("asma", '\0')); 
	/*11*/trofidal.t(fN, "youssouuuu le foufouuuu, ' '");trofidal.tCharPtr(a("youssouuuu le foufouuuu", ' '), (char *)b("youssouuuu le foufouuuu", ' ')); 
}
