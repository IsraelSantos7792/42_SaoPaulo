#include <stdio.h>
#include <string.h>



//int	ft_strlen(char *str); //ex00
//void ft_putstr(char *str); //ex01
//void ft_putnbr(int nb); //ex02
int ft_atoi(char *str);


// //ex00
// int main (void)
// {
// 	char str[250] = "Israel Santos Da Silva0";
// 	int res;
// 	res = ft_strlen(str);
// 	printf("%d", res);

// 	return 0;
// }


// //ex01
// int main (void)
// {
// 	char str[250] = "Israel Santos Da Silva0";
// 	ft_putstr(str);
	
// 	return 0;
// }

// //ex02
// int main (void)
// {
// 	int nb;
// 	nb = -15;
// 	ft_putnbr(nb);
// }


//ex03
int main (void)
{
	char str[15] = " ---+--+1234ab567";
	int res;
	res = 0;
	res = int ft_atoi(str);
	printf("%d", res);
}
