/*문제
어떤 정수를 입력받아서 그 수의 절대값을 출력해 주는 프로그램을 작성하시오.


처음에는 수학적으로 컴퓨터에서 표현한 음의 수를 어떻게 양수로 바꿀까 생각했는데
어떻게 해야될지 몰라서 입력값을 그냥 문자열로 생각해서 맨 앞에 -부호가 있으면 뺴버리기로 했다.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ab(int a);

main()
{
	int in = 0;
	int* inp;

	scanf("%d", inp);

	if (in > 0)
		printf("%d", in);
	else if (in <= 0)
		ab(in);
	else
		printf("정수가 아닙니다.");

	return 0;
}

int ab(int a)
{
	int x = 0;

	printf("%d", (unsigned int)x);
		
}

여기까지 처음에 생각하다가 포기한 코드
*/

/*
여기가 두번째 생각한 맨 앞 기호 -를 +로 바꿔서 출력하는 코드

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	int input;
	char inputc[100];

	ifscanf("%d", &input); //inbut 값 입력

	if (input > 0)
		printf("%d", input); //input값이 0보다 크면 input출력
	else if (input == 0)
		printf("%d", input);
	else if (input < 0) {		//input값이 0보다 작으면 숫자를 문자inputc로 바꾸고 inputc[0]에 -를 +으로 바꾸고 다시 숫자로 바꿔서 출력
		sprintf(inputc, "%d", input);
		if (inputc[0] == '-') {
			inputc[0] = '+';
			int n = atoi(inputc);
			printf("%d", n);
		}
	}
	else
		printf("정수가 아닙니다");
}

그런데 문자를 입력해도 정수가 아닙니다가 출력이 안되었다.
알고보니 scanf가 숫자인지 아닌지 먼저 판단하는 코드를 넣고 참이면 위의 식을 수행 아니면 정수가 아닙니다가 출력되게 해야하는 것이었다.
(모든 숫자는 0보다 크거나 0이거나 0보다 작으므로 위에 스캔f에 input값이 들어왔을떄 input값을 초기화해주지 않았으므로 쓰레기 값이 들어가 있어 그게 출력되는 것이었다)
따라서 스캔f에 정수값이 잘 들어갔는지 판단하는 if문을 겉에 씌워주면 정수가 아닙니다가 제대로 출력된다.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{
	int input;
	char inputc[100];

	scanf("%d", &input); //inbut 값 입력
	if (scanf("%d", &input) == 1) {  //sanf에 정수가 잘 입력됐는지 판단 옳으면 아래 진행 틀리면 정수가 아닙니다 출력

		if (input > 0)
			printf("%d", input); //input값이 0보다 크면 input출력
		else if (input == 0)
			printf("%d", input);
		else if (input < 0) {		//input값이 0보다 작으면 숫자를 문자inputc로 바꾸고 inputc[0]에 -를 +으로 바꾸고 다시 숫자로 바꿔서 출력
			sprintf(inputc, "%d", input);
			if (inputc[0] == '-') {
				inputc[0] = '+';
				int n = atoi(inputc);
				printf("%d", n);
			}
		}
	}
	else
		printf("정수가 아닙니다");
}

아래는 책에 나온 정답. 쉽게 생각하면 음수를 입력해주면 -를 곱하면 양수가 되는 거였다. ... 이걸 생각못해서 코드가 엄청 길어졌다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int abs(int);
int main() {
	int a;
	printf("\ninput the value : ");
	scanf("%d", &a); //정수를 입력받음
	if (scanf("%d", &a) == 1)
		printf("the absoulute value of %d is %d", a, abs(a));
	else
		printf("정수를 입력해주세요.");
}

int abs(int a) {
	int b;
	b = (a < 0) ? -a : a;
	return b;
}
