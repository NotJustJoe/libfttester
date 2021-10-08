/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:09:05 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 14:00:33 by trofidal         ###   ########.fr       */
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
    std::string fN = "toupper"; //Function Name
    Infos   trofidal(fN, 17);
    signal(SIGSEGV, segfault_handler);
    int v[] = {116, 72, 111, 77, 97, 83, 52, 50, 48, 13, 3, 32, 127, 0, UCHAR_MAX, 2147483647, -2147483648}; // Values
    
    #define a ft_toupper
    #define b toupper
    #define s std::to_string
    #define t setTesting
    
    /*1*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*2*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*3*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*4*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*5*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*6*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*7*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*8*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*9*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*10*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*11*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*12*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*13*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*14*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*15*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*16*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
    /*17*/trofidal.t(fN, s(v[trofidal.gTN()]));trofidal.tInt(a(v[trofidal.gTN()]), b(v[trofidal.gTN()]));
}