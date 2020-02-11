#include <iostream>
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

float		ft_sqrt(float nb)
{
	float 	i(0.0);

	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i += 0.000001;
	}
	return (0);
}

void		ft_polynome2(float A, float B, float C)
{
	float	Delta(0.0), X1(0.0), X2(0.0);

	cout << "Polynomial degree : 2" << endl;
	Delta = (B*B)-(4*A*C);
	if (Delta == 0.0)
	{
		X1 = -B /(2*A);
		cout << "la solution unique est xs = " << X1;
	}
	if (Delta > 0.0)
	{
		X1 = (-B - ft_sqrt(Delta))/(2*A);
		X2 = (-B + ft_sqrt(Delta))/(2*A);
		cout << "les deux racines sont : x1 = " << X1 << " et x2 = " << X2 << endl;
	}
	if (Delta < 0.0)
		cout << "l'equation n'admet pas de solution";
}

void		ft_polynome(float B, float C, float X)
{
	X = (-C) / B;

	cout << "Polynomial degree : 1" << endl;
	if (B != 0 && C != 0)
		cout << "La solution de l'equation est : x = " << X << endl;
	else if (B != 0 && C == 0)
    	cout << "La solution de l'equation est : x = " << X << endl;
	else
		cout << "Il n'y a pas de solution a l'equation" << endl;
}

void		ft_print_form(float A, float B, float C)
{
	cout << "Reduced form: ";
	if (A < 0)
		cout << "- " << (-1*A) << " * X^2 ";
	else if (A > 0)
		cout << A << " * X^2 ";
	if (B < 0)
		cout << "- " << (-1*B) << " * X^1 ";
	else if (B >= 0 && A != 0)
		cout << "+ " << B << " * X^1 ";
	else
		cout << B << " * X^1 ";
	if (C < 0)
		cout << "- " << (-1*C) << " * X^0 = 0" << endl;
	else
		cout << "+ " << C << " * X^0 = 0" << endl;
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
		tmp[x] = str[i];
		tmp[x+1] = str[i+1];
		tmp[x+2] = str[i+2];
		tmp[x+3] = '\0';
		
		if (tmp[x+2] == '0')
			C += ft_recup_valeur(tmp);
		else if (tmp[x+2] == '1')
			B += ft_recup_valeur(tmp);
		else if (tmp[x+2] == '2')
			A += ft_recup_valeur(tmp);

		if (str[i+3] != '\0')
		{
			i = i+3;
			ft_form(str, i, A, B, C);
		}
		else
		{
			ft_print_form(A, B, C);
			if (A != 0)
				ft_polynome2(A, B, C);
			else
				ft_polynome(B, C, 0);
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
