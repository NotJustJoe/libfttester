/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:34:07 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/29 09:58:27 by trofidal         ###   ########.fr       */
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
    std::string fN = "atoi"; //Function Name
    Infos   trofidal(fN, 18);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_atoi
    #define b atoi
    #define s std::to_string
    #define t setTesting
    
    /*1*/trofidal.t(fN, "(a)");trofidal.tInt(a("a"), b("a")); 
    /*2*/trofidal.t(fN, "(papa)");trofidal.tInt(a("papa"), b("papa")); 
    /*3*/trofidal.t(fN, "(+q)");trofidal.tInt(a("+q"), b("+q"));
    /*4*/trofidal.t(fN, "(--a)");trofidal.tInt(a("--a"), b("--a")); 
    /*5*/trofidal.t(fN, "(++a)");trofidal.tInt(a("++a"), b("++a")); 
    /*6*/trofidal.t(fN, "(--42)");trofidal.tInt(a("--42"), b("--42")); 
    /*7*/trofidal.t(fN, "(++42)");trofidal.tInt(a("++42"), b("++42")); 
    /*8*/trofidal.t(fN, "(0)");trofidal.tInt(a("0"), b("0")); 
    /*9*/trofidal.t(fN, "(+656d3)");trofidal.tInt(a("+656d3"), b("+656d3")); 
    /*10*/trofidal.t(fN, "(-+656)");trofidal.tInt(a("-+656"), b("-+656")); 
    /*11*/trofidal.t(fN, "(65656)");trofidal.tInt(a("65656"), b("65656")); 
    /*12*/trofidal.t(fN, "(-+-++++)");trofidal.tInt(a("-+-++++"), b("-+-++++")); 
    /*13*/trofidal.t(fN, "(2147483647)");trofidal.tInt(a("2147483647"), b("2147483647")); 
    /*14*/trofidal.t(fN, "(-2147483648)");trofidal.tInt(a("-2147483648"), b("-2147483648")); 
    /*15*/trofidal.t(fN, "(000)");trofidal.tInt(a("000"), b("000")); 
    /*16*/trofidal.t(fN, "(59595959595)");trofidal.tInt(a("59595959595"), b("59595959595")); 
    /*17*/trofidal.t(fN, "()");trofidal.tInt(a(""), b("")); 
    /*18*/trofidal.t(fN, "(\\0)");trofidal.tInt(a("\0"), b("\0")); 
}