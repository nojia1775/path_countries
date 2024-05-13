#include "../include/path_countries.h"

static int	isvalid(t_pays *actuel, char *str)
{
	char	*up;
	int	i;
	int	j;

	up = upcase(str);
	if (!up)
		return (0);
	space_trim(up);
	i = 0;
	if (!strcmp(up, "EXIT"))
		return (free(up), -2);
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
	int	count;

	count = 0;
	while (strcmp(actuel->noms[0], arrivee))
	{
		while (1)
		{
			str = readline("Choisis un pays : ");
			valid = isvalid(actuel, str);
			free(str);
			if (valid == -2)
			{
				free(depart);
				free(arrivee);
				exit(1);
			}
			if (valid != -1)
			{
				actuel = actuel->frontieres[valid];
				count++;
				break;
			}
			else
				printf("%sPays invalide%s\n", BRED, RESET);
		}
		clear_scean();
		affichage(depart, arrivee, actuel);
	}
	printf("\n%sGAGNE : %d changements%s\n", BHYELLOW, count, RESET);
}