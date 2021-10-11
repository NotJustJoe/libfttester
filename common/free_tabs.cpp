/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tabs.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:22:59 by trofidal          #+#    #+#             */
/*   Updated: 2021/10/11 10:24:59 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main_header.hpp"

void	free_tabs(char **tabs){
	int	i = 0;

	if (tabs == NULL)
		return ;
	if (!tabs)
		return ;
	while (tabs[i]){
		free(tabs[i]);
		tabs[i] = NULL;
		i++;
	}
	free(tabs);
	tabs = NULL;
}