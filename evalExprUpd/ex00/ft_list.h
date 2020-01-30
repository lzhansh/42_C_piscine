#ifndef FT_LIST_H

# define FT_LIST_H
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack t_stack;

struct s_stack
{
	t_stack *next;
	int data;
};

typedef struct s_stack_ch t_stack_ch;

struct s_stack_ch
{
	t_stack_ch *next;
	char data;
};

t_stack *newNodeInt(int data);
int		isemptyInt(t_stack *s);
void	pushInt(t_stack **s, int data);
void	popInt(t_stack **s);
int		topInt(t_stack *s);
t_stack_ch *newNodeCh(char data);
int		isemptyCh(t_stack_ch *s);
void	pushCh(t_stack_ch **s, char data);
void	popCh(t_stack_ch **s);
char	topCh(t_stack_ch *s);
int		do_op(int a, int b, char op);
int		ft_pre(char op);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_isdigit(char c);
int		ft_len(char *str);
int		eval_expr(char *str);

#endif
