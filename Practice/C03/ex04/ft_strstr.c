#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == ft_strlen(to_find))
			return (str + i);
		i++;
	}
	return (0);
}

int main(void)
{
    char    *str = "Clarette";
    char    *to_find = "";
    printf("Mine: %s\n", ft_strstr(str, to_find));
    printf("Original: %s\n", strstr(str, to_find));
    return (0);
}
