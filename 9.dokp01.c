/*
두 정수의 평균 나타내기. 변수는 2개만 쓰고 결과값은 소수 2자리까지만 표현
*/

#include<stdio.h>

int main() {
	int a = 0, b = 0;
	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	printf("AVG : %.2f", (a + b) / 2.0);
}

/*
초를 시 분 초로 나타내기
*/

int main() {
	int sec = 0; 
	scanf_s("%d", &sec);
	int hour = sec / 3600, min = (sec/60)%60;
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", sec, hour, min, sec % 60);
}

/*
세 정수 더하기 총합 구하기, 단 변수는 2개
*/

#include<stdio.h>

int main(void)
{
	int nInput, nTotal=0;

	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}

