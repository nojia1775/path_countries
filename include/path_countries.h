#ifndef PATH_COUNTRIES_H

# define PATH_COUNTRIES_H

# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <time.h>
# include <unistd.h>
# include "color.h"

typedef struct s_pays	t_pays;

void	random_itineraire(char **depart, char **arrivee, int russe);
void	all_zero(t_pays *pays);
void	init_pays(int russe);
void	clear_scean(void);
void	affichage(char *depart, char *arrivee, t_pays *actuel);
char	*upcase(const char *str);
t_pays	*get_country(char *depart, t_pays **countries);
void	game(char *depart, char *arrivee, t_pays *actuel);
void	space_trim(char *str);
void	init_distance(char *arrivee, t_pays **countries, int russe);
void	bot(t_pays **countries, char *depart);
void	help(void);
void	shortcut(t_pays **countries, int russe);
int	parsing(int argc, char **argv, int *russe, t_pays **countries);

struct s_pays
{
	char	*noms[3];
	t_pays	*frontieres[15];
	int	distance;
};


#endif