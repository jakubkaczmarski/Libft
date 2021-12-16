/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:02:16 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/10 20:56:41 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	char		*stringy;
	size_t		s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		stringy = malloc(sizeof(char) * 1);
		if (stringy == NULL)
			return (NULL);
		stringy[0] = 0;
		return (stringy);
	}
	stringy = malloc (len +1 * sizeof(char));
	if (stringy == NULL)
		return (NULL);
	ft_strlcpy (stringy, start + s, len + 1);
	return (stringy);
}
