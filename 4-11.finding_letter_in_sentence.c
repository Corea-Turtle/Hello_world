#include<stdio.h>

main()
{
    char s[] = "l love cats and dogs.";//찾을 대상이 되는 문자열
    char c = 'a';                       //찾는 대상
    char* p = s;                        //포인터 p는 배열s의 주소를 가리킴
    int n = 0;                          //n은 문장안에 들어간 찾는 대상의 개수 표현

    printf("\"%s\"  안에서 \'%c'를 찾습니다.\n\n", s, c);         
    while (*p != '\0') {                                       //문장 배열의 끝은 '\0'이므로 '\0'이 나올때까지 아래를 반복
        if (*p == c) {                                         //만약 포인터p가 찾는 글자 'a'라면              
            printf("%d번째에서 발견되었습니다. \n\n", p-s+1);    // p-s는 0이고 배열은 0부터 시작이므로 위치를 나타낼때 +!을 해줘야함
            n++;                                               //발견시 n++
        }
        p++;                                                   //배열 s의 0번째부터 p를 1씩 더해줌
    }
    if (n == 0)
        printf("한 개도 발견되지 않았습니다. \n");
    else
        printf("모두 %d개 발견되었습니다. \n", n);
}

/*
 10번쨰 줄 이스케이프 시퀸스 참조 https://ko.wikipedia.org/wiki/%EC%9D%B4%EC%8A%A4%EC%BC%80%EC%9D%B4%ED%94%84_%EC%8B%9C%ED%80%80%EC%8A%A4#:~:text=%EC%9D%B4%EC%8A%A4%EC%BC%80%EC%9D%B4%ED%94%84%20%EC%8B%9C%ED%80%80%EC%8A%A4(escape%20sequence)%20%EB%98%90%EB%8A%94,%EC%A7%80%EB%8B%88%EA%B3%A0%20%EC%9E%88%EB%8A%94%20%ED%8A%B9%EC%88%98%20%EB%AC%B8%EC%9E%90%EC%9D%B4%EB%8B%A4.


while 반복문을 이렇게 대체할 수 있다.
이떄 strchr()함수를 쓰기 위해 헤더에 #include<string.h>를 추가해야한다.
while(1){
    p = strchr(p, c)
    if(!p)
       break;
    printf("%d번쨰에서 발견되었습니다.\n\n",p-s+1);
    n++;
    p++; //찾아낸 문자의 다음위치 부터 검색(s의 어드레스 +1)
}

*/
