#include "../include/path_countries.h"

static int	there_is_999(t_pays **countries, int russe)
{
	int	i;
	int	lim;

	if (russe)
		lim = 153;
	else
		lim = 152;
	i = 0;
	while (i < lim)
	{
		if (countries[i]->distance == 999)
			return (1);
		i++;
	}
	return (0);
}

void	init_distance(char *arrivee, t_pays **countries, int russe)
{
	t_pays	*cur;
	int	i;
	int	dis;
	int	j;
	int	lim;


	dis = 0;
	cur = get_country(arrivee, countries);
	cur->distance = 0;
	if (russe)
		lim = 153;
	else
		lim = 152;
	while (there_is_999(countries, russe))
	{
		i = 0;
		while (i < lim)
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