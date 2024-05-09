#include "../include/path_countries.h"

void	bot(t_pays **countries, char *depart)
{
	t_pays	*bot;
	int		i;
	int		next_pays;
	int		best_distance;
	static char	*best_path[10];
	int		j;

	for (j = 0; j < 100; j++)
		best_path[j] = NULL;
	j = 0;
	best_distance = 999;
	bot = get_country(depart, *countries);
	while (bot->distance != 0)
	{
		i = 0;
		while (bot->frontieres[i])
		{
			if (bot->frontieres[i]->distance < best_distance)
			{
				best_distance = bot->frontieres[i]->distance;
				next_pays = i;
			}
			i++;
		}
		best_path[j++] = bot->noms[0];
		bot = bot->frontieres[next_pays];
	}
	j = 0;
	while (best_path[j])
		printf("%s -> ", best_path[j++]);
	printf("%s\n", bot->noms[0]);
}