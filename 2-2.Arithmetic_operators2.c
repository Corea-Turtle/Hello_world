#include <stdio.h>

main()
{
    int a = 1;
    printf("처음 값은 %d이었습니다.\n", a);

    a++;
    printf("1증가해서 %d가 되었습니다.\n", a);

    a--;
    printf("1감소해서 %d가 되었습니다.\n\n", a);


    int x = 1;
    x = ++a;
        printf("a의 값은 %d\n", a);       //2
        printf("x읙 값은 %d\n\n", x); // 결과 2
    x = ++a; 
        printf("a의 값은 %d\n", a);     //3
        printf("x의 값은 %d\n\n", x); // 결과 3
    int y = 1, b = 1;
    y = b++; 
        printf("y의 값은 %d\n\n", y); // 결과 1
        printf("b의 값은 %d\n", b);    //2
       
    y = b++; 
        printf("y의 값은 %d\n", y); // 결과 2
        printf("b의 값은 %d\n", b);    //3
}


/*
증감 연산자(Increment and decrement operators)는 변수의 값을 1증가시키거나 1감소시키는 경우에 사용용
이.

연산자(표기)
++ 
--

전치(++a)와 후치(a++)가 있다. 차이점은 연산 수행 시점이다.
전치의 경우 변수의 참조보다 연산을 먼저(연산 후 변수에 대입), 후치는 변수의 참조 후에 연산(대입 먼저 후 연산)
*/

