#include "../include/path_countries.h"

void	bot(t_pays **countries, char *depart)
{
	t_pays	*bot;
	int		i;
	int		next_pays;
	int		best_distance;
	static char	*best_path[10] = {0};
	int		j;

	/*int k = -1;
	while (++k < 153)
		printf("%s %p %d\n", countries[k]->noms[0], countries[k], countries[k]->distance);*/
	printf("\nTrajet le plus court : \n");
	j = 0;
	best_distance = 999;
	next_pays = 0;
	bot = get_country(depart, countries);
	if (!bot)
		return ((void)printf("Probleme recuperation pays de depart (bot())\n"));
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
	j = -1;
	while (best_path[++j])
		printf("%s%s -> %s", RED, best_path[j], RESET);
	printf("%s%s : %d changements%s\n", RED, bot->noms[0], j, RESET);
}