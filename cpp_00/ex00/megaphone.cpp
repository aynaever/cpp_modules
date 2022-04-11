#include <iostream>
#include <cstring>

// Function to convert characters to upper case;
char	charToUpper(char c)
{
	return (c - 32);
}

// Function to print string in upper case
void	printUpperStr(char str[])
{
	int	i;
	int	len;

	i = 0;
	len = strlen(str);
	while (i < len)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << charToUpper(str[i]);
		else
			std::cout << str[i];
		i++;
	}
}

int	main(int argc, char	*argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printUpperStr(argv[i]);
		i++;
	}
	return (0);
}
