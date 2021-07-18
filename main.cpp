#include <iostream>
#include <stdio.h>
#include "main.h"
#include "myswap.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	int a = 1;
	int b = 5;

	cout << "Fir a & b = " << a << b << endl;

	abswap(a, b);

	cout << "Sed a & b = " << a << b << endl;

	//if (argc >= 1)
	{
		cout << "you are cute." <<endl;
		/* code */
	}
	//else
	{
		/* code */
		cout << "you are stupid." << endl;
	}
	
	
	
	return 0;
}

