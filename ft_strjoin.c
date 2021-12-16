/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:02:33 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/12 17:38:52 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stringy;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	stringy = malloc (sizeof (char) * (len + 1));
	if (!stringy)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		stringy[len] = ((char *)s1)[len];
		len++;
	}
	while (s2[i] != '\0')
		stringy[len++] = ((char *)s2)[i++];
	stringy[len] = '\0';
	return (stringy);
}
