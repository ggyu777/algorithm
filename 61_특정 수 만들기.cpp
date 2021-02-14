/*

61.특정 수 만들기(DFS : MS 인터뷰)
N개의 원소로 구성된 자연수 집합이 주어지면, 집합의 원소와 ‘+’, ‘-’ 연산을 사용하여 특정
수인 M을 만드는 경우가 몇 가지 있는지 출력하는 프로그램을 작성하세요. 각 원소는 연산에
한 번만 사용합니다.
예를 들어 {2, 4, 6, 8}이 입력되고, M=12이면
2+4+6=12
4+8=12
6+8-2=12
2-4+6+8=12
로 총 4가지의 경우가 있습니다. 만들어지는 경우가 존재하지 않으면 -1를 출력한다.
▣ 입력설명
첫 번째 줄에 자연수 N(1<=N<=10)와 M(1<=M<=100) 주어집니다.
두 번째 줄에 집합의 원소 N개가 주어진다. 각 원소는 중복되지 않는다.

*/

#include <iostream>
using namespace std;
int ch[11];
int a[11];
int n;
int sum = 0;
int m;
int res=0;
void D(int v) {
	int i;
	if (v == n + 1) {
		for (i = 1; i <= n; i++) {
			if (ch[i] == 1)
			{
				sum += a[i];

			}
			else if (ch[i] == -1)
			{
				sum -= a[i];
			}


		}
		if (sum == m)
		{
			res++;
		}
		sum = 0;
	}
	else { // 1인경우 더하고 -1인경우 빼고 0인경우 생략
		ch[v] = 1;
		D(v + 1);
		ch[v] = -1;
		D(v + 1);
		ch[v] = 0;
		D(v + 1);
	}
}

int main() {
	scanf("%d %d", &n,&m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	D(1);

	printf("%d", res);
	return 0;
}