#include <iostream>
using namespace std;
int main() {
	int N;
	int score[100] = { 0 },count[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
		count[i] = 1;
		
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (score[i] > score[j])
				count[j]++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", count[i]);

	}
	
}