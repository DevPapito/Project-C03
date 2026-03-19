/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:46:58 by pezio             #+#    #+#             */
/*   Updated: 2026/03/15 00:55:33 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (n);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i + 1) < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <stdio.h>
//#include <string.h>
//int	main()
//{
//	char	str2[5] = "ABCD";
//	char	str1[6] = "ABC";
//	int	i;
//
//	i = ft_strncmp(str2, str1, 4);
//	printf("%d\n",i);
//	if (i > 0) {
//		printf("Argumento str1 e maior que str2\n");
//	}else if (i < 0) {
//		printf("Argumento str2 e maior que str1\n");
//	}else {
//		printf("Os argumentos sao iguais\n");
//	}
//
//	i = strncmp(str2, str1, 4);
//	printf("%d\n",i);
//	return (0);
//}
//
