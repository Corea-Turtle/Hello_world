#include<stdio.h>
#include<string.h>

main()
{
    char s[] = "I love cat.";
    char c = 'd';
    char* p = NULL;

    printf("문자열 「%s」안에 문자「%c」", s, c);
    p = strchr(s, c);

    if (!p)
        printf("는 없습니다.\n");
    else
        printf("를 찾았습니다.\n");
}


/*
포인터를 이용할 때 그 어드레스에 데이터가 반드시 존재해야한다.

포인터를 초기화하지 않고 사용할 경우 아무것도 없는 장소를 가리켜 에러의 원인이 됨


int a;                int a;
int *p                lnt *p;
p = &a  는 가능        a = *p   는 에러  포인터 p가 어디를 가ㅣ키고 있는지 알 수 없다.



NULL 포인터
프로그램 속에서 포인터가 아무것도 가리키고 있지 않다는 것을 표시함
NULL 포인터에는 어떤 형의 포인터도 저장 할 수 있다.

NULL 포인터의 초기화

int *p = NULL;

포인터 p의 유효성 검사
NULL은 0의 포인터 버전이고 실제 값도 0으로 되어있다. 따라서 논리연산 방식으로 사용가능
p는 유효? if(p !=NULL) 혹은 if(!p)
p는 무효? if(p==NULL) 혹은 if(p)

strchr()

지정된 문자가 문자열 안에 있는지 검사
존재할 경우에는 맨처음으로 그 문자가 나타난 위치의 포인터를 반환
존재하지 않을 경우에는 NULL 반환
ex) attribute 에서 t를 찾으면 attribute[1]값인 t의 포인터를 반환
*/
