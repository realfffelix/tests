#include <stdlib.h>

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
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
