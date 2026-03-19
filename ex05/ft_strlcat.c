/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:41:08 by pezio             #+#    #+#             */
/*   Updated: 2026/03/18 22:07:56 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_dest = 0;
	while (dest[size_dest] && size_dest < size)
		size_dest++;
	size_src = ft_strlen(src);
	if (size <= size_dest)
		return (size + size_src);
	j = 0;
	while (src[j] != '\0' && (size_dest + j + 1) < size)
	{
		dest[size_dest + j] = src[j];
		j++;
	}
	dest[size_dest + j] = '\0';
	return (size_dest + size_src);
}

//#include <stdio.h>
//int	main()
//{
//	char my_str[50] = "I love mans";
//	char dest[50] = "Not ";
//	int len;
//
//	len = ft_strlcat(dest, my_str, 6);
//
//	printf("My new string: %s\n", dest);
//	printf("Size of string: %d\n", len);
//
//	return (0);
//}
//
