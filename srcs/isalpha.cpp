/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:46:18 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/06 19:36:06 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern "C" {
#define new bar
#include "../../libft.h"
#undef new
};

#include "../includes/main_header.hpp"

int main(void){
    Infos   trofidal("isalpha", 18);
    signal(SIGSEGV, segfault_handler);
    
    /*1*/try {
        ft_isalpha(116);
        std::cerr << "ok" << std::endl;
        //trofidal.testerInt(ft_isalpha(116), isalpha(116), "tested", "116");
    }
    catch (std::exception & e){
        std::cout << "coucou" << std::endl;
    }
    /*2*/trofidal.testerInt(ft_isalpha(72), isalpha(72), "tested", "72");
    /*3*/trofidal.testerInt(ft_isalpha(111), isalpha(111), "tested", "111");
    /*4*/trofidal.testerInt(ft_isalpha(77), isalpha(77), "tested", "77");
    /*5*/trofidal.testerInt(ft_isalpha(97), isalpha(97), "tested", "97");
    /*6*/trofidal.testerInt(ft_isalpha(83), isalpha(83), "tested", "83");
    /*7*/trofidal.testerInt(ft_isalpha(52), isalpha(52), "tested", "52");
    /*8*/trofidal.testerInt(ft_isalpha(50), isalpha(50), "tested", "50");
    /*9*/trofidal.testerInt(ft_isalpha(48), isalpha(48), "tested", "48");
    /*10*/trofidal.testerInt(ft_isalpha(13), isalpha(13), "tested", "13");
    /*11*/trofidal.testerInt(ft_isalpha(3), isalpha(3), "tested", "3");
    /*12*/trofidal.testerInt(ft_isalpha(32), isalpha(32), "tested", "32");
    /*13*/trofidal.testerInt(ft_isalpha(127), isalpha(127), "tested", "127");
    /*14*/trofidal.testerInt(ft_isalpha(0), isalpha(0), "tested", "0");
    /* Harder tests */
    /*15*/trofidal.testerInt(ft_isalpha(UCHAR_MAX), isalpha(UCHAR_MAX), "not tested by moulinette", "255");
    /*16*/trofidal.testerInt(ft_isalpha(2147483647), isalpha(2147483647), "not tested by moulinette", "2147483647");
    /*17*/trofidal.testerInt(ft_isalpha(-2147483648), isalpha(-2147483648), "not tested by moulinette", "-2147483648");

    /*
make bonus -C ../ && cp ../libft.a ./ && clang++ srcs/isalpha.cpp common/infos.cpp common/sig_handler.cpp libft.a && ./a.out
    */
}