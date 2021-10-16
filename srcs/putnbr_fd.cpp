/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:51:39 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 01:41:36 by trofidal         ###   ########.fr       */
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

int create_test_file( char *file_name, int nbr ){
    int __FILE_DESCRIPTOR__ = 0, found = 0;
    char    occur[20];
    memset(occur, 0, 20);
	std::string	find;
    std::string itoto;

    #define a ft_putnbr_fd
    
    __FILE_DESCRIPTOR__ = open(file_name, O_RDWR | O_CREAT);
    found = 0;
    chmod(file_name, 777);
    a(nbr, __FILE_DESCRIPTOR__);
    itoto = std::to_string(nbr);
    strcpy(occur, itoto.c_str());
    std::ifstream test_nd(file_name);
	while (std::getline(test_nd, find)){
	}
    test_nd >> find;
    if (strcmp(find.c_str(), occur) == 0)
    	found++;
    remove(file_name);
    return (found);
}

int main(void){
    std::string fN = "putnbr_fd"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_putnbr_fd
    #define s std::to_string
    #define t setTesting
    int    found = 0;
    
    found = create_test_file((char *)"test_file", 12);
    /*1*/trofidal.t(fN, "12, fd");trofidal.tInt(found, 1); 
    found = create_test_file((char *)"test_file", 500);
    /*2*/trofidal.t(fN, "500, fd");trofidal.tInt(found, 1);
    found = create_test_file((char *)"test_file", 2);
    /*3*/trofidal.t(fN, "2, fd");trofidal.tInt(found, 1); 
    found = create_test_file((char *)"test_file", 0);
    /*4*/trofidal.t(fN, "0, fd");trofidal.tInt(found, 1);  
    found = create_test_file((char *)"test_file", 2147483647);
    /*5*/trofidal.t(fN, "2147483647, fd");trofidal.tInt(found, 1); 
    found = create_test_file((char *)"test_file", -2147483648);
    /*6*/trofidal.t(fN, "-2147483648, fd");trofidal.tInt(found, 1);     
}