/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_handler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:53:25 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/29 10:00:47 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_header.hpp"

extern int test_number;
extern std::string testing;

void    segfault_handler(int sig){
    std::cout << 
    test_number << 
    ":" << 
    "[" << "\033[1;93mSEGFAULT\033[0m" << "]" <<  
    testing ;
	exit(EXIT_SUCCESS);
}
    //1
    //2
    //3
    //4
    //5
    //6
    //7
    //8
    //9
    //10
    //11
    //12
    //13
    //14
    //15