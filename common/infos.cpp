/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:19:46 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/07 09:24:02 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/variables.hpp"

extern  std::string testing;
extern  int test_number;

Infos::Infos( std::string function, int totalTests ){
    this->_spacer = "= = = = = = = = = = = = = = = = =";
    this->_function = function;
    this->_totalTests = totalTests;
    this->_goodAnswers = 0;
    this->_actualTest = 0;
    Infos::putsTestName();
}

Infos::~Infos( void ){
    if (this->_totalTests == this->_goodAnswers)
        std::cout << 
        "Results for " << 
        this->_function << 
        this->_goodAnswers << 
        "/" << 
        this->_totalTests << 
        std::endl;
}

void    Infos::putsCorrect( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;32mOK\033[0m" << "]\t";
    if (this->_actualTest % 3 == 0)
        std::cout << std::endl;
}

void    Infos::putsIncorrect( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;31mKO\033[0m" << "] by :";
    std::cout << this->_input << "\t";
    if (this->_actualTest % 3 == 0)
        std::cout << std::endl;
}

void    Infos::putsSigsegv( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;93mSEGFAULT\033[0m" << "]\t";
    if (this->_actualTest % 3 == 0)
        std::cout << std::endl;
}

void    Infos::putsTestName( void ){
    Infos::putsSpacer();
    std::cout << 
    "ft_" << 
    this->_function;
    Infos::putsSpacer();
}

void    Infos::putsEndTest( void ){
    if (this->_goodAnswers + 1 == this->_totalTests){
        Infos::putsSpacer();
        std::cout << 
        "ft_" << 
        this->_function << 
        " : " << 
        "\033[1;32mS U C C E S S\033[0m";
        Infos::putsSpacer();
    }
    else{
        Infos::putsSpacer();
        std::cout << 
        "ft_" << 
        this->_function << 
        " : " << 
        "\033[1;31mF A I L U R E\033[0m";
        Infos::putsSpacer();
    }
}

void    Infos::tInt( int returned, int expected ){
    this->_actualTest++;
    this->_input = testing;
    if (returned == expected){
        this->_goodAnswers++;
        Infos::putsCorrect();
    }
    else{
        Infos::putsIncorrect();
    }
    if (this->_totalTests == this->_actualTest + 1)
        Infos::putsEndTest();
}

void    Infos::setTesting( std::string functionName, std::string input ){
    testing.clear();
    test_number = this->_actualTest + 1;
    testing.append("ft_");
    testing.append(functionName);
    testing.append("(");
    testing.append(input);
    testing.append(")");
}

int     Infos::gTN( void ){
    return (this->_actualTest);
}

void    Infos::putsSpacer( void ){
    std::cout << std::endl << this->_spacer << std::endl;
}
/*
void    testerInt( int returned, int expected, std::string type );
void    testerChar( char returned, char expected, std::string type );
void    testerCharPtr( char *returned, char *expected, std::string type );
void    testerVoidPtr( void *returned, void *expected, std::string type );
void    testerCharPtrPtr( char **returned, char **expected, std::string type );
void    testerVoid( std::string type );
void    putsSigsegv( void );
void    putsCorrect( void );
void    putsIncorrect( void );
*/

//Infos::Tester()