#include <iostream>
using namespace std;
int main() {
	int N;
	int array[1001] = { 0 };
	int sosu[1001];
	int res[1000] = { 0 };
	int tmp = 0;
	int save;
	int result = 0;

	scanf("%d", &N);
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 1; i * j <= 1000; j++)
		{
			array[i * j]++;
		}
	}
	int j = 0;
	for (int i = 0; i <= 1000; i++)
	{

		if (array[i] == 1)
		{
			sosu[j] = i;
			j++;
		}
	}
	for (int pactorial = 2; pactorial <= N; pactorial++) {
		for (int i = 0; i <= pactorial; i++) {
			save = pactorial;
			while (pactorial % sosu[i] == 0)
			{
				pactorial /= sosu[i];
				res[i]++;
				if (i > tmp) tmp = i;
			}
			pactorial = save;
		}
		
	}

	while (res[0] && res[2] != 0)
	{
		if (res[0] > 0 && res[2] > 0)
		{
			res[0]--;
			res[2]--;
			result++;
		}
	}

	printf("%d", result);
}

// 2랑 5중에 작은것 출력하면 됨 (삼항연산자)