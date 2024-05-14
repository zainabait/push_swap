/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:28:50 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/11 10:31:48 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	l;

	l = 0;
	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}

char	*ft_strdup(char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

int	ft_error(char	*str)
{
	write(2, str, ft_strlen(str));
	exit(1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	ssize_t	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		(str[i] == '-') && (s = -1);
		i++;
	}
	(!str[i]) && (ft_error("Error"));
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + str[i] - 48;
		((r > __INT_MAX__) && s == 1) && ft_error("Error");
		((r - 1 > __INT_MAX__) && s == -1) && ft_error("Error");
		i++;
	}
	(str[i]) && (ft_error("Error"));
	return (r * s);
}
