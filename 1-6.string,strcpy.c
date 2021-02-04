#define _CRT_SECURE_NO_WARNINGS//strcpy함수를 쓰면 컴파일 시 C4996 경고가 발생하기 때문에 이와 같은 상숫값을 설정해줘서 오류메세지를 피한다.
#include <stdio.h>
#include <string.h>//strcpy를 쓰기 위해 필요

main()
{
char t[10] = "Hello";
printf("%s\n",t);
strcpy(t,"Good bye");
printf("%s\n",t);
}
