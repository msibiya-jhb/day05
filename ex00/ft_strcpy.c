/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:20:28 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/25 14:34:19 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i] != '\0')
	{
		dest[i]= src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *t;
	char *y;

	t = "hello world ";

	ft_strcpy( y, t);
	printf("%s", y);
	return 0;


}


