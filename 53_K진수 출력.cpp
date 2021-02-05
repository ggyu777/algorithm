/*

53.K진수 출력
10진수 N이 입력되면 K진수로 변환하여 출력하는 프로그램을 
작성하세요.스택 자료구조를 사용하시기 바랍니다.

▣ 입력설명
첫 번째 줄에 10진수 N(10 <= N <= 1, 000)과 K(2, 5, 8, 16)
가 주어진다.

▣ 출력설명
K진수를 출력한다.

▣ 입력예제 1
11 2

▣ 출력예제 1
1011

▣ 입력예제 2
31 16

▣ 출력예제 2
1F

*/


#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 1000
int stack[MAX_STACK_SIZE];
int top = -1;


bool IsEmpty() {
    if (top < 0)
        return true;
    else
        return false;
}

bool IsFull() {
    if (top >= MAX_STACK_SIZE - 1)
        return true;
    else
        return false;
}

void push(int value) {
    if (IsFull() == true)
        printf("스택이 가득 찼습니다.");
    else
        stack[++top] = value;
}

int pop() {
    if (IsEmpty() == true)
        printf("스택이 비었습니다.");
    else
        return stack[top--];
}


int main() {
	int N, K;
	scanf("%d %d", &N, &K);
    
    while(N>=K)
    {
        push(N % K);
        N = N/ K;

    }
    push(N % K);

    while(!IsEmpty())
    {
        if(K!=16)
            printf("%d", pop());
        else
            printf("%X", pop());
    }

}
// class로 stack 구현!


