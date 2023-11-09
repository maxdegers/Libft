/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrousse <mbrousse@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:23:33 by mbrousse          #+#    #+#             */
/*   Updated: 2023/11/09 17:58:53 by mbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
#include <unistd.h>
//Part 1
int             ft_isalpha(int c);
int             ft_isdigit(int c);
int             ft_isalnum(int c);
int             ft_isascii(int c);
int             ft_isprint(int c);
size_t          ft_strlen(const char *str);
void            *ft_memset(void *s, int c, size_t n);
void            ft_bzero(void *s, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memmove(void *dest, const void *src, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int             ft_toupper(int c);
int             ft_tolower(int c);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *s, int c);
int             ft_strncmp(const char *s1, const char *s2, size_t n);
void            *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
char            *ft_strnstr(const char *  s1 , const char *  s2 , size_t  len );
int             ft_atoi(const char *nptr);
void            *ft_calloc(size_t nmemb, size_t size);
char            *ft_strdup(const char *s);
//Part 2
char            *ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);
char            **ft_split(char const *s, char c); 
char            *ft_itoa(int n);
char            *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void            ft_striteri(char *s, void (*f)(unsigned int, char*));
void            ft_putchar_fd(char c, int fd);
void            ft_putstr_fd(char *s, int fd);
void            ft_putendl_fd(char *s, int fd);
void            ft_putnbr_fd(int n, int fd);
//ft_strrchr, calloc, ft_strchr, ft_strtrim, ft_substr, split

#endif