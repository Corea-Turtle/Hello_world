#include<stdio.h>

main()
{
    int a, b = 1;
    for (a = 0; a < 9; a++)  //a가 9까지 반복이지만 break가 a+b>=7에 있으므로  a+b는 6까지만 표시되고 루프종료
    {
        if (a + b == 3)    //continue는 그 조건의 처리는 중단하고 다음 처리부터 루프를 실행
            continue;
        if (a + b >= 7)
            break;          //break는 그 조건이 되면 루프 처리를 종료(그 조건은 표시되지 않음)
        printf("%d+%d=%d\n", a, b, a + b);
    }
}

//프로그램 실행시 break를 발견하면 가장 가까운 블록의 끝으로 점프
