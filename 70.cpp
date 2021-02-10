/*

70.그래프 최단거리(BFS)
다음 그래프에서 1번 정점에서 각 정점으로 가는 최소 이동 간선수를 출력하세요.

*/


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number;
int nodenumber=2;
int c[21];
vector <int> a[21]; // 벡터 2차원 배열
vector <int> b(21) ;

void bfs(int start) {
	int min = 214700000;
	queue<int> q;
	q.push(start);
	c[start] = true;
	while (!q.empty()) { // 큐가 빌때까지
		int copy = q.size();
		for (int j = 0; j < copy; j++) {
			int x = q.front(); // q의 첫번째 원소


			if (b[x] > number)
				b[x] = number;

			q.pop();


			for (int i = 0; i < a[x].size(); i++) {
				int y = a[x][i];
				if (!c[y]) { // 방문한 상태가 아니라면
					q.push(y); // q에 담아줌
					c[y] = true; // 방문처리

				}

			}
		}
		number++;
		
	}
}

int main() {
	int N, M;
	int input1, input2;
	fill(b.begin(), b.end(), 214700000);

	cin >> N>>M;
	for (int i = 0; i < M; i++) {
		cin >> input1;
		cin >> input2;
		a[input1].push_back(input2);
	}
	bfs(1);

	for(int i=2;i<=N;i++)
	cout <<i << " : " << b[i] << endl;
}