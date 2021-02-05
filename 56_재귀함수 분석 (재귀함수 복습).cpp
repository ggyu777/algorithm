/*
56.재귀함수 분석
자연수 N이 주어지면 아래와 같이 출력하는 프로그램을 작성하세요. 재귀함수를 이용해서 출
력해야 합니다.

▣ 입력설명
첫 번째 줄에 자연수 N(1<=N<=20)이 주어집니다.

▣ 출력설명
첫 번째 줄에 재귀함수를 이용해서 출력하세요.

▣ 입력예제 1
3

▣ 출력예제 1
1 2 3
*/

#include <iostream>
using namespace std;
int i = 1;
void recur(int s) {
	if (s > 0)
	{
		printf("%d ", i++);
		recur(--s);
	}

	// *아니면 끝나는 조건을 만들어야 재귀함수임*
	// *if랑 else문이 있어야함*
}


int main() {
	int N;
	scanf("%d", &N);
	recur(N);
}