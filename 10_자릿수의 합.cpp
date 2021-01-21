/*
10.자릿수의 합
N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고, 그 합이 최대인 자연수를 출력 
하는 프로그램을 작성하세요. 각 자연수의 자릿수의 합을 구하는 함수를 int digit_sum(int x)를 
꼭 작성해서 프로그래밍 하세요.
▣ 입력설명 
첫 줄에 자연수의 개수 N(3<=N<=100)이 주어지고, 그 다음 줄에 N개의 자연수가 주어진다. 
각 자연수의 크기는 10,000,000를 넘지 않는다.
▣ 출력설명 
자릿수의 합이 최대인 자연수를 출력한다. 자리수의 합이 최대인 자연수가 여러개인 경우 그 
중 값이 가장 큰 값을 출력합니다.
*/

#include <iostream>
int main() {
	int N,sum=0,MAX=0;
	int compare;
	scanf("%d", &N);
	int array[100];
	int copy[100];
	int R;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
		copy[i] = array[i];  // array를 copy에 넣어서 똑같은 배열을 하나 더 만듬
		while (array[i] > 0)  // array에 10을 나누고 10을곱한다음 원래 값에서 빼서 자릿수를 구한다음 더함
		{
			compare = array[i];
			array[i] =(array[i]/ 10)*10;
			
			sum += (compare - array[i]);
			array[i] /= 10;
		}
		array[i] = sum;
		
		sum = 0;

		if (array[i] >= MAX) // 더한값이 Max일때의 순번을 저장
		{
			if (array[i] == MAX)
			{
				if (copy[R] > copy[i]) // max값이 똑같다면 원래 숫자가 큰게 저장
				{
					MAX = array[R];
					
				}
				else {
					MAX = array[i];
					R = i;
				}
			}
			else {
				MAX = array[i];
				R = i;
			}
		}
	}

	printf("%d", copy[R]);
}