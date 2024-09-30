
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
		while ((i == 0 & j < y) || j == 0)
		{
			mat_int[i][j] = 0;
			j++;
		}
		i++;
	}
	return mat_int;
}

t_sq_mat ft_sq_mat(char *str)
{
	t_sq_mat sq_mat;
	int i;
	int j;

	sq_mat.y = ((*str)++) + '0'; // gerer cas nombres + grand
	sq_mat.void_c = (*str)++;
	sq_mat.obstacle_c = (*str)++;
	sq_mat.full_c = (*str)++;
	sq_mat.sq = ft_init_sq(6, sq_mat.y); // enlever val en dure
	i = 1;
	j = 1;
	while (*str)
	{
		if (*str == '\n')
		{
			i++;
			j = 1;
		}
		else if (*str == sq_mat.obstacle_c)
		{
			sq_mat.sq[i][j] = 0;
		}
		else if (*str == sq_mat.void_c)
		{
			sq_mat.sq[i][j] = 1;
		}
		j++;
		str++;
	}
	return sq_mat;
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

	int temp[5][6] = {
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 1, 1},
		{0, 1, 0, 1, 2, 2},
		{0, 0, 1, 1, 2, 3},
		{0, 1, 0, 1, 2, 3},
	};

	char *temp_char = "5.oX\noooooo\noo...\no.o...\noo....\no.o...";

	t_sq_mat sq_mat2 = ft_sq_mat(temp_char);
	

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

	ft_putsq_test(sq_mat2);

	max_sq_mat = ft_max_sq(sq_mat);
	printf("x = %d, y = %d,\n", max_sq_mat.x, max_sq_mat.y);
	printf("size = %d\n", max_sq_mat.size);

	ft_putsq(sq_mat);


	return 0;
}



	// {0, 0, 0, 0, 0, 0},
		// {0, 0, 0, 1, 1, 1},
		// {0, 1, 0, 1, 2, 2},
		// {0, 1, 0, 1, 2, 3},
		// {0, 1, 0, 1, 2, 3},
