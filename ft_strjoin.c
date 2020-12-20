#include <stdlib.h>

int		fn_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*malloc_all(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*joined;

	i = 0;
	len = 0;
	while (i < size - 1)
		len += (fn_strlen(strs[i++]) + fn_strlen(sep));
	len += (fn_strlen(strs[i]) + 1);
	if (!(joined = malloc(sizeof(char) * len)))
		return (NULL);
	return (joined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*joined;

	if (!(joined = malloc_all(size, strs, sep)))
		return (NULL);
	x = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			joined[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			joined[x++] = sep[j++];
		i++;
	}
	joined[x] = '\0';
	return (joined);
}
