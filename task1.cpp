#include <iostream>
using namespace std;

int fact(int M)
{
	if (M == 0)
		return 1;
	else
		return M * fact(M - 1);
}

double sinX(int x)
{
	const double esp = 0.00001;
	double i = 1;
	double result = x;
	int m = 1;
	while (i > esp)
	{
		result += ((pow((-1), m) * pow(x, (2 * m + 1))) / fact(2 * m + 1));
		m += 1;
		i /= 10;
		cout << result << '-' << m << endl;
	}
	return result;
}


int main()
{
	int x;
	cout << "x = ";
	cin >> x;
	cout << "sin(x) = " << sinX(x) << endl;
	cout << "STANDART sin(x) = " << sin(x) << endl;
	cout << fact(5);
	return 0;
}