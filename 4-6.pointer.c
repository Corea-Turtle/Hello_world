#include<stdio.h>

main()
{
    char x = 4, y;
    char *p = &x;
    y = *p;
    printf("변수 x의 값은 %d입니다.\n", y);
}

/*
포인터의 선언 

포인터의 선언은 여러가지로 표현된다.

char *p; 혹은 char* p;  혹은 char * p;

포인터에 어드레스를 대입할 떄는 &를 붙혀준다.

#include<stdio.h>

main()
{
    char a;
    char* p;
    p = &a;
    printf("변수 a의 어드레스는 %p입니다.\n", p);  <- 포인터를 printf할 떄는 %p를 써준다.
}

포인터가 가리키는 값의 참조

char a = 3;
char *p;        -> 포인터를 선언
p = &a;


char b = *p -> b에 포인터p를 대입
