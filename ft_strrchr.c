/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:31:38 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/11/28 23:37:05 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			ptr = (char *)(str + i);
		i ++;
	}
	if (str[i] == (char)c)
		ptr = (char *)(str + i);
	return (ptr);
}
