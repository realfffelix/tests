#include <stdlib.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((i < (n - 1)) && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
