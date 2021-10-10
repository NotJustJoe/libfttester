/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tripouille_leaks.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:45:16 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/10 02:39:16 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIPOUILLE_LEAKS_HPP
# define TRIPOUILLE_LEAKS_HPP

# include "main_header.hpp"
# ifdef __unix__
#  include <malloc.h>
# endif
# ifdef __APPLE__
#  include <stdlib.h>
#  include <malloc/malloc.h>
# endif

/***
 * *	Thanks to Tripouille (jgambard) for allowing me to use his leaks checker !
 * *	jgambard	|	https://github.com/Tripouille
****/

using std::endl;
struct ptr
{
	void * p;
	size_t size;
	ptr(void * _p = 0, size_t _size = 0) : p(_p), size(_size) {}
};

bool operator==(ptr const & p1, ptr const & p2);

extern std::vector<ptr> mallocList;

void mallocListAdd(void * p, size_t size);
void mallocListRemove(void * p);
void showLeaks(void);
void mcheck(void * p, size_t required_size);

/***
 * *	Thanks to Tripouille (jgambard) for allowing me to use his leaks checker !
 * *	jgambard	|	https://github.com/Tripouille
****/

#endif