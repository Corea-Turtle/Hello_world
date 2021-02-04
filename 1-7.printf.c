#include<stdio.h>//printf()의 서식을 여러가지로 활용해보는 페이지

main()
{
	printf("%4d\n", 24); //공백포함 4글자
	printf("%04d\n\n", 24); //0사용 4글자
	printf("%6.1f\n", 125.25);//6자리 소수는 1자리만 표시
	printf("%08.3f\n\n", 125.25);
	char name[] = "Dooly";
		printf("%10s\n\n", name);//둘리 앞에 보이지 않는 0이 4개 붙는 느낌

	printf("  %8s %8s\n", "상품A", "상품B");
	printf("수량 %08d %08d\n", 16, 246);
	printf("중량 %8.4f %8.4f\n", 76.3, 556.1);
		printf("%d%c", 20, 10);
	printf("%d\bA\n", 20);
	printf("%d\t%d\n", 20, 30);
}

/*특수문자
코드  이스케이프시퀸스  작용
0       \0            널(null)문자
8       \b            백스페이스(backspace:BS)
9       \t            탭(tap)
10      \n            행바꿈(Line Feed: LF)
13      \r            복귀(Carriage Return :CR)

표기법 표시
\\      \
\'      '
\"      "
*/
