/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:52:03 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/08 13:55:37 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_HPP
# define MAIN_HEADER_HPP

# include <sys/_types.h>
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cstddef>
# include <vector>
# include <algorithm>
# include <functional>
# include <climits>
# include <csignal>
# include <stdlib.h>
# include <ctype.h> 
# include <stdio.h>
# include <unistd.h>
# include <dlfcn.h>
# include "infos_class.hpp"
# include "tripouille_leaks.hpp"

/*
*   SIGNAL HANDLING
*/
void    segfault_handler(int sig);

#endif
