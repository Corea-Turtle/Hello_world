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
 
 만약 if문 뒤에 두가지 이상의 처리를 수행하고 싶다면 if(조건식)뒤에 {중괄호}로 블록을 만들어주어서 복수의 처리를  하나의 문의로 간주하게 한다.
 
 */
 
 
