/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilchez <avilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:45:36 by avilchez          #+#    #+#             */
/*   Updated: 2022/04/27 17:44:20 by avilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !(str))
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*char	my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}
int	main()
{
	char	str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return 0;
}*/

/*char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}
int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/

/*
int add(int a, int b)
{
	return a + b;
}
int mul(int a, int b)
{
	return a * b;
}
int main()
{
	int(*fp)(int, int);
	fp = add;
	printf("%d\n", fp(10, 20)); //30
	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}*/
