/*
13.가장 많이 사용된 자릿수
N자리의 자연수가 입력되면 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력하는 프
로그램을 작성하세요.
예를 들어 1230565625라는 자연수가 입력되면 5가 3번 상용되어 가장 많이 사용된 숫자입니
다. 답이 여러 개일 경우 그 중 가장 큰 수를 출력하세요.
▣ 입력설명
첫 줄에 자연수가 입력됩니다. 자연수의 길이는 100을 넘지 않습니다.
*/


#include <iostream>
#include <string>

using namespace std;
int main() {
	string N;
	int MAX = 0;
	int result;
	int array[10] = { 0 };
	cin >> N;

	for (int i = 0; i < N.size(); i++)
	{
		array[(N[i] - '0')] += 1; // string으로 받아서 해당값을 배열의 순서에 더함

	}

	
	for (int i = 0; i < 10; i++) {
		if (MAX <= array[i])
		{
			MAX = array[i];   //max값을 갱신한 다음에 해당하는 순번을 result에 저장함
			 result=i;
			
		}
		
	}
	
	printf("%d", result);

}