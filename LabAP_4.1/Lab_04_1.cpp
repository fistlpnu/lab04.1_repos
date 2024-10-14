#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, k;
	double S;

	cout << "N = "; cin >> N;
	cout << "k = "; cin >> k;

	S = 0;
	k = 1;
	while (k <= N)
	{
		S += 1 + sqrt(1 + k * k) / pow(k, 2);
		k++;
	}
	cout << S << endl;
	
	S = 0;
	k = 1;
	do {
		S += 1 + sqrt(1 + k * k) / pow(k, 2);
		k++;
	} while (k <= N);
	cout << S << endl;
	
	S = 0;
	for (k = 1; k <= N; k++)
	{
		S += 1 + sqrt(1 + k * k) / pow(k, 2);
	}
	cout << S << endl;

	S = 0;
	for (k = N; k >= 1; k--)
	{
		S += 1 + sqrt(1 + k * k) / pow(k, 2);
	}
	cout << S << endl;

	return 0;
}