/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_fd.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:56:20 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/16 01:42:06 by trofidal         ###   ########.fr       */
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

int create_test_file( char *file_name, char c ){
    int __FILE_DESCRIPTOR__ = 0, found = 0;
    char    occur[20], find[20];
    char    str[1];
    str[0] = c;
    memset(occur, 0, 20);
    memset(find, 0, 20);
    #define a ft_putchar_fd
    
    __FILE_DESCRIPTOR__ = open(file_name, O_RDWR | O_CREAT);
    found = 0;
    chmod(file_name, 777);
    a(c, __FILE_DESCRIPTOR__);
    strcpy(occur, str);
    std::ifstream test_nd(file_name);
    test_nd >> find;
    if (strcmp(find, occur) == 0)
        found++;
    remove(file_name);
    return (found);
}

int main(void){
    std::string fN = "putchar_fd"; //Function Name
    Infos   trofidal(fN, 2);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_putchar_fd
    #define s std::to_string
    #define t setTesting
    int    found = 0;
    
    found = create_test_file((char *)"test_file", 'a');
    /*1*/trofidal.t(fN, "'a', fd");trofidal.tInt(found, 1); 
    found = create_test_file((char *)"test_file", 'y');
    /*2*/trofidal.t(fN, "'y', fd");trofidal.tInt(found, 1); 
}