#include "../include/path_countries.h"

static int	isvalid(t_pays *actuel, char *str)
{
	char	*up;
	int	i;
	int	j;

	up = upcase(str);
	if (!up)
		return (0);
	i = 0;
	while (actuel->frontieres[i] != NULL)
	{
		j = 0;
		while (actuel->frontieres[i]->noms[j] != NULL)
		{
			if (!strcmp(actuel->frontieres[i]->noms[j++], up))
				return (free(up), i);
		}
		i++;
	}
	return (free(up), -1);
}

void	game(char *depart, char *arrivee, t_pays *actuel)
{
	char	*str;
	int	valid;
	affichage(depart, arrivee, actuel);
	while (strcmp(actuel->noms[0], arrivee))
	{
		while (1)
		{
			str = readline("Choisis un pays : ");
			valid = isvalid(actuel, str);
			if (valid != -1)
			{
				actuel = actuel->frontieres[valid];
				break;
			}
			else
				printf("Pays invalide\n");
		}
		clear_scean();
		affichage(depart, arrivee, actuel);
	}
	printf("GAGNE\n");
}