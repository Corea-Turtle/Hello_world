#include<stdio.h>
main()
{
	char s[30];
	fgets(s, 29, stdin);
	fputs(s, stdout);
	fputs("error!\n", stdout);

}

/*
stdin - 키보드로부터 입력을 받는 파일 포인터
stdout - 표준 출력 장치에 출력할 떄의 창구가 되는 파일 포인터
stderr - 표준 에러 출력장치에 출력할 떄의 창구가 되는 파일 포인터
printf("%d", a); == fprintf(stdout, "%d", a);
*/

/*
키보드를 통ㅇ한 데이터 입력

1. scanf() - 키보드에서 입력된 데이터를 지정한 서식으로 변환하여 변수나 배열에 저장

int a;
scanf("%d", &a);
입력데이터의 서식 지정, 입력데이터의 주소값(&)

문자의 경우
char s[10]
scanf("%s", s)
배열명은 배열의 첫 번쨰 요소에 대한 포인터가 되기 떄문에 &가 필요없다.

여러 요소를 입력받을 수 있으니 입력 문자를 스페이스로 구분하기 떄문에 스페이스를 포함하는 문자열은 제대로 읽어들일 수 없다.
또한 사용자가 지정한 서식에 맞춰 입력한다는 보장이 없기 떄문에 권장 x

2. gets() - 키보드에서 입력된 한 행의 문자열을 문자 배열에 저장. 스페이스도 읽기 가능

char s[30]
gets(s);

3.getchar() - 키보드를 통해 입력된 한 문자만을 변수에 저장

int c;
c = getchar(); // getchar는 반환값이 무조건 int이다.

#include<stdio.h>

main()
{
  int a, b = 7;  //이렇게 할 시 a가 초기화가 안돼서 오류가 두개 난다. (10,9): warning C4013: 'gets'이(가) 정의되지 않았습니다. extern은 int형을 반환하는 것으로 간주합니다.
  char s[40];             //error C4700: 초기화되지 않은 'a' 지역 변수를 사용했습니다. a=0, b=7;로 초기화 해주면 해결
  printf("이름을 입력해 주세요.\n");
  gets(s);
  printf("숫자 맞히기 퀴즈! 0부터 9사이의 숫자를 입력하세요.\n");
    while(a !=b){
    scanf("%d", &a);
    if(a==b-1)||(a==b+1))
      printf("아깝네요.\n");
    else if(a>b+1)
      printf("좀 더 작은 수 입니다.\n");
    else if(a<b-1)
      printf("좀 더 큰 수 입니다.\n");
      }
      printf("정답입니다. %s님, 축하합니다!\n",s);
}

*/
