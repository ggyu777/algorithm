#include <iostream>
using namespace std;
int main() {
	int N;
	int array[1000];
	int sum = 0;
	int range;
	int count=0;
	int tmp;
	scanf("%d", &N);
	range = ((N+1) / 2);
	int tmp2;
	tmp2 = range;
	int res=0;
	{
		for (int k = 0; k <= tmp2; k++) // 특정 수는 하나씩 줄음
		{
			for (int i = range; i >= 0; i--) // 특정 수부터 내려가면서 더함
			{
				sum += i;
				count++;
				if (sum == N) // 만약에 더하다가 N값이 나오면 1씩 더해서 출력
				{

					for (int j = 0; j < count; j++)
					{
						cout << i;
						if (count - 1 != j)
						{
							cout << " + ";
							i++;
						}

						else
							cout << " = " << N << endl;

					}

					res++;
				}
				else if (sum > N)
					break;
				
			}
			count = 0;
			sum = 0;
			range--;
			
		}
	}
	cout << res;
}
// *for문 중간에 끝내는 조건*, 이거 공부하기!!!!!!!!!!!!!!!!! 