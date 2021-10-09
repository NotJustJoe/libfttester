/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:31:04 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/09 13:04:07 by trofidal         ###   ########.fr       */
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
    std::string fN = "strlen"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);

    #define a ft_strlen
    #define b strlen
    #define s std::to_string
    #define t setTesting

    /*1*/trofidal.t(fN, "NULL");trofidal.tInt(a(NULL), 0); 
    /*2*/trofidal.t(fN, "trofidal!");trofidal.tInt(a("trofidal!"), b("trofidal!")); 
    /*3*/trofidal.t(fN, """");trofidal.tInt(a(""), b("")); 
    /*4*/trofidal.t(fN, "abcde0\rfghijkl0mno\tpqrst0uvwxyz");trofidal.tInt(a("abcde0\rfghijkl0mno\tpqrst0uvwxyz"), b("abcde0\rfghijkl0mno\tpqrst0uvwxyz")); 
    /*5*/trofidal.t(fN, "Asma is cool, Asma is friendly, be like Asma");trofidal.tInt(a("Asma is cool, Asma is friendly, be like Asma"), b("Asma is cool, Asma is friendly, be like Asma")); 
    /*6*/trofidal.t(fN, "if you failed this, i dont know what to say");trofidal.tInt(a("if you failed this, i dont know what to say"), b("if you failed this, i dont know what to say")); 
}