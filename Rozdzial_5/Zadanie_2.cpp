#include <iostream>
#include <array>

using namespace std;

const int ArSize = 100;

int main()
{
	array<long double, ArSize> factorial;
	factorial[1] = factorial[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorial[i] = i * factorial[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorial[i] << endl;
	return 0;
}