#include <stdio.h>

main()
{
    int a = 10, b = 20;
    
    printf("a=%d b=%d\n", a, b);
    printf("a<b ㅡㅡㅡ %d\n", a<b);
    printf("a>b ㅡㅡㅡ %d\n", a>b);
    printf("a==b ㅡㅡㅡ  %d\n", a==b);
    printf("a=b ㅡㅡㅡ %d\n", (a=b)); // 대입식, 대입식은 대입한 값이 그 대입식 전체의 값이 됨()로 감싸 대입식 전체를 나타냄
}

/* 

비교 연산자(Comparison_Operators)는 변수나 수치 등의 값을 비교하여 조건식을 만들고 그 결과에 따라 처리를 변경할 수 있다.


조건 성립 -> 참 (true : 1)
조건 성립하지 않음 -> 거짓 (false: 0)

※항상 왼쪽을 기준으로 생각하기

연산자   기능   사용법   의미
==      같다    a==b    a와 b는 같다.
<       작다    a<b     a는 b보다 작다.
>       크다    a>b     a는 b보다 크다.
<=      이하    a<=b    a는 b보다 작거나 같다.
>=      이상    a>=b    a는 b보다 크거나 같다.
!=      같지 않다. a!=b  a와 b는 같지 않다.

*/
