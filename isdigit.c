
int	ft_isdigit(unsigned char *str)
{
	int	c;

	c = 0;
	while(str[c] != '\0')
	{
		if(str[c] >= '0' && str[c] <= '9')
			c++;
		else
			return (1);
	}
	return (0);
}
