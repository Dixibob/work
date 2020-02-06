#include <iostream>
#include <string>
#include <vector>

using namespace std;

int			ft_len_form(char *str, int	i)
{
	int		x;

	x = 0;
	if ((str[i] >= 48 && str[i] <= 57) || str[i] == '.' || str[i] == '+' || str[i] == '-')
	{
		while (str[i] != 'X' && str[i])
		{
			i++;
			x++;
		}
		x += 3;
		return (x);
	}
	i++;
	return (0);
}

float		ft_recup_valeur(char *str)
{
	int		i(0);
	int		sign(1);
	float 	valeur(0);

	if (str[i] == '-' || str[i] == '+' || str[i] == '=')
	{
		if (str[i] == '-' || str[i] == '=')
			sign = -1;
		i++;
		i++;
	}
	while (str[i] != ' ' && str[i] != '.')
	{
		valeur *= 10;
		valeur += ((float)str[i] - 48);
		i++;
	}
	if (str[i] == '.')
	{
		i++;
		valeur += (((float)str[i] - 48) * 0.1);
		i++;
	}
	valeur = sign * valeur;
	return (valeur);
}

void		ft_form(char *str, int i, float A, float B, float C)
{
	int		x(0);
	char	*tmp;

	while ((str[i] < 48 || str[i] > 57) && (str[i] != '\0') && str[i] != '+' && str[i] != '-' && str[i] != '=')
		i++;

	if ((str[i] >= 48 && str[i] <= 57) || str[i] == '.' || str[i] == '+' || str[i] == '-' || str[i] == '=')
	{
		tmp = new char[ft_len_form(str, i)];
		while (str[i] != 'X' && str[i])
		{
			tmp[x] = str[i];
			x++;
			i++;
		}
		tmp[x] = str[i]; // X
		tmp[x+1] = str[i+1]; // ^
		tmp[x+2] = str[i+2]; // P
		tmp[x+3] = '\0';
		
		if (tmp[x+2] == '0')
			C += ft_recup_valeur(tmp);
		else if (tmp[x+2] == '1')
			B += ft_recup_valeur(tmp);
		else if (tmp[x+2] == '2')
			A += ft_recup_valeur(tmp);

		cout << tmp << endl;
		
		if (str[i+3] != '\0')
		{
			i = i+3;
			ft_form(str, i, A, B, C);
		}
		else
		{
			cout << "Reduced form: "
			if (A < 0)
			cout << "Reduced form: " << A << "X^2 + " << B << "X + " << C << " = 0" << endl;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_form(argv[1],0,0,0,0);
	return (0);
}