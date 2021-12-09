//Lab13_1.cpp
#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	cout << fixed;
	cout << "----------------------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(15) << "exp(1/x)" << " |"
		<< setw(15) << "S" << " |"
		<< setw(10) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------------------------" << endl;

	while (x <= x_k) {
		if (x != 0) {
			sum();
			cout << "|" << setw(10) << setprecision(2) << x << " |"
				<< setw(15) << setprecision(2) << exp(1 / x) << " |"
				<< setw(15) << setprecision(2) << s << " |"
				<< setw(10) << n << " |"
				<< endl;
			x += dx;
		}
		else
			cout << "x = 0";
	}
	cout << "-------------------------------------------------------------" << endl;
	cin.get();
	return 0;
}