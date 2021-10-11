/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:52:03 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 14:11:53 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_HPP
# define MAIN_HEADER_HPP

# include <sys/_types.h>
# include <sys/stat.h>
# include <iostream>
# include <string>
# include <string.h>
# include <sstream>
# include <fstream>
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
# include <fcntl.h>
# include "infos_class.hpp"
# include "tripouille_leaks.hpp"

/*
*   SIGNAL HANDLING
*/
void    segfault_handler(int sig);
void	free_tabs(char **tabs);

#endif
