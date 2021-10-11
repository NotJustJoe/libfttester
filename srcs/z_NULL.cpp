/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_NULL.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:08:36 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 15:59:19 by trofidal         ###   ########.fr       */
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

void	iteri(unsigned int i, char *c){
	if (i + *c > 127){
		*c += (i - 127);
		return ;
	}
	*c += i;
}

char	Mapi(unsigned int i, char c){
	if (i + c > 127)
		return (i + c - 127);
	return (c + i);
}

int main(void){
    std::string fN = "Undefined"; //Function Name
    Infos   trofidal(fN, 30);
    signal(SIGSEGV, segfault_handler);
    
    #define s std::to_string
    #define t setTesting
    
    char    *realItoa;
    char    *fakeItoa;
	char	*NULLPTR = NULL;
	char	*temp;
    char    tempReal[255];
    char    tempFake[255];
    int     ret = 0, retReal = 0;

	#define a ft_atoi
	#define b ft_bzero
	#define c ft_putstr_fd
	#define d ft_split
	#define e ft_strchr
	#define f ft_strdup
	#define g ft_striteri
	#define h ft_strjoin	
	#define i ft_strlcat
	#define j ft_strlcpy
	#define k ft_strlen
	#define l ft_strmapi
	#define m ft_strncmp
	#define n ft_strnstr
	#define o ft_strrchr
	#define p ft_strtrim
	#define q ft_substr

	std::cout << "\033[1;31mTHESE TESTS ARE NULL AND WILL LIKELY NOT BE TESTED BY MOULINETTE\033[0m" << std::endl << "\033[1;31mHOWEVER HANDLING THEM IS A GOOD THING IN MY OPINION\033[0m" << std::endl << std::endl;
	std::cout << "\033[1;32mTo protect againt null, checking if (!str) if (str == NULL) and returning approriate error.\033[0m" << std::endl;
    trofidal.setTestName("atoi"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("atoi", "NULL from Pointer");trofidal.tInt(a(NULLPTR), 0);
	/*2*/trofidal.t("atoi", "NULL");trofidal.tInt(a(NULL), 0);trofidal.resetTestNumber();
	
    trofidal.setTestName("bzero"); trofidal.putsTestNameSmall();
	ft_bzero(NULLPTR, 0);
	/*1*/trofidal.t("bzero", "NULL from Pointer");trofidal.tInt(0, 0);
	ft_bzero(NULL, 0);
	/*2*/trofidal.t("bzero", "NULL");trofidal.tInt(0, 0);trofidal.resetTestNumber();

    trofidal.setTestName("putstr_fd"); trofidal.putsTestNameSmall();
	ft_putstr_fd(NULLPTR, 1);
	/*1*/trofidal.t("putstr_fd", "NULL from Pointer");trofidal.tInt(0, 0);
	ft_putstr_fd(NULL, 1);
	/*2*/trofidal.t("putstr_fd", "NULL");trofidal.tInt(a(NULL), 0);trofidal.resetTestNumber();

    trofidal.setTestName("split"); trofidal.putsTestNameSmall();
	ft_split(NULLPTR, ' ');
	/*1*/trofidal.t("split", "NULL from Pointer");trofidal.tInt(0, 0);
	ft_split(NULL, ' ');
	/*2*/trofidal.t("split", "NULL");trofidal.tInt(a(NULL), 0);trofidal.resetTestNumber();

    trofidal.setTestName("strchr"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strchr", "NULL from Pointer");trofidal.tInt(ft_strchr(NULLPTR, '4') == NULL ? 0 : 1, 0);
	/*2*/trofidal.t("strchr", "NULL");trofidal.tInt(ft_strchr(NULL, '4') == NULL ? 0 : 1, 0);trofidal.resetTestNumber();

    trofidal.setTestName("strdup"); trofidal.putsTestNameSmall();
	temp = ft_strdup(NULLPTR);
	/*1*/trofidal.t("strdup", "NULL from Pointer");trofidal.tInt(0, 0); free(temp);
	temp = ft_strdup(NULL);
	/*2*/trofidal.t("strdup", "NULL");trofidal.tInt(0, 0); free(temp);trofidal.resetTestNumber();

    trofidal.setTestName("striteri"); trofidal.putsTestNameSmall();
	ft_striteri(NULLPTR, iteri);
	/*1*/trofidal.t("striteri", "NULL from Pointer, iteri");trofidal.tInt(0, 0);
	ft_striteri(NULL, iteri);
	/*2*/trofidal.t("striteri", "NULL, iteri");trofidal.tInt(0, 0);trofidal.resetTestNumber();

    trofidal.setTestName("strjoin"); trofidal.putsTestNameSmall();
	temp = ft_strjoin(NULLPTR, NULL);
	/*1*/trofidal.t("strjoin", "NULL from Pointer, iteri");trofidal.tInt(0, 0); free(temp);
	temp = ft_strjoin(NULL, NULLPTR);
	/*2*/trofidal.t("strjoin", "NULL, iteri");trofidal.tInt(0, 0); free(temp);trofidal.resetTestNumber();

    trofidal.setTestName("strlcat"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strlcat", "NULL from Pointer, iteri");trofidal.tInt(ft_strlcat(NULLPTR, NULL, 0), 0);
	/*2*/trofidal.t("strlcat", "NULL, iteri");trofidal.tInt(ft_strlcat(NULL, NULLPTR, 0), 0);trofidal.resetTestNumber();

    trofidal.setTestName("strlcpy"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strlcpy", "NULL from Pointer, NULL, 0");trofidal.tInt(ft_strlcpy(NULLPTR, NULL, 0), 0);
	/*2*/trofidal.t("strlcpy", "NULL, NULL from Pointer, 0");trofidal.tInt(ft_strlcpy(NULL, NULLPTR, 0), 0);trofidal.resetTestNumber();

    trofidal.setTestName("strlen"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strlen", "NULL from Pointer");trofidal.tInt(ft_strlen(NULLPTR), 0);
	/*2*/trofidal.t("strlen", "NULL");trofidal.tInt(ft_strlen(NULL), 0);trofidal.resetTestNumber();

    trofidal.setTestName("strmapi"); trofidal.putsTestNameSmall();
	temp = ft_strmapi(NULLPTR, Mapi);
	/*1*/trofidal.t("strmapi", "NULL from Pointer, Mapi");trofidal.tInt(0, 0); free(temp);
	temp = ft_strmapi(NULL, Mapi);
	/*2*/trofidal.t("strmapi", "NULL, Mapi");trofidal.tInt(0, 0); free(temp);trofidal.resetTestNumber();

    trofidal.setTestName("strncmp"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strncmp", "NULL from Pointer, NULL, 0");trofidal.tInt(ft_strncmp(NULLPTR, NULL, 0), 0);
	/*2*/trofidal.t("strncmp", "NULL, NULL from Pointer, 0");trofidal.tInt(ft_strncmp(NULL, NULLPTR, 0), 0);trofidal.resetTestNumber();
	
    trofidal.setTestName("strnstr"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strnstr", "NULL from Pointer, NULL, 0");trofidal.tInt(ft_strnstr(NULLPTR, NULL, 0) == NULL ? 0 : 1, 0);
	/*2*/trofidal.t("strnstr", "NULL, NULL from Pointer, 0");trofidal.tInt(ft_strnstr(NULL, NULLPTR, 0) == NULL ? 0 : 1, 0);trofidal.resetTestNumber();

    trofidal.setTestName("strrchr"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strrchr", "NULL, 0");trofidal.tInt(ft_strrchr(NULLPTR, 0) == NULL ? 0 : 1, 0);
	/*2*/trofidal.t("strrchr", "NULL from Pointer, 0");trofidal.tInt(ft_strrchr(NULL, 0) == NULL ? 0 : 1, 0);trofidal.resetTestNumber();

    trofidal.setTestName("strtrim"); trofidal.putsTestNameSmall();
	/*1*/trofidal.t("strtrim", "NULL from Pointer, 0");trofidal.tInt(ft_strtrim(NULLPTR, 0) == NULL ? 0 : 1, 0);
	/*2*/trofidal.t("strtrim", "NULL from Pointer, 0");trofidal.tInt(ft_strtrim(NULL, 0) == NULL ? 0 : 1, 0);trofidal.resetTestNumber();
	
    trofidal.setTestName("substr"); trofidal.putsTestNameSmall();
	temp = ft_substr(NULLPTR, 0, 0);
	/*1*/trofidal.t("substr", "NULL from Pointer, 0");trofidal.tInt(temp == NULL ? 0 : 1, 0);
	temp = ft_substr(NULL, 0, 0);
	/*2*/trofidal.t("substr", "NULL from Pointer, 0");trofidal.tInt(temp == NULL ? 0 : 1, 0);trofidal.resetTestNumber();
}

