#include "ft_select.h"

int	main(int ac, char **av, char **env)
{
	printf("%s\n", env[find_item(env, "TERM")]);	
	return (0);
}
