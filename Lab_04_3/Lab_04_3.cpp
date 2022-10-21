#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double F, a, b, c, x, xp, xk, dx;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-----------" << endl;
	cout << "|" << setw(8) << "F" << " |" << endl;
	x = xp;
	while (x <= xk)
	{
		if ((x - 1) < 0 && (b - x) != 0)
			F = a * (x * x) + b;

		else
			if ((x - 1) > 0 && (b + x) == 0)
				F = (x - a) / x;
			else
				F = x / c;

		cout << "|" << setw(8) << setprecision(2) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "-----------" << endl;
	return 0;

}