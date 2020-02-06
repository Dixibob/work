#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int		main(int argc, char **argv)
{
	int		i(0);

	if (argc == 2)
	{
		i = (int) argv[1][0];
		i -= 48;
		cout << i << endl;
	}
	return (0);
}
