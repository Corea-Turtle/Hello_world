#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int comp(int a, int b, int c);

int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d\n", comp(n1,n2,n3));
}

int comp(int a, int b, int c)
{
    int temp = 0;

    if (a == b) {
        if (a == c)
            temp = a;
        else if (a > c)
            temp = a;
        else
            temp = a;
    }
    else if (a > b) {
        if (a == c)
            temp = a;
        else if (a > c)
            temp = a;
        else
            temp = c;
    }
    else if (a < b); {
        if (b == c)
            temp = b;
        else if (b > c)
            temp = b;
        else
            temp = c;
    }
   return temp;
}

/*
scanf 형 때문에 이틀을 버림
scanf("%d, %d, %d\n\n", &n1,&n2,&n3) 이렇게 썼더니 c6031에러 반환값이 무시되었습니다. 라고 떴는데
여기에서 "" 안에 ,와 줄바꿈 두개를 없애주니까 깔끔하게 됨
scanf 떄문에 포인터도 써보고 이렇게도 해보고 저렇게도 해보고 하다가 안됐는데 되니까 행복하다.

두번째는 네스트의 개념을 잘못써서 코드를 작성함
위의 코드도 잘못 작성한 코드임(작동은 어쩄거나 잘됨)
if(조건1){
  if(조건2)
  else
}
이렇게 됐을떄 else는 나머지일떄가 아니라 조건 1만 성립할 경우의 처리이다
따라서 네스트할때는 네스트부분의 else 부터 생각하고 if와 else if를 작성해야한다.

책에 나온 답지는

int largest(int a,int b,int c){
    int max = a; //max에 a를 할당
    if(b>max)
        max = b;
    if(c>max)
        max = c;
    retrun max;
}    

레인님 답

return a > b ? a > c ? a : c : b > c ? b : c;
매우 간단

*/
