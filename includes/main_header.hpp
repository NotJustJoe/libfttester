/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:52:03 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/07 11:49:21 by trofidal         ###   ########.fr       */
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
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h> 
# include <stdio.h>
# include <stdlib.h>
# include "infos_class.hpp"

/*
*   SIGNAL HANDLING
*/
void    segfault_handler(int sig);

#endif
