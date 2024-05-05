#include "../include/path_countries.h"

void	all_zero(t_pays *pays)
{
	int	i;

	i = 0;
	while (i < 3)
		pays->noms[i++] = NULL;
	i = 0;
	while (i < 15)
		pays->frontieres[i++] = NULL;
}