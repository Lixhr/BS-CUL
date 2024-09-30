
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_sq_mat
{
	int **sq;
	int x;
	int y;
	char void_c;
	char obstacle_c;
	char full_c;
} t_sq_mat;

typedef struct	s_max_sq_mat
{
	int x;
	int y;
	int size;
} t_max_sq_mat;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

t_max_sq_mat	ft_max_sq(t_sq_mat sq_mat)
{
	t_max_sq_mat	max_sq_mat;
	int	max_nb;
	int	i;
	int	j;

	max_sq_mat.size = sq_mat.sq[0][0];
	i = 0;
	while (i < sq_mat.y)
	{
		j = 0;
		while (j < sq_mat.x)
		{
			if(max_sq_mat.size < sq_mat.sq[i][j])
			{
				max_sq_mat.size = sq_mat.sq[i][j];
				max_sq_mat.x = j - max_sq_mat.size + 1;
				max_sq_mat.y = i - max_sq_mat.size + 1;
			}
			j++;
		}
		i++;
	}
	return max_sq_mat;
}

void	ft_putsq_test(t_sq_mat sq_mat)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < sq_mat.y)
	{
		j = 0;
		while (j < sq_mat.x)
		{
			if(j != 0)
				write(1, " ", 1);
			c = sq_mat.sq[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putsq(t_sq_mat sq_mat)
{
	t_max_sq_mat	max_sq_mat;
	char			c;
	int			i;
	int			j;

	max_sq_mat = ft_max_sq(sq_mat);
	i = 0;
	while (++i < sq_mat.y)
	{
		j = 0;
		while (++j < sq_mat.x)
		{
			// if(j != 0)
			// 	write(1, " ", 1);
			if (j >= max_sq_mat.x && j < max_sq_mat.x + max_sq_mat.size
				&& i >= max_sq_mat.y && i < max_sq_mat.y + max_sq_mat.size)
				write(1, "X", 1);
			else if (sq_mat.sq[i][j] == 0)
				write(1, "o", 1);
			else
				write(1, ".", 1);
		}
		write(1, "\n", 1);
	}
}

int **ft_init_sq(int x, int y)
{
	int **mat_int;
	int i;
	int j;

	mat_int = (int **)malloc(y * sizeof(int *));
	i = 0;
	while (i < y)
	{
		mat_int[i] = (int *)malloc(x * sizeof(int));
		j = 0;
		while ((i == 0 & j < x) || j == 0)
		{
			mat_int[i][j] = 0;
			j++;
		}
		i++;
	}
	return mat_int;
}

int min_sq_nb(t_sq_mat sq_mat, int x, int y)
{
	int nb;

	nb = sq_mat.sq[y - 1][x];
	if (sq_mat.sq[y - 1][x - 1] < nb)
		nb = sq_mat.sq[y - 1][x - 1];
	if (sq_mat.sq[y][x - 1] < nb)
		nb = sq_mat.sq[y][x - 1];
	return nb;
}

void ft_sq_mat(char *str, t_sq_mat *sq_mat)
{
	int i;
	int j;

	(*sq_mat).sq = ft_init_sq((*sq_mat).x, (*sq_mat).y);
	i = 1;
	j = 1;
	while (*str)
	{
		if (*str == '\n')
		{
			i++;
			j = 0;
		}
		else if (*str == (*sq_mat).obstacle_c)
		{
			(*sq_mat).sq[i][j] = 0;
		}
		else if (*str == (*sq_mat).void_c)
		{
			(*sq_mat).sq[i][j] = 1 + min_sq_nb(*sq_mat, j, i);
		}
		j++;
		str++;
	}
}


int main(int argc, char const *argv[])
{
	t_sq_mat sq_mat;
	t_max_sq_mat max_sq_mat;
	sq_mat.x = 6;
	sq_mat.y = 5;
	sq_mat.void_c = '.';
	sq_mat.obstacle_c = 'o';
	sq_mat.full_c = 'X';
	int i;
	int j;

	// int temp[5][6] = {
	// 	{0, 0, 0, 0, 0, 0},
	// 	{0, 0, 0, 1, 1, 1},
	// 	{0, 1, 0, 1, 2, 2},
	// 	{0, 0, 1, 1, 2, 3},
	// 	{0, 1, 0, 1, 2, 3},
	// };

	// char *temp_char = "5.oX\noooooo\noo...\no.o...\noo....\no.o...";
	char *temp_char = "oo...\n.o...\no....\n.o...";

	ft_sq_mat(temp_char, &sq_mat);
	

	// sq_mat.sq = (int **)malloc(sq_mat.y * sizeof(int *));
	// i = 0;
	// while (i < sq_mat.y)
	// {
	// 	sq_mat.sq[i] = (int *)malloc(sq_mat.x * sizeof(int));
	// 	j = 0;
	// 	while (j < sq_mat.x)
	// 	{
	// 		sq_mat.sq[i][j] = temp[i][j];
	// 		j++;
	// 	}
	// 	i++;
	// }

	// ft_putsq_test(sq_mat);

	// max_sq_mat = ft_max_sq(sq_mat);
	// printf("x = %d, y = %d,\n", max_sq_mat.x, max_sq_mat.y);
	// printf("size = %d\n", max_sq_mat.size);




	ft_putsq_test(sq_mat);

	ft_putsq(sq_mat);

	return 0;
}



	// {0, 0, 0, 0, 0, 0},
		// {0, 0, 0, 1, 1, 1},
		// {0, 1, 0, 1, 2, 2},
		// {0, 1, 0, 1, 2, 3},
		// {0, 1, 0, 1, 2, 3},
