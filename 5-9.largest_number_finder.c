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

첨언 안됐던 이유

일단 "%d, %d, %d\n\n" 상태에서 1 3 2를 입력했다면 처음에 %d와 1이 매칭돼서 &a 주소에 1 값을 넣어요
그 다음을 봤더니 버퍼엔 , 라는 문자를 찾는데 그런게 없죠. 그러면 여기서 scanf는 1을 반환하면서 그대로 종료됩니다
(처음에 첫번째 입력한 값만 나왔던 이유)
b와 c는 초기화를 안 하셨으니 쓰레기값이 들어가 있는 상태구요. 이걸 그대로 함수로 넘기면 쓰레기값을 사용하니까 UB(undefined behavior)가 됩니다.

https://www.secmem.org/blog/2020/01/17/c-c++-and-ub/  UB참조

두번쨰 \n\n값을 넣고 출력하려면?

scanf의 포맷 스트링에 \n를 넣으면 버퍼의 앞자리에 들어있는 화이트스페이스와 매칭을 시도하는데요.
엔터는 화이트스페이스니까 계속해서 매칭됩니다. \n를 2번 썼으니까 2번만 매칭되어야 하는거 아니냐? -> 아닙니다
\n 하나는 화이트스페이스 뭉탱이랑 계속해서 매칭됩니다. \n 하나만 써도 똑같은 동작을 하겠구요.
\n 대신 ' ' 공백을 써도 똑같습니다. 이때는 윈도우 콘솔창이면 ctrl z를 눌러서 EOF(End of File)를 넘겨줘야합니다.
그러면 scanf는 입력의 끝으로 인식하고 scanf가 종료됩니다.
처음에 " %c" 이런식으로 띄어쓰기를 한칸 해주면 White-space 무시한다고 한다.


세번째는 네스트의 개념을 잘못써서 코드를 작성함
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
