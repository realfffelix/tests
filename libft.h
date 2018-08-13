/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:46:57 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/13 15:15:10 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
int		ft_atoi(char const *str);
long		ft_atol(char const *str);
long long	ft_atoll(char const *str);
int		ft_isalpha(int c);
int		ft_strisalpha(char const *str);
int		ft_stris(char const *str, int c, int d);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int 		ft_isascii(int c);
size_t		ft_strlen(char const *str);
int		ft_strcmp(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
char		*ft_strdup(char const *str);
char		*ft_strcpy(char *dest, char const *src);
char		*ft_strncpy(char *dest, char const *src, size_t n);
char		**ft_strsplit(char const *s, char c);
void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest,  void const *src, size_t n);
void		*ft_memccpy(void *dest, void const *src, int c, size_t n);
void		*ft_memmove(void *dest, void const *src, size_t n);

#endif
