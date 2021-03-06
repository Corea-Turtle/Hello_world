
#include <stdio.h>

main() {

	int l, n, m, o;
	l = sizeof(unsigned short);
	n = sizeof(short);
	m = sizeof(n);
	o = sizeof(double);

	printf("%d는 unsigned short의 크기입니다.\n", l);
	printf("%d는 short의 크기입니다.\n", n);
	printf("%d는 n형의 크기입니다.\n", m); 
	printf("%d는 double의 크기입니다.\n\n", o);


	char c = 1;
	char s[10] = "Helllo";

	printf("long형 = %d바이트\n", sizeof(long));
	printf("char형 변수 = %d바이트\n", sizeof(c));
	printf("문자열 변수 = %d바이트\n", sizeof(s));
}

/*F5로 디버그 할 시 0x00511DCC에(Helloworld.exe의) 처리되지 않은 예외가 있습니다. 0xC0000005: 0x00511DCC 위치를 실행하는 동안 액세스 위반이 발생했습니다..
오류가 뜨면서 stdio.h 파일이 열린다. 이때 cntl + F5로 디버그를 실행해주면 해결.

바이트의 단위는 2의 10승(1024)마다 단위가 올라간다.
bit = 0(off) 또는 1(on), 8 비트가 모여서 1byte, KB(1024byte), MB(1024KB), GB(1024MB), TB(1024GB)

1byte = b8 b7 b6 b5 b4 b3 b2 b1 = 2의 8승 = 256가지 정보 표시 가능
b8은 최상위비트        b1은 최하위 비트

※sizeof()연산자의 표시 단위는 byte이다.
*/
