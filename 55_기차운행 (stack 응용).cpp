/*

55.기차운행(stack 응용)
A도시에서 출발한 기차는 B도시로 도착한다. 그런데 도로 중간에 T자형 교차로가 있어 출발한
기차의 도착 순서를 조정할 수 있다.

교차로에서는 다음과 같은 두 개의 작업을 합니다.
P(push)작업 : A도시에서 오는 기차를 교차로에 넣는다.
O(out)작업 : 교차로에 들어온 가장 최근 기차를 B도시로 보낸다.
만약 2 1 3 기차 번호 순으로 A도시에서 출발하더라도 B도시에는 T교차로를 이용하여 1 2 3
순으로 도착하게 할 수 있습니다.
그 작업 P, P, O, O, P, O순으로 작업을 하면 B도시에 1, 2, 3 순으로 도착합니다.
1부터 N까지 번호를 가진 기차가 A도시에서 어떤 순으로 출발하든, B도시에 번호순으로 도착
하도록 하는 교차로 작업을 출력합니다. 모든 기차는 교차로에 들어가야만 B도시로 갈 수 있
습니다. 번호순서대로 도착이 불가능하면 impossible 이라고 출력합니다.

▣ 입력설명
첫 번째 줄에 자연수 N(3<=N<=30)가 주어진다.
두 번째 줄에 A도시에서 출발하는 기차번호순이 차례대로 입력된다.

▣ 출력설명
교차로 작업을 순서대로 P와 O로 출력한다.

▣ 입력예제 1
3
2 1 3

▣ 출력예제 1
PPOOPO

*/



#include <iostream>
#include <string>
#define MAX_ARRAY_SIZE 30
using namespace std;
int top = -1;
int stack[MAX_ARRAY_SIZE];

bool isEmpty() {
	if (top < 0)  // top이 -1이니까 하나라도 들어오면 -1보다는 커짐
		return true;
	else
		return false;
}

bool isFull() {
	if (MAX_ARRAY_SIZE - 1 <= top) // 꽉차면 일케됨
		return true;
	else
		return false;
}

void push(int s) { // 가득 차지 않았으면 s를 채움
	if (isFull() == true)
		printf("스택이 꽉찼습니다!");
	else
		stack[++top] = s;
		
}

int pop() { // 비지 않았으면 위에서 부터 리턴함
	if (isEmpty() == false)
		return stack[top--];
	else
		printf("스택이 비었습니다!");
}


int main() {
	int N, car, order=1,idx=0, vol=0;
	char array[60]; // PO 들을 저장
	scanf("%d", &N);

	for (int i = 0; i < N;i++) {
		
			scanf("%d", &car);
			push(car);
			array[idx++]='P';
			vol++;
			
		while (stack[top] == order) // 순서가 1인데 들어온 숫자가 1이면 
			                        // 내보내고 순서에 +1을 해주고 반복
			{
				pop();
				array[idx++] = 'O';
				order++;
				vol++;
			}
		
	}
	for (int i = 0; i < 2*N; i++) {
		if (vol == 2 * N)
			printf("%c", array[i]);
		else
		{
			cout << "impossible"; // 만약에 PO들의 값이 N*2 가 아니면 impossible
			return 0;
		}
	}

	
}
//* str +="A" 로 더함 *
//* stack에 남아있는게 있으면 Impossible *