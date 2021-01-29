#include <iostream>
using namespace std;
int main() {
	int S;
	int N;
	int memory[1000] = { 0 };
	int inputN[1000] = { 0 };
	int count = 0;
	int tmp = 0;
	scanf("%d", &S);
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &inputN[i]);
	}
	memory[0] = inputN[0];

	for (int j = 1; j < N; j++)
	{


		{
			while (memory[count] != 0)
			{
				count++;
				if (memory[count] == inputN[j])
				{
					tmp = count;
				}
			}
			if (tmp == 0) // 똑같은게 없을때
			{
				for (int k = count; k > 0; k--)
				{
					memory[k] = memory[k - 1];
				}
				memory[0] = inputN[j];
			}

			else // 똑같은게 있을때
			{
				memory[tmp] = 0;
				for (int k = tmp; k > 0; k--)
				{
					memory[k] = memory[k - 1];
				}
				memory[0] = inputN[j];
			}



			tmp = 0;
			count = 0;
		}
	}

	for (int i = 0; i < S; i++)
	{
		printf("%d ", memory[i]);
	}

}
// 앞에 두개가 똑같으면 오류!