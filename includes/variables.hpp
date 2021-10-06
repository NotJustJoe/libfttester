/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:39:30 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/06 17:48:44 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_HPP
# define VARIABLES_HPP

class   Infos{
    public:
        Infos( std::string function, int total_test );
        ~Infos( void );

        void    testerInt( int returned, int expected, std::string type );
        void    testerChar( char returned, char expected, std::string type );
        void    testerCharPtr( char *returned, char *expected, std::string type );
        void    testerVoidPtr( void *returned, void *expected, std::string type );
        void    testerCharPtrPtr( char **returned, char **expected, std::string type );
        void    testerVoid( std::string type );
        void    putsTestName( void );
        void    putsSigsegv( void );
        void    putsCorrect( void );
        void    putsIncorrect( void );
        void    putsEndTest( void );
    private:
        std::string _function;
        int         _totalTests;
        int         _goodAnswers;
};

#include "main_header.hpp"

#endif