#include <stdio.h>

int  addnum(int a, int b)
{
    int x;
    x = a + b;
    printf("%d", x);
    return x;
}                             //여기까지가 함수 정의

int main()
{
    addnum(1, 2);

    return;
}
/*
함수의 정의
먼저 함수를 정의해 주고 그 다음 main()함수에서 함수를 불러와서 써준다.
처리의 재료가 되는 값 - 인수 (파라미터)
결과 값을 리턴 값이라고 한다.


함수 값을 반환 할 필요가 없을 떄는 반환값의 형을 void로 지정한다.

인수의 정수 값을 표사하는 dispnum()
#include <stdio.h>

void dispnum(int a)
{
    printf("인수의 정수 값은 %d\n", a);
    return; // 반환 값을 지정하지 않아도 괜찮은 함수에는 return 이 없어도 괜찮다.
}

int main()
{
    dispnum(1.2);

    return ;
}

인수가 필요 없을 떄는 함수명()안에 void를 넣는다.

void hello(void)  //void hello()도 가능
{
    printf("Hello world!\n");
}
*/
