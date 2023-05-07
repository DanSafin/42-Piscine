/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhyong <zhyong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:05:02 by zhyong            #+#    #+#             */
/*   Updated: 2023/02/19 13:24:55 by dsafin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print(int *arr)
{
     for (int i = 0; i < 4; i++)
      {
         for (int j = 0; j < 4; j++)
            printf("%d ",arr[i][j]);
         printf("\n");
       }
}

void	ft_atoi(char *str, int arr[4][4])
{
	int	i;
	int x;
	int y;
	
	i = 0;
	x = 0;
	y = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if (y == 4)
		{
			y = 0;
			x++;
		}
		else if (str[i] >= '1' && str[i] <= '4')
		{
			arr[x][y] = str[i] - '0';
			y++;
			i++;
		}
	}
}
// no need atoi just straight up compare the ascii inputed

int isSafe(int grid[4][4], int row, int col, int num)
{
    for (int x = 0; x <= 3; x++)
        if (grid[row][x] == num)
            return 0;
    for (int x = 0; x <= 3; x++)
        if (grid[x][col] == num)
            return 0;
    return 1;
}
 
int	*getnbr(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(grid = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str[i]);
	return (tab);
}

void	fill(int *ptr)
{
	int i;
	
	i = -1;
	while (++i <= 15)
		ptr[i] = 0;
}

int main(int argc, char **argv)
{
	char *input;
	int arr [4][4];
	int *grid;

	grid = malloc((4*4)* sizeof(int));
	fill(grid);
	input = argv[1];
	ft_atoi(input, arr);
	if (argc == 2)
	{
		if (solveSudoku(grid, 0, 0)==1)
			print(grid);
		else
        	printf("No solution exists");
	}
	else
		write(1, "Invalid input", 13);
	free(grid);
	return (0);
}
