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
	pays->distance = 999;
}

void	clear_scean(void)
{
	printf("\033[2J\033[1;1H");
}

void	affichage(char *depart, char *arrivee, t_pays *actuel)
{
	static char	*historique[100];
	static int	i = 0;
	int		y;

	historique[i++] = actuel->noms[0];
	printf("Objectif :\n%s -> %s\n", depart, arrivee);
	printf("\nHistorique : \n");
	y = 0;
	while (y < i)
		printf("%s -> ", historique[y++]);
	printf("\n");
}

t_pays	*get_country(char *depart, t_pays *countries)
{
	int	i;

	i = 0;
	while (i < 153)
	{
		if (!strcmp(depart, countries[i].noms[0]))
			return (&countries[i]);
		i++;
	}
	return (NULL);
}

char	*upcase(const char *str)
{
	char	*result;
	int	i;
	char	c;

	result = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	if (!result)
		return (NULL);
	result[strlen(str)] = '\0';
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			result[i] = c - 32;
		else
			result[i] = c;
		i++;
	}
	return (result);
}

void	space_trim(char *str)
{
	int	i;

	while (str[0] == ' ')
	{
		i = 0;
		while (str[i])
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	i = strlen(str) - 1;
	while (str[i] == ' ')
		i--;
	while (str[++i])
		str[i] = '\0';
}