/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:00:21 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 07:29:55 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s1, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s1 || !f)
		return ;
	i = 0;
	while (s1[i] != '\0')
	{
		f(i, &s1[i]);
		i++;
	}
}
