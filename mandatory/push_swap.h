/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:22:44 by zait-bel          #+#    #+#             */
/*   Updated: 2024/07/09 11:00:24 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include <unistd.h>
# include <stdlib.h>

typedef struct swap
{
	char	*sp;
	char	*join;
	char	*join2;
	char	**s;
	int		j;
	int		k;
}	t_swap;

typedef struct s_list
{
	int				content;
	int				index;
	int				position;
	struct s_list	*next;
}	t_list;

char	**ft_split(char *s, char c);
size_t	ft_strlen(char *s);
int		ft_error(char	*str);
int		ft_atoi(const char *str, int *error);
char	*ft_strjoin(char *s1, char *s2);
t_list	*ft_lstnew(t_list **s1, int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmax(t_list *lst);
int		lst_size(t_list *lst);
void	rotate_s1(t_list **s1, char *str);
void	rrs1(t_list **s1, char *str);
void	swap(t_list **lst, char	*str);
int		ft_sort_3(t_list **lst);
void	push_s1(t_list **s1, t_list **s2, char	*str);
int		ft_sort_4(t_list **a, t_list **b);
t_list	*ft_lstmin(t_list *lst);
int		ft_sort_5(t_list **a, t_list **b);
void	**ft_free2(char **arr);
void	ft_lstclear(t_list **lst);
void	ft_index(t_list **s1, t_list *node);
void	ft_position(t_list **s1);
int		max_pos(t_list **s1);
int		ft_sort(t_list **a, t_list **b, int i);
void	ft_push_a(t_list **a, t_list **b);

#endif