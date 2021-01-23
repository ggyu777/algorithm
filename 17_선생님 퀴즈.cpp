#include <iostream>
using namespace std;
int main() {
	int N, a, b, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = 1; j <= a; j++)
		{
			count += j;
		}
		if (count == b)
		{
			cout << "YES" << endl;

		}
		else
			cout << "NO" << endl;

		count = 0;
	}

}