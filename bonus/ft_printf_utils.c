int	is_inset(char chr, char *set)
{
	while (*set != 0)
	{
		if (chr == *set)
			return (1);
		set++;
	}
	return (0);
}

int	nbr_len(int nbr)
{
	int	len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
