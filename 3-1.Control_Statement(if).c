#include <stdio.h>

main() 
{
    int a = 6;

    if (a % 2 == 0)
        printf("%d는 우수입니다.\n\n", a);
    else
        printf("%d는 기수입니다.\n\n", a);

    int s = 65;

    printf("당신의 점수는 %d점입니다.\n\n", s);

    if (s < 70)
    {
        printf("평균까지 앞으로 %d점입니다.\n", 70 - s);
        printf("힘내세요!\n");
    }
    else
    {
        printf("잘하셨습니다.");
    }
}

/*if만 있을 경우 조건이 true(맞는다면)면 값을 출력, false(틀리다면)면 아무것도 하지 않음
  if와 else를 함께 사용할 경우 조건이 true면 if값,false면 else값을 출력한다.
 
 만약 if문 뒤에 두가지 이상의 처리를 수행하고 싶다면 if(조건식)뒤에 {중괄호}로 블록을 만들어주어서 복수의 처리를  하나의 문으로 간주하게 한다.
 */
 
 /*
 ※연속된 if문
 
 if문을 여러개 쓰고 싶을 떄는 if, else if(여러개), else 3가지 표현을 통해 여러가지 조건 중 하나가 맞음을 표현할 수 있다.
 
#include<stdio.h>

main() {
    char c = '#';

    printf("%c은 ", c);

    if ('0' <= c && c <= '9')
        printf("숫자입니다.\n");
    else if ('a' <= c && c <= 'z')
        printf("소문자입니다.\n");
    else if ('A' <= c && c <= 'Z')
        printf("대문자입니다.\n");
    else
        printf("기호입니다.\n");
}

 
 
 ※중첩된 if문
 if문을 비롯하여 제어문은 처리 중간에 다른 제어문을 포함할 수 있다.  다른 제어문 속에 들어가 있는것 = 네스트

#include<stdio.h>

main() {
    int a = 90;

    if (a > 80) {                                       //if(조건1)  조건1이 성립할 경우 if문을 네스트 한다.라는 표현을 씀                      
        if (a == 100)                                  //if(조건1&조건2) -> 만접입니다 처리
            printf("만점입니다.\n");
        else                                       //if(조건1)만 성립할경우 조금만 더 노력하세요 처리
            printf("조금만 더 노력하세요.\n");
    }
    else
        printf("힘내세요.\n");                      //조건 1이 성립 안할 경우 힘내세요 처리
}
 */
 
 
