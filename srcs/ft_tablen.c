int		ft_tablen(char **tab)
{
	int len;

	len = 0;
	while (*tab++)
		len++;
	return (len);
}