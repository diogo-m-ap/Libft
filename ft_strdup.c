/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:29:07 by diomonte          #+#    #+#             */
/*   Updated: 2026/11/25 11:17:38 by diomonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strcopy;
	size_t	strlen_s;
	size_t	i;

	i = 0;
	strlen_s = ft_strlen(s) + 1;
	strcopy = malloc(sizeof(char) * strlen_s);
	if (!strcopy)
		return (NULL);
	while (s[i])
	{
		strcopy[i] = s[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
}
