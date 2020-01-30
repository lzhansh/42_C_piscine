/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:31:10 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 23:36:45 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack		t_stack;

struct						s_stack
{
	t_stack					*next;
	int						data;
};

typedef struct s_stack_ch	t_stack_ch;

struct						s_stack_ch
{
	t_stack_ch				*next;
	char					data;
};

t_stack						*new_node_int(int data);
int							isempty_int(t_stack *s);
void						push_int(t_stack **s, int data);
int							*pop_int(t_stack **s);
int							top_int(t_stack *s);
t_stack_ch					*new_node_ch(char data);
int							isempty_ch(t_stack_ch *s);
void						push_ch(t_stack_ch **s, char data);
char						*pop_ch(t_stack_ch **s);
char						top_ch(t_stack_ch *s);
int							do_op(int a, int b, char op);
int							ft_pre(char op);
void						ft_putnbr(int n);
void						ft_putchar(char c);
int							ft_isdigit(char c);
int							ft_len(char *str);
int							eval_expr(char *str);

#endif
