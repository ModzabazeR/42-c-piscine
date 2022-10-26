void	get_col(char *dest, char **grid, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		dest[i] = grid[i][col];
		i++;
	}
}

void	rev_arr(char *dest, char *arr)
{
	int	temp;
	int	i;

	i = 0;
	while (i < 4 / 2)
	{
		temp = arr[i];
		arr[i] = arr[4 - 1 - i];
		arr[4 - 1 - i] = temp;
		i++;
	}
    i = 0;
    while (i < 4)
    {
        dest[i] = arr[i];
        i++;
    }
}