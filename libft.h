/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfrancoi <pfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:02:04 by pfrancoi          #+#    #+#             */
/*   Updated: 2023/04/12 17:01:20 by pfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		at_atoi(char *str);
int		ft_isalnum(char c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	*ft_memset(void *ptr, int value, size_t num);
void	bzero(void *s, size_t n);

#endif
