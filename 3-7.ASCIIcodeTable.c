#include<stdio.h>

main()
{
    int x, y; //루프 카운터
    char c;     //캐릭터 번호
    
    for(x = 2; x < 8; x++)
        printf("16: 10:c | ");
    printf("\n");
    for(x =2; x < 8; x++)
        printf("---------+-");
    printf("\n");
    
    for(y= 0; y< 16; y++)
    {
        for(x = 2; x< 8; x++)
        {
            c = x * 16 + y;
            printf("%2x:%3d:%c | ", c, c, c);
        }
    }
}

/*0~31번은 화면에 표시되지 않는 문자이기 떄문에 32~127번까지 아스키코드를 표시하는 코드*/
