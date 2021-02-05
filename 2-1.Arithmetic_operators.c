#include<stdio.h>

main()
{
	printf("5+5 는 %d입니다.\n", 5+5); //printf 를 pirntf로 써서 C4013에러가 뜸
	printf("5-5 는 %d입니다.\n", 5-5);
	printf("5x5 는 %d입니다.\n", 5*5);
	printf("5÷5 는 %d입니다.\n", 5/5);
	printf("5÷3의 나머지는 %d입니다.\n", 5%3);
}

/*연산자     기능   사용법
    +       더하기  a=b+c
    -       뺴기    a=b-c
    *       곱하기  a=b*c
    /       나누기  a=b/c
    %       나머지  a=b%c
    =       대입    a = b  

= 대입 연산자(Assignment Operators)에서 좌변은 변수, 우변은 값
 a = a + 1; -> a에 a+1 를 대입한다.
  = 이나 += 을 대입 연산자라고 한다. 
 
 대입 연산자의 종류
 
연산자        기능             사용법     의미
  +=      더한 값을 대입       a += b    a+b의 결과를 a에 대입(a=a+b)와 동일
  -=      뺀 값을 대입         a -= b    a-b의 결과를 a에 대입(a=a-b)와 동일
  *=      곱한 값을 대입       a *= b    a*b의 결과를 a에 대입(a=a*b)와 동일
  /=      나눈 값을 대입       a /= b    a/b의 결과를 a에 대입(a=a/b)와 동일
  %=      나눈 나머지를 대입   a %= b    a%b의 결과를 a에 대입(a=a%b)와 동일
  
대입연산자 예제 - 정보처리기사 2020년 실기 3회

#include <stdio.h>

void main(){
        int c = 0;
        int i = 0;
        
        while (i<10){
                i++;
                c *= i;
        }
    printf("%d\n",c);       
}
*/
