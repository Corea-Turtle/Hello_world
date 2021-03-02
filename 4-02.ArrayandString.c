#include<stdio.h>

main()
{
    int i = 0;
    char a[] = "NET";
    char b[4];

    while (a[i] != '\0')                    //<- NULL 문자 '\0'이 오면 반복을 종료
    {
        b[i] = a[2 - i];
        i++;
    }
    b[3] = '\0';                                           //<-문자열의 끝은 반드시 '\0'이다.
        printf("%s는 거꾸로 읽으면 %s입니다.\n", a, b);
}


/*
문자열은 복수 문자의 집합이므로
담아 두기 위해서는 문자형 배열을 사용해야 한다.
배열 요소 하나에 하나의 문자가 들어간다.

※문자열의 표현
char s[] = "ABC"     <- 문자 끝에는 '\0'가 보이지 않게 들어있다.

초기화 방법에 따라 이렇게도 표현 가능하다.

char s[4] = {'A','B','C','\0'}; 널(null)문자는 문자열의 끝을 알리는 문자이다.

배열의 구조를 이용하여 특정문자만 바꿀 수도 있다.

char s[4] = "Cat";
s[0] = 'H';         <- 이미 데이터가 들어 있는 부분에 덮어써야한다.