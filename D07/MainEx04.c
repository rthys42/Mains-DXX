#include <stdio.h>

/* Retirez le commentaire sur la structure si vous en avez l'usage */

/*typedef struct	s_variables
{
	int i;
	int j;
	int k;
}					t_variables;*/

// Modifiez les prototypes selon vos besoins.

char	**ft_split_whitespaces(char *str);
int		ft_count_words(char *str);

// Modifiez les variables au besoin, en particulier count_words ainsi que sa fonction.

int		main(int argc, char **argv)
{
	int		i;
	int		count_words;
	char	**tab;

	i = -1;
	if (argc == 2)
	{
		tab = ft_split_whitespaces(argv[1]);
		count_words = ft_count_words(argv[1]);
		while (++i < count_words)
			printf("Tab[%d] = %s\n", i, tab[i]);
	}
	return (0);
}
