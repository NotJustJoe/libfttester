/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:46:18 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/06 17:46:51 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_header.hpp"

int main(void){
    Infos   trofidal("isalpha", 19);
    signal(SIGSEGV, segfault_handler);
    
    /*1*/trofidal.testerChar(ft_isalpha('t'), isalpha('t'), "tested");
    /*2*/trofidal.testerChar(ft_isalpha('H'), isalpha('H'), "tested");
    /*3*/trofidal.testerChar(ft_isalpha('o'), isalpha('o'), "tested");
    /*4*/trofidal.testerChar(ft_isalpha('M'), isalpha('M'), "tested");
    /*5*/trofidal.testerChar(ft_isalpha('a'), isalpha('a'), "tested");
    /*6*/trofidal.testerChar(ft_isalpha('S'), isalpha('S'), "tested");
    /*7*/trofidal.testerChar(ft_isalpha('4'), isalpha('4'), "tested");
    /*8*/trofidal.testerChar(ft_isalpha('2'), isalpha('2'), "tested");
    /*9*/trofidal.testerChar(ft_isalpha('2'), isalpha('2'), "tested");
    /*10*/trofidal.testerChar(ft_isalpha(13), isalpha(13), "tested");
    /*11*/trofidal.testerChar(ft_isalpha(3), isalpha(3), "tested");
    /*12*/trofidal.testerChar(ft_isalpha(32), isalpha(32), "tested");
    /*13*/trofidal.testerChar(ft_isalpha(127), isalpha(127), "tested");
    /*14*/trofidal.testerChar(ft_isalpha(0), isalpha(0), "tested");
    /* Harder tests */
    /*15*/trofidal.testerChar(ft_isalpha(UCHAR_MAX), isalpha(UCHAR_MAX), "not tested by moulinette");
    /*16*/trofidal.testerChar(ft_isalpha(2147483648), isalpha(2147483647), "not tested by moulinette");
    /*17*/trofidal.testerChar(ft_isalpha(-2147483648), isalpha(-2147483648), "not tested by moulinette");
    /*18*/trofidal.testerChar(ft_isalpha(NULL), isalpha(NULL), "nullable");
    /*19*/trofidal.testerChar(ft_isalpha(NULL), isalpha(NULL), "nullable");
}