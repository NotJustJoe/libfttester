/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:19:46 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/05 14:44:05 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/variables.hpp"

Infos::Infos(std::string function, int totalTests ){
    this->_function = function;
    this->_totalTests = totalTests;
    this->_goodAnswers = 0;
    this->_result = "NULL";
}

Infos::~Infos( void ){
    if (this->_totalTests == this->_goodAnswers)
        std::cout << "Passed " << this->_function << "100%" << std::endl;
}

//Infos::Tester()