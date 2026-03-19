/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:56:11 by pezio             #+#    #+#             */
/*   Updated: 2026/03/15 00:56:12 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//int	main()
//{
//	char src[30] = "Pedro";
//	char dest[30] = "Tchau";
//
//	ft_strncat(dest, src, 3);
//	printf("O meu: %s\n", dest);
//
//	char src2[30] = "Pedro";
//	char dest2[30] = "Tchau";
//
//	strncat(dest2, src2, 3);
//	printf("Dos caras: %s\n", dest2);
//	return (0);
//}
//
