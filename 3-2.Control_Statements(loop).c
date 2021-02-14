#include<stdio.h>

main()
{
    int i;                          // for문에서는 초기에 카운터값을 설정해줘서 명령을 수행할시 몇번 수행할지를 카운터 값으로 결정한다.
    for (i = 1; i < 4; i++)         //for(카운터의초기화; 반복을 해야하는 조건(조건이 맞으면 반복 틀리면 종료); 카운터 증가(감소)방법) 
        printf("안녕하세요%d.\n", i);
}

/*이중루프
for 안에 for를 넣어서 이중루프를 만들 수 있다. 루프 속에 루프.

#include <stdio.h>

main()
{
    int i, j;
    
    for(j=1; j<=2; j++)
      for(i=1; i<=3; i++)
        printf("j=%d, i=%d, i-j=%d", j, i, i-j);
}

이중 루프시 바깥쪽루프(위에서는 j)를 외측 루프라고 하고 상대적으로 안쪽에 있는 루프를 내측 루프(위에서는 i) 라고 한다.

외측루프의 처리는 내측루프의 처리가 모두 끝난 후에 처리한다.

j = 1 일때 i는 1, 2, 3이라는 루프 처리가 끝나고 j값에 1을 더하는 루프처리를 한다.

이를 이용하여 구구단 표시 코드를 만들 수 있다.

#include<stdio.h>

main()
{
    int i, j;
    
    printf("구구단을 외자, 구구단을 외자\n\n");
  
   
    for (i = 2; i <= 9; i++)
    {
        printf("\n%d단\n\n", i);

        for (j = 1; j < 10; j++)
        {
            printf("%dx%d=%d\n", i, j, i * j);
        }
    }
}


https://www.tutorialspoint.com/cprogramming/c_loops.htm 루프 반복 개념 참고 사이트
*/
