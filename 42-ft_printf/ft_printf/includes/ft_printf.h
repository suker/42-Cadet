/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 21:54:06 by jubonill          #+#    #+#             */
/*   Updated: 2020/12/23 11:41:59 by jubonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
#	define FT_PRINTF_H

#include <stdarg.h>
#include "libft.h"
#include <stdbool.h>

typedef	struct		s_print
{
	char			spec;
	char			flag;
	int				width;
	int				precision;
	int				numchars;
	int				numblanks;
	int				numzeros;
	bool			printspace;
	bool			iserror;
	char			*arg;
	struct s_print	*next;
}					t_print;

#	define LHEX_BASE "0123456789abcdef"
#	define UHEX_BASE "0123456789ABCDEF"

int					ft_printf(const char *format, ...);

/*
** Bases
*/
void				ft_putnbr_base_count(unsigned int nbr, \
					unsigned short size, char *base, int *num_chars);
void				ft_putnbr_base_ull_count(unsigned long long nbr, \
					unsigned short size, char *base, int *num_chars);
void				ft_putnbr_base(unsigned int nbr, \
					unsigned short size, char *base);
void				ft_putnbr_base_ull(unsigned long long nbr, \
					unsigned short size, char *base);
/*
** Binaries
*/
bool				is_numspec(char c);
bool				is_charspec(char c);
bool				is_zero(const char *s);
int					get_zerosblanks(int x, int y);
/*
** Conversions
*/
unsigned long long	ft_atoi_ull(const char *str);
unsigned int		ft_atoi_u(const char *str);
char				*ft_itoa_ull(unsigned long long n);
char				*ft_itoa_u(unsigned int n);
/*
** Extra
*/
int					count_digits(unsigned long long nb);
int					check_allocation(t_print **lst);
void				print_spaces(int spaces);
void				print_zeros(int zeros);
bool				is_specifier(char c);
/*
** Fields
*/
void				get_precision(const char **s, t_print **lst, va_list arg_p);
void				get_argument(t_print **lst, char c, va_list arg_p);
void				get_width(const char **s, t_print **lst, va_list arg_p);
void				get_flags(const char **s, t_print **lst);
/*
** Initsialization
*/
int					init_lst(const char *format, va_list arg_p, t_print **lst);
void				fill_lst(const char *format, va_list arg_p, int n_specs, \
					t_print **lst);
int					num_specifiers(const char *format);
int					get_spec_idx(const char *s);
t_print				*create_lst(int num_specs);
/*
** Outputs
*/
void				print_extra(t_print *lst);
void				print_template(t_print *lst);
void				print_type(t_print *lst);
/*
** Parsing
*/
void				free_and_update(t_print **elem);
void				parsing_numblanks(t_print **elem);
void				parsing_numchars(t_print **elem);
void				parsing_fields(t_print **lst);
/*
** T_print
*/
void				ft_lstadd_back(t_print **lst, t_print *new);
void				ft_lstclear(t_print **lst);
t_print				*ft_lstnew(void);

#	endif
