/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:19:46 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 09:50:10 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/infos_class.hpp"

extern  std::string testing;
extern  int test_number;

Infos::Infos( std::string function, int totalTests ){
    this->_spacer = "= = = = = = = = = = = = = = = = =";
    this->_function = function;
    this->_totalTests = totalTests;
    this->_goodAnswers = 0;
    this->_isLeaking = false;
    this->_actualTest = 0;
    Infos::putsTestName();
}

Infos::~Infos( void ){
    if (this->_totalTests == this->_actualTest)
        std::cout << 
        "Results for " << 
        this->_function << 
        " " << 
        this->_goodAnswers << 
        "/" << 
        this->_totalTests << 
        std::endl;
}

void    Infos::putsCorrect( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;32mOK\033[0m" << "]\t";
    if (this->_actualTest % 5 == 0)
        std::cout << std::endl;
}

void    Infos::putsTestNameSmall( void ){
    std::cout << 
    std::endl << 
    "\033[1;34mft_" << 
    this->_function << 
    "\033[0m:" << 
    std::endl;
}

void    Infos::resetTestNumber( void ){
    this->_actualTest = 0;
}

void    Infos::setTestName( std::string functionName ){
    this->_function = functionName;
}

void    Infos::putsIncorrect( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;31mKO\033[0m" << "] by :";
    std::cout << this->_input << "\t";
    if (this->_actualTest % 5 == 0)
        std::cout << std::endl;
}

void    Infos::putsSigsegv( void ){
    std::cout << 
    this->_actualTest << 
    "[" << "\033[1;93mSEGFAULT\033[0m" << "]\t";
    if (this->_actualTest % 5 == 0)
        std::cout << std::endl;
}

void    Infos::putsTestName( void ){
    Infos::putsSpacer();
    std::cout << 
    "\033[1;34mft_" << 
    this->_function <<
    "\033[0m";
    Infos::putsSpacer();
}

void    Infos::putsEndTest( void ){
    if (this->_goodAnswers == this->_totalTests){
        Infos::putsSpacer();
        std::cout << 
        "\033[1;34mft_" << 
        this->_function << 
        " \033[0m: " << 
        "\033[1;32mS U C C E S S\033[0m";
        Infos::putsSpacer();
    }
    else{
        Infos::putsSpacer();
        std::cout << 
        "\033[1;34mft_" << 
        this->_function << 
        " \033[0m: " << 
        "\033[1;31mF A I L U R E\033[0m";
        Infos::putsSpacer();
    }
}

void Infos::showLeaksCharPtr( char * returned, char * expected )
{
    if (mallocList.size() != 0)
    {
        std::ostringstream ss; ss << this->_actualTest << "[\033[1;91mKO LEAKS:"; write(1, ss.str().c_str(), ss.str().size());
        std::vector<ptr>::iterator it = mallocList.begin(); std::vector<ptr>::iterator ite = mallocList.end();
        for (; it != ite; ++it)
            {std::ostringstream ss; ss << it->p << " | size : " << it->size << "\033[0m] by " << this->_input << "\t"; write(1, ss.str().c_str(), ss.str().size());}
    }
    else {
        if (returned == expected){
            this->_goodAnswers++;
            Infos::putsCorrect();
        }
        else if (returned != expected && this->_isLeaking == false){
            Infos::putsIncorrect();
        }
        if (this->_totalTests == this->_actualTest)
            Infos::putsEndTest();
    }
    mallocList.clear();
}

void Infos::showLeaksInt( int returned, int expected )
{
    if (mallocList.size() != 0)
    {
        std::ostringstream ss; ss << this->_actualTest << "[\033[1;91mKO LEAKS:"; write(1, ss.str().c_str(), ss.str().size());
        std::vector<ptr>::iterator it = mallocList.begin(); std::vector<ptr>::iterator ite = mallocList.end();
        for (; it != ite; ++it)
            {std::ostringstream ss; ss << it->p << " | size : " << it->size << "\033[0m] by " << this->_input << "\t"; write(1, ss.str().c_str(), ss.str().size());}
    }
    else {
        if (returned == expected){
            this->_goodAnswers++;
            Infos::putsCorrect();
        }
        else if (returned != expected && this->_isLeaking == false){
            Infos::putsIncorrect();
        }
        if (this->_totalTests == this->_actualTest)
            Infos::putsEndTest();
    }
    mallocList.clear();
}

