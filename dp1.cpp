#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	int X[46];
	X[1] = 1;
	X[2] = 2;
	for (int i = 3; i < 46; i++)
	{
		X[i] = X[i - 2] + X[i - 1];
	}

	cin >> a;
	cout << X[a];
}