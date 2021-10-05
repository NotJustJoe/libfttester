/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:39:30 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/05 14:43:51 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_HPP
# define VARIABLES_HPP

class   Infos{
    public:
        Infos( std::string function, int totalTests );
        ~Infos( void );
        /*Tester_int(int result,)
        Tester_char
        Tester_char_ptr
        Tester_void_ptr
        Tester_char_ptr_ptr
        Tester_void*/
    private:
        std::string _function;
        std::string _result;
        int         _totalTests;
        int         _goodAnswers;
};

# include "main_header.hpp"

#endif