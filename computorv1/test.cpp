#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int		ft_strlen(string chaine)
{
	int	i(0);

	while (chaine[i])
	{
		i++;
	}
	return(i);
}

int		main(int argc, char **argv)
{
	string	chaine("");
	string	result("");
	int		i(0);
	int		k(0);

	if (argc == 2)
	{
		chaine = argv[1];
		i = ft_strlen(chaine);
		while (k <= i)
		{
			result[k] = chaine[k];
			k++;
			i++;
		}
		cout << result << endl;
	}
	else
		return(0);
}
