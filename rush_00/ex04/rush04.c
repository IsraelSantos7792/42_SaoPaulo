void ft_putchar(char c);

void print_char(int x, int y, int px, int py)
{
	if (px == 0 && (py == 0 || py == (y-1)))
	{
		if (py == 0)
		{
		ft_putchar('A');
		return ;
		}
		ft_putchar ('C');
		return ;
	}
	if (px == (x-1) && (py == 0 || py == (y-1)))
	{
		if (py == 0)
		{
		ft_putchar('C');
		return ;
		}
		ft_putchar ('A');
		return ;
	}
	if (px == 0 || py ==0 || px == (x-1) || py == (y-1))
	{
		ft_putchar('B');
		return ;
	}	
	ft_putchar(' ');
	return ;
}

void rush(int x, int y)
{
	int px;
	int py;

	px = 0;
	py = 0;

	while (py < y)
	{
		while (px < x)
		{
			print_char(x, y, px, py);
			px += 1;
		}
		px = 0;
		ft_putchar('\n');
		py += 1;
	}
	return ;
}
