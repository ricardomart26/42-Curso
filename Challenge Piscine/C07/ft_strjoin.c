#include <stdlib.h>

int ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char *ft_concatenate(int size, char **strs, char *sep)
{
	int i;
	int len;
	char *str;

	i = 0;
	len = 0;
	while (i < size) // Algoritmo para ver o tamanho de todas as strings
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1; // tamanho do sep
	if (size <= 0)
		len = 1;																			 // Se o tamanho for 0 ou menor, a len e 1
	if (!(str = (char *)malloc(sizeof(char) * len))) // Verificar se cabe no malloc
		return (0);
	return (str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int c;
	int i;
	int j;
	char *str;

	j = 0;
	c = 0;
	str = ft_concatenate(size, strs, sep);
	while (c++ < size)
	{
		i = 0;						 // O i tem que ser igualado a 0 para regressar ao inicio da string
		while (strs[c][i]) // Juntar varias strings num array
		{
			str[j++] = strs[c][i];
			i++;
		}
		i = 0;
		while (sep[i] && c != size - 1)
		{
			str[j++] = sep[i];
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}
