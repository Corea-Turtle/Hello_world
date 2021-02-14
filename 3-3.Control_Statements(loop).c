#include<stdio.h>

main()
{
    char a;
    do {
        a = getchar();    //getchar:키보드로부터 입력받은 반각문자 1개를 가져온다.
        printf("%c", a);
      } while(a != 'e');
}

/*while문은 어떤 조건이 성립하는 동안에만 반복을 수행

카운터가 없기 때문에 주로 키보드로 입력받는 행위 같이 반복 횟수를 알 수 없을 때 사용
