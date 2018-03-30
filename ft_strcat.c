
char	*ft_strcat(char *dst, char *src)
{
	char *pdst;

	pdst = dst;
	while (*pdst)
		pdst++;
	while (*src)
		*pdst++ = *src++;
	*pdst = '\0';
	return (dst);
}
