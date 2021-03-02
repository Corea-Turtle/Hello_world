/*함수의 정의와 호출에는
반환값의 형에 맞게 변수를 준비하고 결과를 대입한다.

ex)
정의
int addnum(int a, int b)
{
}

호출
int n ;
n = addnum(1,2);
*/

#include<stdio.h>

int addnum(int a, int b)
{
    int x;
    x = a + b;
    return x;
}

main()
{
    int n;
    n = addnum(3, 5);
    printf("반환 값은 %d", n);
}
