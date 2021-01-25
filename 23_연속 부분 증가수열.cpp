/*
N개의 숫자가 나열된 수열이 주어집니다.  이 수열 중 연속적으로 증가하는 부분 수열을 최대
길이를 구하여 출력하는 프로그램을 작성하세요.
만약 N=9이고
5 7 3 3 12 12 13 10 11 이면 “3 3 12 12 13”부분이 최대 길이 증가수열이므로 그 길이인
5을 출력합니다. 값이 같을 때는 증가하는 걸로 생각합니다.
▣ 입력설명
첫 줄에 자연수의 개수 N(5<=N<=100,000)이 주어집니다.
두 번째 줄에 N개의 숫자열이 주어집니다. 각 숫자는 100,000이하의 자연수입니다.
▣ 출력설명
최대 부분 증가수열의 길이를 출력하세요.
*/

#include <iostream>
using namespace std;
int main() {
	int N;
	int array[100000];
	int count = 0;
	int MAX = 0;
	scanf("%d", &N);

	for (int i =0 ; i < N; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 1; i < N; i++) {
		if (array[i] >= array[i - 1])
		{
			count++;
			if (count > MAX)
			{
				MAX = count;
			}
		}
		else
			count = 0;
	}

	printf("%d", MAX+1);
}

// 두칸을 저장해놓고 스위칭해서 계속 안에 넣는 것들을 바꿈
// 배열을 애초에 안쓰고 계속 값들을 바꿈