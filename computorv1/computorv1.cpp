#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int		main(int argc, char **argv)
{
	float X1(0.0), X2(0.0), Delta(0.0), A(0.0), B(0.0), C(0.0);
	
	if (argc != 4)
	{
		cout << "Le nombre de parametres est incorrecte";
		return(0);
	}

	A = stof(argv[1]);
	B = stof(argv[2]);
	C = stof(argv[3]);

	cout << "A = " << A << " B = " << B << " C = " << C << endl;

	cout << "AX^2 + BX + C : " << A << "X^2 + " << B << "X + " << C << endl;

	Delta = (B*B)-(4*A*C);

	cout << "Delta : " << Delta << endl;

	if (Delta == 0.0)
	{
		X1 = -B /(2*A);
		cout << "la solution unique est xs = " << X1;
	}
	if (Delta > 0.0)
	{
		X1 = (-B - sqrt(Delta))/(2*A);
		X2 = (-B + sqrt(Delta))/(2*A);
		cout << "les deux racines sont : x1 = " << X1 << " et x2 = " << X2 << endl;
	}
	if (Delta < 0.0)
		cout << "l'equation n'admet pas de solution";

	return(0);
}
