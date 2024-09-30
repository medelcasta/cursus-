int	check_spaces(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] > 0 && str[pos] <= 32)
		pos++;
	return (pos);
}

int	check_sign(char *str, int *sign)
{
	int	count;
	int	sign_counter;

	count = 0;
	sign_counter = 0;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign_counter++;
		count++;
	}
	if (sign_counter % 2 != 0)
		*sign = -1;
	return (count);
}

int	check_dig(char *str, int start)
{
	int	pos;

	pos = start;
	while (str[pos] >= '0' && str[pos] <= '9')
		pos++;
	return (pos);
}

int	ft_atoi(char *str)
{
	int	pos;
	int	sign;
	int	num;

	pos = check_spaces(str);
	sign = 1;
	pos += check_sign(&str[pos], &sign);
	num = 0;
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		num = num * 10 + (str[pos] - '0');
		pos++;
	}
	return (num * sign);
}