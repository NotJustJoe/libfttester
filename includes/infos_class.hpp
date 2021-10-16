/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:39:30 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 09:50:21 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFOS_CLASS_HPP
# define INFOS_CLASS_HPP

#include "main_header.hpp"

class   Infos{
    public:
        Infos( std::string function, int total_test );
        ~Infos( void );

        void    tInt( int returned, int expected );
        void    tChar( char returned, char expected, std::string type, std::string input );
        void    tCharPtr( char *returned, char *expected );
        void    tIntPtr( int returned, int expected );
        void    tCharPtrPtr( char **returned, char **expected, std::string type, std::string input );
        void    tVoid( std::string type, std::string input );
        void    putsTestName( void );
        void    putsSigsegv( void );
        void    putsCorrect( void );
        void    putsIncorrectLeaks( void );
        void    putsCorrectLeaks( void );
        void    putsIncorrect( void );
        void    putsEndTest( void );
        void    setTesting ( std::string functionName, std::string input );
        void    putsSpacer ( void );
        void    showLeaks( int returned, int expected );
        void    showLeaksCharPtr( char * returned, char * expected );
        void    showLeaksInt( int returned, int expected );
        void    tripouilleCheck(void * p, size_t required_size);
        void    setTestName( std::string functionName );
        void    putsTestNameSmall( void );
        void    resetTestNumber( void );
        void    tIntLst( int returned, int expected );
        void    showLeaksLst( int returned, int expected );
        int     gTN ( void );
        void    checkLeaksNoCheck( void );
    private:
        std::string _function;
        std::string _input;
        std::string _spacer;
        bool        _isLeaking;
        int         _totalTests;
        int         _goodAnswers;
        int         _actualTest;
};

#endif