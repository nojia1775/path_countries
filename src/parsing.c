#include "../include/path_countries.h"

void	help(void)
{
	printf("But du jeu : Trouver le chemin le plus court entre 2 pays.\n\n");
	printf("Comment lancer le jeu : \n\t- ./path_countries\t\t(lance le jeu par defaut)\n");
	printf("\t- ./path_countries -russie=no\t(lance le jeu sans la possibilite de passer par la russie)\n");
	printf("\t- ./path_countries -shortcut\t(lance un prompt qui demande un pays de depart et d'arrive et donne le chemin le plus court entre les deux)\n");
}

static int	valid(char *pays, t_pays **countries)
{
	int	i;
	int	j;

	i = 0;
	while (i < 153)
	{
		j = 0;
		printf("%s\n", countries[i]->noms[j]);
		while (countries[i]->noms[j])
		{
			if (!strcmp(pays, countries[i]->noms[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	shortcut(t_pays **countries)
{
	char	*depart;
	char	*arrivee;
	char	*up;

	while (1)
	{
		depart = readline("Choisir un pays de depart : ");
		up = upcase(depart);
		free(depart);
		if (!up)
			return ;
		space_trim(up);
		if (valid(up, countries))
			break;
		printf("Pays invalide\n");
	}
	depart = up;
	while (1)
	{
		arrivee = readline("Choisir un pays de arrivee : ");
		up = upcase(arrivee);
		free(arrivee);
		if (!up)
			return ;
		space_trim(up);
		if (valid(up, countries))
			break;
		printf("Pays invalide\n");
	}
	arrivee = up;
	init_distance(arrivee, countries);
	bot(countries, depart);
	free(arrivee);
	free(depart);
}

int	parsing(int argc, char **argv, int *russe, t_pays **countries)
{
	if (argc > 3)
		return (0);
	if (argc == 1)
	{
		*russe = 1;
		return (1);
	}
	if (argc == 2)
	{
		if (!strcmp(argv[1], "-shortcut"))
			return (shortcut(countries), 2);
		else if (!strcmp(argv[1], "-russie=no"))
			*russe = 0;
		else
			return (0);
	}
	else if (argc == 3)
	{
		if (strcmp(argv[1], "-shortcut") || strcmp(argv[1], "-russie=no") || strcmp(argv[2], "-shortcut") || strcmp(argv[2], "-russie=no"))
			return (0);
		if (!strcmp(argv[1], "-russie=no") || !strcmp(argv[2], "-russie=no"))
			*russe = 0;
		if (!strcmp(argv[1], "-shortcut") || !strcmp(argv[2], "-shortcut"))
		{
			countries[152] = NULL;
			return (shortcut(countries), 2);
		}
	}
	return (1);
}