void    Infos::checkLeaksNoCheck( void ){
    if (mallocList.size() != 0)
    {
        std::ostringstream ss; ss << this->_actualTest << "[\033[1;91mKO LEAKS:"; write(1, ss.str().c_str(), ss.str().size());
        std::vector<ptr>::iterator it = mallocList.begin(); std::vector<ptr>::iterator ite = mallocList.end();
        for (; it != ite; ++it)
            {std::ostringstream ss; ss << it->p << " | size : " << it->size << "\033[0m] by " << this->_input << "\t"; write(1, ss.str().c_str(), ss.str().size());}
    }
    mallocList.clear();
}

void Infos::showLeaks( int returned, int expected )
{
    if (mallocList.size() != 0)
    {
        std::ostringstream ss; ss << this->_actualTest << "[\033[1;91mKO LEAKS:"; write(1, ss.str().c_str(), ss.str().size());
        std::vector<ptr>::iterator it = mallocList.begin(); std::vector<ptr>::iterator ite = mallocList.end();
        for (; it != ite; ++it)
            {std::ostringstream ss; ss << it->p << " | size : " << it->size << "\033[0m] by " << this->_input << "\t"; write(1, ss.str().c_str(), ss.str().size());}
    }
    else {
        if (returned == 1 && expected == 1){
            this->_goodAnswers++;
            Infos::putsCorrect();
        }
        else if (((returned != 1 && expected != 1) || (returned != 1 || expected != 1)) && this->_isLeaking == false){
            Infos::putsIncorrect();
        }
        if (this->_totalTests == this->_actualTest)
            Infos::putsEndTest();
    }
    mallocList.clear();
}

void    Infos::tInt( int returned, int expected ){
    this->_actualTest++;
    this->_input = testing;
    this->_isLeaking = false;
    Infos::showLeaksInt( returned, expected );
}

void    Infos::showLeaksLst( int returned, int expected ){
    if (returned == 1 && expected == 1){
        this->_goodAnswers++;
        Infos::putsCorrect();
    }
    else if (((returned != 1 && expected != 1) || (returned != 1 || expected != 1)) && this->_isLeaking == false){
        Infos::putsIncorrect();
    }
    if (this->_totalTests == this->_actualTest)
        Infos::putsEndTest();
}

void    Infos::tIntLst( int returned, int expected ){
    this->_actualTest++;
    this->_input = testing;
    this->_isLeaking = false;
    Infos::showLeaksLst( returned, expected );
}

void    Infos::tIntPtr( int returned, int expected ){
    this->_actualTest++;
    this->_input = testing;
    this->_isLeaking = false;
}

void    Infos::tCharPtr( char * returned, char * expected ){
    this->_actualTest++;
    this->_input = testing;
    this->_isLeaking = false;
    Infos::showLeaksCharPtr( returned, expected );
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

void    Infos::tripouilleCheck(void * p, size_t required_size)
{
	void * p2 = malloc(required_size); 
	#ifdef __unix__
	if (malloc_usable_size(p) == malloc_usable_size(p2))
	#endif
	#ifdef __APPLE__
	if (malloc_size(p) == malloc_size(p2))
	#endif
		{std::ostringstream ss; ss << this->_actualTest << "[\033[1;32mAllocated Space OK\033[0m]"; write(1, ss.str().c_str(), ss.str().size());write(1, "\n", 1);}
	else
		{std::ostringstream ss; ss << this->_actualTest << "[\033[1;31mAllocated Space KO\033[0m]"; write(1, ss.str().c_str(), ss.str().size());write(1, "\n", 1);}
	free(p2);
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