#include<stdio.h>
#include<string.h>

main()
{
	char s1[] = "cat", s2[] = "dog";
	char s[20];
	sprintf_s(s,"I love %s and %s", s1, s2);
	printf("%s는 %d글자\n", s, strlen(s));
}

/* warning C4047: '함수': 'const size_t'의 간접 참조 수준이 'char [17]'과(와) 다릅니다.
 warning C4024: 'sprintf_s': 형식 및 실제 매개 변수 2의 형식이 서로 다릅니다.
 
 sprintf_s(s,사이즈,형식)을 써야되는데 처음에 두번쨰에 사이즈를 안쓰고 형식을 바로써버려서 위의 에러가 떴다
 

올바른 코드

#include<stdio.h>
#include<string.h>

main()
{
	char s1[] = "cat", s2[] = "dog";
	char s[20];
	sprintf_s(s,20,"I love %s and %s", s1, s2);
	printf("%s는 %d글자\n", s, strlen(s));
}

혹은

#define _CRT_SECURE_NO_WARNINGS       <--sprintf를 쓰고 싶다면 이 코드를 삽입해주자
#include<stdio.h>
#include<string.h>


main()
{
	char s1[] = "cat", s2[] = "dog";
	char s[20];
	sprintf(s, "I love %s and %s", s1, s2);
	printf("%s는 %d글자\n", s, strlen(s));
}



문자열 함수

strlen() : 문자열의 길이를 얻는다

char s[] = "ddddd"
int l;
l = strlen(s);

strcpy() : 문자열을 복사한다.

char s[4];
strcpy(s, "ddr");

strcat() : 문자열을 결합한다.

char a[6] ="abc";
char b[] = "de";
strcat(a,b);

strcmp() : 문자열을 비교한다.

char a[] = "ABC"
cahr b[] = "abc"
sint c = strcmp(a,b);

결과 : -1           대문자가 소문자보다 사전적으로 뒤에 있다.

#include<stdio.h>
#include<string.h>

main()
{
	char s1[] = "cat", s2[] = "dog";
	int c = strcmp(s1, s1);

	printf("%d", c);
}

 c == 0 a와 b는 같다.
 c > 0 a가 b보다 사전적으로 뒤쪽이다.
 c < 0 a가 b보다 사전적으로 앞쪽이다.


문자열 변환에 관련된 함수

1. sprintf() : 수치를 문자열로 변환한다. 따라서 printf()시 수치이지만 %s를 통해 출력해야 에러가 안난다.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


main()
{
	char s[40];
	
	sprintf(s,"%f",27.2);
	printf("%s",s);
}

2.atoi() 문자열을 수치로 변환


#include<stdio.h>
#include<string.h>
#include<stdlib.h>  <--- atoi()를 쓰기 위해서 필요한 헤더



main()
{
	char s[] = "340";
	int n = atoi(s);

	printf("%d는 숫자\n", n);
}


/*warning C4013 : 'aioi'이(가) 정의되지 않았습니다.extern은 int형을 반환하는 것으로 간주합니다.
1 > Helloworld.obj : error LNK2019 : _aioi_main 함수에서 참조되는 확인할 수 없는 외부 기호
fatal error LNK1120: 1개의 확인할 수 없는 외부 참조입니다.*/


 */
