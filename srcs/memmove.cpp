/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:39:10 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/07 15:04:39 by trofidal         ###   ########.fr       */
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

int main(void){
    std::string fN = "memmove"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    char s1[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg";
	char SNull[100]; memset(SNull, 0, 100);
    char s123[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg";
    char srev1[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
	char srev2[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
    char srev3[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
    /***/
    char Ds1[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg";
	char DSNull[100]; memset(SNull, 0, 100);
    char Ds123[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]zyxwvutsrqponmlkjihg";
    char Dsrev1[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
	char Dsrev2[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
    char Dsrev3[100] = "ghijklmnopqrstuvwxyz][}{+_)(*&^%$#@!9876543210ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";
    #define a ft_memmove
    #define b memmove
    #define s std::to_string
    #define t setTesting
    
    std::cout << "NEED TO DO THIS FUNCTION" << std::endl;
    /*****************/
}