/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:13:54 by pezio             #+#    #+#             */
/*   Updated: 2026/03/12 18:29:37 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <stdio.h>
//#include <string.h>
//int	main()
//{
//	char	str2[5] = "ABCD ";
//	char	str1[6] = "ABCD";
//	int	i;
//
//	i = ft_strcmp(str2, str1);
//	printf("%d\n",i);
//	if (i > 0) {
//		printf("Argumento str1 e maior que str2\n");
//	}else if (i < 0) {
//		printf("Argumento str2 e maior que str1\n");
//	}else {
//		printf("Os argumentos sao iguais\n");
//	}
//
//	i = strcmp(str2, str1);
//	printf("%d\n",i);
//	return (0);
//}
//
