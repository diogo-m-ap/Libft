/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 20:31:02 by diomonte          #+#    #+#             */
/*   Updated: 2026/11/25 11:21:15 by diomonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL || set == NULL)
		return (NULL);
	while (s[i] != '\0' && ft_strchr(set, s[i]))
		i++;
	s_len = ft_strlen(s);
	while (s_len > i && ft_strchr(set, s[s_len - 1]))
		s_len--;
	return (ft_substr(s, i, s_len - i));
}
