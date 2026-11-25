/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:01:35 by diomonte          #+#    #+#             */
/*   Updated: 2026/11/25 11:14:07 by diomonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	a = (unsigned char)c;
	while (i < n && str[i] != a)
	{
		i++;
	}
	if (i < n && str[i] == a)
	{
		return ((char *)&str[i]);
	}
	return (0);
}
