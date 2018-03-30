
# include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int carrier;

	carrier = ft_abs(nb);
	if (nb < 0)
		ft_putchar_fd('-', fd);
	if (carrier >= 10)
		ft_putnbr_fd(carrier / 10, fd);
	ft_putchar_fd(48 + carrier % 10, fd);
}
