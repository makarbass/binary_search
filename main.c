#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned long long	k;
	int					t;

	k = 0;
	t = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		t = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		k = k * 10 + *str - 48;
		str++;
	}
	if (k >= 9223372036854775807)
	{
		if (t == 1)
			return (-1);
		return (0);
	}
	return (t * k);
}

int	ft_isdigit(int arg)
{
	if (arg > 47 & arg < 58)
		return (1);
	else
		return (0);
}

int ft_issort(int *arr, int count)
{
	int i;

	i = 0;
	while (i < count - 1)
	{
		if (arr[i] <= arr[i+1])
			i++;
		else
			break;
	}
	if (i  == count - 1)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	int i;
	int x;
	int l;
	int m;
	int *array;

	if (argc < 2)
		return(-1);
	i = 1;
	while (i < argc)
	{
		if (ft_isdigit(*argv[i]) == 1)
			i++;
		else
		{
			printf("not numeric array\n");
			return(-1);
		}
	}
	if (!(array = (int*)malloc(sizeof(int) * i)))
		return(-1);
	i = 0;
	while (i < argc - 1)
	{
		array[i] = ft_atoi(argv[i+1]);
		i++;
	}
	if (ft_issort(array, i) == 1)
	{
		l = 0;
		printf("what number are we looking for? \n");
		scanf("%d", &x);
		while (l+1 < i)
		{
			m = l + (i-l)/2;
			if (array[m] > x)
				i = m;
			else
				l = m;
		}
		if (array[l] == x)
			printf("index of number %d is %d\n", x, l);
		else
			printf("-1\n");
	}
	else
		printf("array is not sorted\n");
    free(array);
    return(0);
}
