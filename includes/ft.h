/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:07:29 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 21:02:19 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_H
#define FT_H

#include "ft.h"

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);

#endif
