/*
54.올바른 괄호(stack)
괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력합니다.
(())() 이것은 괄호의 쌍이 올바르게 위치하는 거지만, (()()))은 올바른 괄호가 아니다.

▣ 입력설명
첫 번째 줄에 괄호 문자열이 입력됩니다. 문자열의 최대 길이는 30이다.

▣ 출력설명
첫 번째 줄에 YES, NO를 출력한다.

▣ 입력예제 1
(()(()))(()

▣ 출력예제 1
NO

▣ 입력예제 2
()()(()())

▣ 출력예제 2
YES

*/



#include <iostream>
#include <string>
#define MAX_ARRAY_SIZE 30
using namespace std;
int top = -1;
char stack[MAX_ARRAY_SIZE];

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

void push(char s) { // 가득 차지 않았으면 s를 채움
	if (isFull() == false)
		stack[++top] = s;
	else
		printf("스택이 꽉찼습니다!");
}

int pop() { // 비지 않았으면 위에서 부터 리턴함
	if (isEmpty() == false)
		return stack[top--];
	else
		printf("스택이 비었습니다!");
}


int main() {
	int RightCount = 0;
	int LeftCount = 0;

	string Gwalho;
	cin >> Gwalho;

	for (int i = 0; i < Gwalho.size(); i++)
	{
		push(Gwalho[i]);
	}

	for (int i = 0; i < Gwalho.size(); i++)
	{
		if (pop() == ')')
			RightCount++;
		else
		{
			LeftCount++;
			if (LeftCount > RightCount) // "(" 가 ")" 보다 많을때
			{
				cout << "NO";
				return 0;
			}
		
		}
	}
	if (RightCount != LeftCount) //맨 처음이 ")"로 끝날때
		cout << "NO";
	else
	cout << "YES";
}

//stack 정답 코드 공부