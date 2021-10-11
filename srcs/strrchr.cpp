/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:40:15 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/09 12:58:15 by trofidal         ###   ########.fr       */
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
    Infos   trofidal(fN, 15);
    signal(SIGSEGV, segfault_handler);
	const char *retFake;
	const char *retReal;

    #define a ft_strrchr
    #define b strrchr
    #define s std::to_string
    #define t setTesting
	
	/*1*/trofidal.t(fN, "tibooo, 'o'");trofidal.tCharPtr(a("tibooo", 'o'), (char *)b("tibooo", 'o')); 
	/*2*/trofidal.t(fN, "NULL, 'o'");trofidal.tCharPtr(a(NULL, 'o'), (char *)b("", 'o')); 
	/*3*/trofidal.t(fN, "tabbbeererere, 'o'");trofidal.tCharPtr(a("tabbbeererere", 'o'), (char *)b("tabbbeererere", 'o')); 
	/*4*/trofidal.t(fN, """, 'o'");trofidal.tCharPtr(a("", 'o'), (char *)b("", 'o')); 
	/*5*/trofidal.t(fN, "trofidal, '4'");trofidal.tCharPtr(a("trofidal", '4'), (char *)b("trofidal", '4')); 
	/*6*/trofidal.t(fN, "trofidal, '2'");trofidal.tCharPtr(a("trofidal", '2'), (char *)b("trofidal", '2')); 
	/*7*/trofidal.t(fN, "trofidal, 's'");trofidal.tCharPtr(a("trofidal", 's'), (char *)b("trofidal", 's')); 
	/*8*/trofidal.t(fN, "trofidal, 'h'");trofidal.tCharPtr(a("trofidal", 'h'), (char *)b("trofidal", 'h')); 
	/*9*/trofidal.t(fN, "gggggggggggggggghg, 'g'");trofidal.tCharPtr(a("gggggggggggggggghg", 'g'), (char *)b("gggggggggggggggghg", 'g')); 
	/*10*/trofidal.t(fN, """, 0");trofidal.tCharPtr(a("", 0), (char *)b("", 0)); 
	/*11*/trofidal.t(fN, "asma, \\0");trofidal.tCharPtr(a("asma", '\0'), (char *)b("asma", '\0')); 
	/*12*/trofidal.t(fN, "youssouuuu le foufouuuu, ' '");trofidal.tCharPtr(a("youssouuuu le foufouuuu", ' '), (char *)b("youssouuuu le foufouuuu", ' ')); 
}

/*
	retFake = a("tibooo", 'o'); retReal = b("tibooo", 'o');
	trofidal.t(fN, "(tibooo, 'o')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a(NULL, 'o'); retReal = b("", 'o'); //Real function segfault in CPP with NULL
	trofidal.t(fN, "(NULL, 'o')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("tabbbeererere", 'o'); retReal = b("tabbbeererere", 'o');
	trofidal.t(fN, "(tabbbeererere, 'o')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("", 'o'); retReal = b("", 'o');
	trofidal.t(fN, "("", 'o')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("trofidal", '4'); retReal = b("trofidal", '4');
	trofidal.t(fN, "(trofidal, '4')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("trofidal", '2'); retReal = b("trofidal", '2');
	trofidal.t(fN, "(trofidal, '2')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("trofidal", 's'); retReal = b("trofidal", 's');
	trofidal.t(fN, "(trofidal, 's')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("trofidal", 'h'); retReal = b("trofidal", 'h');
	trofidal.t(fN, "(trofidal, 'h')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("gggggggggggggggghg", 'g'); retReal = b("gggggggggggggggghg", 'g');
	trofidal.t(fN, "(gggggggggggggggghg, 'g')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("", 0); retReal = b("", 0);
	trofidal.t(fN, "("", 0)");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("asma", '\0'); retReal = b("asma", '\0');
	trofidal.t(fN, "(asma, \\0)");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
	retFake = a("youssouuuu le foufouuuu", ' '); retReal = b("youssouuuu le foufouuuu", ' ');
	trofidal.t(fN, "(youssouuuu le foufouuuu, ' ')");trofidal.tInt(retFake ? 1 : 0, retReal ? 1 : 0); 
*/
