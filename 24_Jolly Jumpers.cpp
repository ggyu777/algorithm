/*
24. Jolly Jumpers
N개의 정수로 이루어진 수열에 대해 서로 인접해 있는 두 수의 차가 1에서 N-1까지의 값을
모두 가지면 그 수열을 유쾌한 점퍼(jolly jumper)라고 부른다. 예를 들어 다음과 같은 수열에
서 1 4 2 3 앞 뒤에 있는 숫자 차의 절대 값이 각각 3 ,2, 1이므로 이 수열은 유쾌한 점퍼가
된다. 어떤 수열이 유쾌한 점퍼인지 판단할 수 있는 프로그램을 작성하라.
▣ 입력설명
첫 번째 줄에 자연수 N(3<=N<=100)이 주어진다.
그 다음 줄에 N개의 정수가 주어진다. 정수의 크기는 int 형 범위안에 있습니다.
▣ 출력설명
유쾌한 점퍼이면 “YES"를 출력하고, 그렇지 않으면 ”NO"를 출력한다.
*/

#include <iostream>
#include <stdlib.h >
using namespace std;
int main() {
	int N;
	int array[100];
	int copy[100] = { 0 };
	int count = 0;
	int Ncount=0;
	scanf("%d", &N);
	
	scanf("%d", &array[0]);
	
	for (int i = 1; i < N; i++)
	{
		scanf("%d", &array[i]);
		if (abs(array[i] - array[i - 1]) < N && abs(array[i] - array[i - 1]) > 0)
		{
			copy[abs(array[i] - array[i - 1])]++;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i = 1; i < N; i++)
	{
		if (copy[i] != 1)
		{
			cout << "NO";
			return 0;
		}
	}


	cout << "YES";

}

// before next 만들어서 각각 넣어서 쓰면 배열 만들 필요없음
// 동적할당 vector로
// 정답 코드 공부!