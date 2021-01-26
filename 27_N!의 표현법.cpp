#include <iostream>
using namespace std;
int main() {
	int N;
	int array[1001] = { 0 };
	int sosu[1001];
	int res[1000] = { 0 };
	int tmp=0;
	int save;
	
	scanf("%d", &N);
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 1; i*j <= 1000; j++)
		{
			array[i * j]++;
		}
	}
	int j = 0;
	for (int i = 0; i <= 1000; i++)
	{
		
		if (array[i] == 1)
		{
			sosu[j]=i;
			j++;

		}
	}

	for (int pactorial = 2; pactorial <= N; pactorial++) {
		for (int i = 0; sosu[i] <= pactorial; i++) {
			save = pactorial;
			while (pactorial % sosu[i] == 0)
			{
				pactorial /= sosu[i];
				res[i]++;
				if(i>tmp) tmp = i;
			}
			pactorial=save;
		}
	}
	
	cout << N << "! = ";

	for (int i = 0; i <= tmp; i++)
	{
		printf("%d ", res[i]);
	}
}

// 소인수 분해로 풀면 가능! 내코드랑 정답코드랑 합치기