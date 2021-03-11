#include <iostream>
using namespace std;

int element(int i)
{
	if (i == 0)
		return 1;
	else if (i == 1)
		return 2;
	return 2 * element(i - 1) + 4 * element(i - 2) + 1;

}

int sum(int N)
{
	int res = 0;
	for (int i = 0; i < N; i++) {
		res += element(i);
	}
	return res;
}