/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:46:57 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/13 02:09:40 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_atoi(char *str);
long		ft_atol(char *str);
long long	ft_atoll(char *str);
int		ft_isalpha(int c);
int		ft_strisalpha(char *str);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int 		ft_isascii(int c);
size_t		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void		ft_bzero(void *s, size_t n);
void		*ft_memalloc(size_t size);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, void *src, size_t n);
void		*ft_memccpy(void *dest, void *src, int c, size_t n);
void		*ft_memmove(void *dest, void *src, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strdup(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, size_t n);

#endif
