/*

60.합이 같은 부분집합(DFS : 아마존 인터뷰)
N개의 원소로 구성된 자연수 집합이 주어지면, 이 집합을 두 개의 부분집합으로 나누었을 때
두 부분집합의 원소의 합이 서로 같은 경우가 존재하면 “YES"를 출력하고, 그렇지 않으면
”NO"를 출력하는 프로그램을 작성하세요.
예를 들어 {1, 3, 5, 6, 7, 10}이 입력되면 {1, 3, 5, 7} = {6, 10} 으로 두 부분집합의 합이
16으로 같은 경우가 존재하는 것을 알 수 있다.

▣ 입력설명
첫 번째 줄에 자연수 N(1<=N<=10)이 주어집니다.
두 번째 줄에 집합의 원소 N개가 주어진다. 각 원소는 중복되지 않으며 그 크기는 1,000,000
이하입니다.
▣ 출력설명
첫 번째 줄에 “YES" 또는 ”NO"를 출력한다.

*/

#include <iostream>
using namespace std;
int ch[11]; // 이건 레벨
int a[11];  // 입력 받은 부분 집합
int sum = 0;
bool flag;
int n;
void D(int v) {
	int i;
	int sum2 = 0;
	if (v == n + 1) {
		for (i = 1; i <= n; i++) {
			if (ch[i] == 1) sum2+=a[i];
			{
				if (sum - sum2 == sum2) // 만일 똑같은 경우가 존재 할 경우 true 저장
				{
					flag = true;

				}
			}
		}
	}
	else {
		ch[v] = 1;
		D(v + 1);
		ch[v] = 0;
		D(v + 1);
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}

	D(1);

	if (flag != true)
		printf("NO");
	else
		printf("YES");
	return 0;
}