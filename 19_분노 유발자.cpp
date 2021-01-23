#include <iostream>
using namespace std;
int main() {
	int N,count=0,res=0;
	int array[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}


	for (int j = 0; j < N-1; j++)
	{
		for (int i = j+1; i < N; i++)
		{
			if (array[j] > array[i])
				count++;
		}
		if (count == N - j-1)
		{
			res++;
		}
		count = 0;
	}
	cout << res;
}

// 중간에 아닌것 나오면 break로 중간에 for문 나오게 함
// *뒤에서 부터 정렬해서 max값만 비교*