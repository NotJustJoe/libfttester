/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:05:40 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 11:00:18 by trofidal         ###   ########.fr       */
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
    std::string fN = "calloc"; //Function Name
    Infos   trofidal(fN, 6);
    signal(SIGSEGV, segfault_handler);
    
    #define a ft_calloc
    #define b calloc
    #define s std::to_string
    #define t setTesting
    
    void    *realCalloc;
    void    *fakeCalloc;
    int     ret = 0, retReal = 0;
    char    voidy[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0};

    realCalloc = b(4, 5); fakeCalloc = a(4, 5);
    /*1*/trofidal.t(fN, "(4, 5)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 20), retReal = memcmp(fakeCalloc, voidy, 20));
    trofidal.tripouilleCheck(fakeCalloc, 20);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0 );
    realCalloc = b(0, 5); fakeCalloc = a(0, 5);
    /*2*/trofidal.t(fN, "(0, 5)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 0), retReal = memcmp(fakeCalloc, voidy, 0));
    trofidal.tripouilleCheck(fakeCalloc, 0);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0  );
    realCalloc = b(5, 0); fakeCalloc = a(5, 0);
    /*3*/trofidal.t(fN, "(5, 0)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 0), retReal = memcmp(fakeCalloc, voidy, 0));
    trofidal.tripouilleCheck(fakeCalloc, 0);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0  );
    realCalloc = b(sizeof(char), 10); fakeCalloc = a(sizeof(char), 10);
    /*4*/trofidal.t(fN, "(sizeof(char), 10)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 10), retReal = memcmp(fakeCalloc, voidy, 10));
    trofidal.tripouilleCheck(fakeCalloc, 10);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0  );
    realCalloc = b(sizeof(char), 0); fakeCalloc = a(sizeof(char), 0);
    /*5*/trofidal.t(fN, "(0, 0)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 0), retReal = memcmp(fakeCalloc, voidy, 0));
    trofidal.tripouilleCheck(fakeCalloc, 0);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0  );
    realCalloc = b(sizeof(char *), 10); fakeCalloc = a(sizeof(char *), 10);
    /*6*/trofidal.t(fN, "(sizeof(char *), 10)");trofidal.tIntPtr(ret = memcmp(realCalloc, voidy, 10), retReal = memcmp(fakeCalloc, voidy, 10));
    trofidal.tripouilleCheck(fakeCalloc, sizeof(char *) * 10);free(realCalloc); free(fakeCalloc);trofidal.showLeaks( ret == retReal ? 1 : 0, ret == retReal ? 1 : 0  );
}