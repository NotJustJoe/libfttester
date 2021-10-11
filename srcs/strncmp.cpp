/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:42:26 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 16:09:46 by trofidal         ###   ########.fr       */
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
    std::string fN = "strncmp";
    Infos   trofidal(fN, 11);
    signal(SIGSEGV, segfault_handler);

    #define a ft_strncmp
    #define b strncmp
    #define s std::to_string
    #define t setTesting
	
	/*1*/trofidal.t(fN, "tibooo, tibooo, 42");trofidal.tInt(a("tibooo", "tibooo", 42) ? 1 : 0, b("tibooo", "tibooo", 42)); 
	/*2*/trofidal.t(fN, "tabbbeererere, fffffffffff, -10");trofidal.tInt(a("tabbbeererere", "fffffffffff", -10) ? 1 : 0, b("tabbbeererere", "fffffffffff", -10)); 
	/*3*/trofidal.t(fN, """, "", 15");trofidal.tInt(a("", "", 15) ? 1 : 0, b("", "", 15)); 
	/*4*/trofidal.t(fN, "trofidal, 4, 1");trofidal.tInt(a("trofidal", "4", 1) ? 1 : 0, b("trofidal", "4", 1)); 
	/*5*/trofidal.t(fN, "trofidal, 48941981891, 32");trofidal.tInt(a("trofidal", "48941981891", 32) ? 1 : 0, b("trofidal", "48941981891", 32)); 
	/*6*/trofidal.t(fN, "trofidal, trofidal, 42");trofidal.tInt(a("trofidal", "trofidal", 42) ? 1 : 0, b("trofidal", "trofidal", 42)); 
	/*7*/trofidal.t(fN, """, a, 0");trofidal.tInt(a("", "a", 0) ? 1 : 0, b("", "a", 0)); 
	/*8*/trofidal.t(fN, "trofidal, ggggggggggggggggh, 6565");trofidal.tInt(a("trofidal", "ggggggggggggggggh", 6565) ? 1 : 0, b("trofidal", "ggggggggggggggggh", 6565)); 
	/*9*/trofidal.t(fN, "a, "", 0");trofidal.tInt(a("a", "", 0) ? 1 : 0, b("a", "", 0)); 
	/*10*/trofidal.t(fN, """, a, 0");trofidal.tInt(a("", "a", 0) ? 1 : 0, b("", "a", 0)); 
	/*11*/trofidal.t(fN, """, "", a");trofidal.tInt(a("", "", 1) ? 1 : 0, b("", "", 1)); 
}
