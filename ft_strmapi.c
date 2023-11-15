#include "libft.h"

char *ft_strmapi (char const *s, char (*f)(unsigned int , char))
{
	unsigned int i;
	char *str;

	i = 0;
	str = ft_strdup(s);
	if(!str)
		return(NULL);
	while(i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return(str);
}

/*int main()
{
	char str[10] = "hello.";
	return (0);
}*/