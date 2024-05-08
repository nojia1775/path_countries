#ifndef PATH_COUNTRIES_H

# define PATH_COUNTRIES_H

# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <time.h>
# include <unistd.h>

typedef struct s_pays	t_pays;

void	random_itineraire(char **depart, char **arrivee);
void	all_zero(t_pays *pays);
void	init_pays(void);
void	clear_scean(void);
void	affichage(char *depart, char *arrivee, t_pays *actuel);
char	*upcase(const char *str);
t_pays	*get_country(char *depart, t_pays *countries);
void	game(char *depart, char *arrivee, t_pays *actuel);
void	space_trim(char *str);
void	init_distance(char *arrivee, t_pays *countries);

struct s_pays
{
	char	*noms[3];
	t_pays	*frontieres[15];
	int	distance;
};


#endif