/*
20.가위 바위 보
A, B 두 사람이 가위바위보 게임을 합니다. 총 N번의 게임을 하여 A가 이기면 A를 출력하고,
B가 이기면 B를 출력합니다. 비길 경우에는 D를 출력합니다.
가위, 바위, 보의 정보는 1:가위, 2:바위, 3:보로 정하겠습니다.
예를 들어 N=5이면
회수 1 2 3 4 5
A의 정보 2 3 3 1 3
B의 정보 1 1 2 2 3
승자 A B A B D
두 사람의 각 회의 가위, 바위, 보 정보가 주어지면 각 회를 누가 이겼는지 출력하는 프로그램
을 작성하세요.
▣ 입력설명
첫 번째 줄에 게임 횟수인 자연수 N(1<=N<=100)이 주어집니다.
두 번째 줄에는 A가 낸 가위, 바위, 보 정보가 N개 주어집니다.
세 번째 줄에는 B가 낸 가위, 바위, 보 정보가 N개 주어집니다.
▣ 출력설명
각 줄에 각 회의 승자를 출력합니다. 비겼을 경우는 D를 출력합니다.
*/
#include <iostream>
using namespace std;
int main() {
	int N;
	scanf("%d", &N);

	int A[100];
	int B[100];
	char res[100];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int j = 0; j < N; j++)
	{
		scanf("%d", &B[j]);
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] > B[i] )
		{
			if(A[i] - B[i] == 2)
			res[i] = 'B';
			else
			res[i] = 'A';

		}
		else if (B[i] > A[i])
		{
			if (B[i] - A[i] == 2)
				res[i] = 'A';
			else
				res[i] = 'B';
		}
		else if (B[i] == A[i] )
		{
			res[i] = 'D';
		}
		
		cout << res[i] << endl;;
	}
}