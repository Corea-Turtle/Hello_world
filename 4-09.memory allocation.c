#include<stdio.h>
#include<memory.h>
#include<malloc.h>
#include<stdlib.h>

main()
{
short *buf;                                          // <-확보된 메모리의 시작주소를 넣을 포인터를 선언
buf= (short *) malloc(sizeof(short)*2000);            // malloc() 함수의 반환 값에는 혀잉 없기 때문에(void *형), buf와 동일한 형으로 캐스트(short *)
              //malloc()함수 - 인수로 지정한 바이트 수의 메모리(2000)를 확보하고, 그 시작 주소를 반환한다.(확보할 수 없을 경우에는NULL을 반환)
              //2000은 배열 한칸이 2000byte라는 메모리를 가질 수 있다는 말이다. 초과될 경우에는 HEAP CORRUPTION 에러가 떴다.
buf[2] = 40;

  int i = 2;
  printf("buf[%d]는 %d\n\n",i,*(buf+i));
  
  free(buf);
  printf("메모리 해제후 buf[%d]는 %d\n",i,*(buf+i));
}

/*
malloc이 메모리 확보만 하고 초기화해주지 않기 떄문에
메모리 이용한 값(buf[2]) 외의 값을 출력하면 -12851이 나오고 메모리 해제 후에는 -8739가 나오는데 이유는 모른다.
초기화가 안되고 랜덤이 나오는 것인가.

HEAP memory corruption 참조
http://blog.naver.com/PostView.nhn?blogId=aepkoreanet&logNo=221644359105
*/
