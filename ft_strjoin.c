#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, (ft_strlen(s1) + 1));
	ft_strlcat (s3, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (s3);
}

// int main ()
// {
// 	printf("%s\n", ft_strjoin("Bailarinna", "cappuccina"));
// }