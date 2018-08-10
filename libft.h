/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:46:57 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/10 16:27:33 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
long		ft_atol(char *str);
long long	ft_atoll(char *str);
int		ft_isalpha(int c);
int		ft_strisalpha(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned long long n);

#endif
