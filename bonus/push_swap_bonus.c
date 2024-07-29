/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:27:20 by zait-bel          #+#    #+#             */
/*   Updated: 2024/06/10 15:06:24 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_stack(t_swap	t)
{
	int		i;
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	i = -1;
	while (t.s[++i])
		ft_lstadd_back(&lst_a, ft_lstnew(ft_atoi(t.s[i], 0)));
	ft_sort(&lst_a, &lst_b, t);
	ft_lstclear(&lst_a, 0);
	ft_lstclear(&lst_b, 0);
}

void	ft_double(t_swap t)
{
	int	error;

	error = 0;
	t.j = -1;
	while (t.s[++t.j])
	{
		t.k = t.j;
		if (!t.s[t.k + 1])
		{
			ft_atoi(t.s[t.k], &error);
			if (error == 1)
				(ft_free2(t.s), ft_error("Error\n"));
		}
		while (t.s[++t.k])
		{
			if (ft_atoi(t.s[t.j], &error) == ft_atoi(t.s[t.k], &error))
				(ft_free2(t.s), ft_error("Error\n"));
			if (error == 1)
				(ft_free2(t.s), ft_error("Error\n"));
		}
	}
}

int	main(int argc, char *argv[])
{
	t_swap	t;

	t.j = 0;
	t.join = NULL;
	if (argc > 1)
	{
		while (argv[++t.j])
		{
			t.k = 0;
			while (argv[t.j][t.k] == 32)
				t.k++;
			(!argv[t.j][t.k]) && (ft_error("Error"));
			t.sp = ft_strjoin(argv[t.j], " ");
			t.join2 = ft_strjoin(t.join, t.sp);
			(free(t.join), t.join = t.join2, free(t.sp));
		}
		t.s = ft_split(t.join, ' ');
		free(t.join);
		ft_double(t);
		(ft_stack(t), ft_free2(t.s));
	}
}
