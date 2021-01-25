/*
A와 B가 늘어놓은 카드의 숫자가 순서대로 주어질 때, 게임의 승자가 A인지 B인지, 또는 비겼
는지 결정하는 프로그램을 작성하시오.
▣ 입력설명
첫 번째 줄에는 A가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다. 두 번
째 줄에는 B가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다.
▣ 출력설명
첫 번째 줄에는 게임이 끝난 후, A와 B가 받은 총 승점을 순서대로 빈칸을 사이에 두고 출력
한다. 두 번째 줄에는 이긴 사람이 A인지 B인지 결정해서, 이긴 사람을 문자 A 또는 B로 출력
한다. 만약 비기는 경우에는 문자 D를 출력한다.
*/

#include <iostream>
using namespace std;
int main() {
	int A[10];
	int B[10];
	char D[10];
	int scoreA = 0, scoreB = 0;
	int DrawCount=0;
	char res;
	for (int i = 0; i < 10; i++)
		scanf("%d", &A[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &B[i]);

	for (int i = 0; i < 10; i++)
	{
		if (A[i] > B[i])
		{
			scoreA += 3;
			D[i] = 'A';
		
		}
		else if (A[i] < B[i])
		{
			scoreB += 3;
			D[i] = 'B';
			
		}
		else
		{
			scoreA += 1;
			scoreB += 1;
			D[i] = 'D';
		}
	}
	
	if (scoreA == scoreB) {
		for (int i = 9; i >= 0; i--) {
			if (D[i] != 'D')
			{
				res = D[i];
				break;
			}
			else
				res = D[i];
		}
	}
	else if (scoreA > scoreB)
	{
		res = 'A';
	}
	else
		res = 'B';


	printf("%d %d\n", scoreA, scoreB);
	printf("%c", res);
}

// *** 미리 last_winner에 D를 저장해서 갱신만 해줌