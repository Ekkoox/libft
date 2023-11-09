#include "libft.h"

char *ft_strmapi (char const *s, char (*f)(unsigned int , char))
{
	unsigned int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if(!str)
		return(NULL);
	while(i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return(str);
}

/*char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
}
int main()
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}*/