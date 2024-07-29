/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-bel <zait-bel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 10:50:02 by zait-bel          #+#    #+#             */
/*   Updated: 2024/05/16 12:51:30 by zait-bel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H 

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 2
# endif

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
	char			*con;
	struct s_list	*next;
}	t_list;

char	**ft_split(char *s, char c);
size_t	ft_strlen(char *s);
int		ft_error(char	*str);
int		ft_atoi(const char *str, int *error);
char	*ft_strjoin(char *s1, char *s2);
t_list	*ft_lstnew(int content);
t_list	*ft_lstnew2(char *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmax(t_list *lst);
int		lst_size(t_list *lst);
void	rotate_s1(t_list **s1, char *str);
void	rrs1(t_list **s1, char *str);
void	rr(t_list **sa, t_list **sb);
void	rrr(t_list **sa, t_list **sb);
void	ss(t_list **sa, t_list **sb);
void	swap(t_list **lst, char	*str);
void	push_s1(t_list **s1, t_list **s2, char	*str);
t_list	*ft_lstmin(t_list *lst);
void	**ft_free2(char **arr);
void	ft_lstclear(t_list **lst, int i);
int		ft_sort(t_list **a, t_list **b, t_swap t);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin2(char *s1, char *s2);
int		ft_strcmp(char const *s1, char const *s2);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);
int		ft_search(char	*mv);
int		ft_check_sort(t_list **a);
void	ft_op(t_list **a, t_list **b, t_list *lst);

#endif