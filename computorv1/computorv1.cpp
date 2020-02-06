#include <iostream>
#include <string>

using namespace std;

float		ft_stof(string str)
{
	int 	i(0);
	float 	res(0.0), temp(0.0);

	while (str[i])
	{
		if (str[i] != '.' && str[i] < 48 && str[i] > 59)
		{
			cout << "Erreur, les entrer ne sont pas des floats" << endl;
			return (0);
		}
		if (str[i] != '.')
		{
			temp = (int) str[i];
			temp -= 48;
			res *= 10;
			res += temp; 
		}
		else if (str[i] == '.')
		{
			temp = (int) str[i+1];
			temp -= 48;
			temp *= 0.1;
			res += temp;
			return (res);
		}
		i++;
	}
	return (res);
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
		i++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	float 	X1(0.0), X2(0.0), Delta(0.0), A(0.0), B(0.0), C(0.0);
	
	if (argc != 4)
	{
		cout << "Le nombre de parametres est incorrecte";
		return(0);
	}

	A = ft_stof(argv[1]);
	B = ft_stof(argv[2]);
	C = ft_stof(argv[3]);

	cout << "A = " << A << " B = " << B << " C = " << C << endl;

	Delta = (B*B)-(4*A*C);

	cout << "Delta : " << Delta << endl;

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

	return(0);
}
