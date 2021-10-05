/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:52:03 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/05 14:40:56 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HEADER_HPP
# define MAIN_HEADER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <vector>
# include <algorithm>
# include <functional>
# include <climits>
# include <csignal>
# include <stdlib.h>
# include "variables.hpp"

/*
*   SIGNAL HANDLING
*/
void    segfault_handler(int sig);

#endif
