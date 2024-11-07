static void	write_rec(unsigned int num, int fd)
{
	char	digit;

	if (num > 0)
	{
		digit = (num % 10) + '0';
		write_rec(num / 10, fd);
		write(fd, &digit, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		num = -1 * n;
	}
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	write_rec(num, fd);
}