#include "../include/path_countries.h"

static int	there_is_999(t_pays **countries)
{
	int	i;

	i = 0;
	while (i < 153)
	{
		if (countries[i]->distance == 999)
			return (1);
		i++;
	}
	return (0);
}

void	init_distance(char *arrivee, t_pays **countries)
{
	t_pays	*cur;
	int	i;
	int	dis;
	int	j;

	dis = 0;
	cur = get_country(arrivee, countries);
	cur->distance = 0;
	while (there_is_999(countries))
	{
		i = 0;
		while (i < 153)
		{
			j = 0;
			while (countries[i]->distance == 999 && countries[i]->frontieres[j])
			{
				if (countries[i]->frontieres[j]->distance == dis)
					countries[i]->distance = dis + 1;
				j++;
			}
			i++;
		}
		dis++;
	}
}