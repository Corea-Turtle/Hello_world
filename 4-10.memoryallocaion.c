#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<memory.h>

main(){
  char *buf;
  char a[4] = {20,40,30,10};
  buf = (char *) malloc(sizeof(char)*200); // malloc 뒤 부분은 확보할 메모리의 바이트 수이다 x*ybyte라는 뜻 포인터의 *이 아님 
  if(!buf)
      return;
  memcpy(buf, a, sizeof(char)*4);
  printf("%d %d %d %d\n", buf[0], buf[1], buf[2], buf[3]);
  free(buf);
}

/*

메모리 확보에 관련된 함수 둘 

calloc() -> countiguous allocaion의 줄임말로 동적메모리 저장시 모든 값을 0으로 초기화 해준다.

buf = (char *)calloc(sizeof(char)*19,20); -> sizeof부분이 앞에 들어가도 되고 뒤에 들어가도 되는것인가???
확보된 메모리의 시작주소를 buf로 기억 , sizeof(char)*19,20 이부분은 char(20byte)를 20(19가 0~19 해서 20개)개 초기화해서 확보한다는 뜻

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<memory.h>

main(){
char *buf;
buf = (char*)calloc(sizeof(char)*19,20); 
if(!buf)
    return;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",buf[0],buf[1],buf[2],buf[3],buf[4],buf[5],buf[6],buf[7],buf[8],buf[9],buf[10],buf[11],buf[12],buf[13],buf[14],buf[15],buf[16],buf[17],buf[18],buf[19]);
free(buf);
}


realloc() 확보된 메모리를 다른 사이즈로 다시 할당

buf = (char*)reallac(buf, sizeof(char)*15);

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<memory.h>

main() {
    char* buf;
    buf = (char*)calloc(20,sizeof(char)*20);
    if (!buf)
        return;
    buf = (char*)realloc(buf, sizeof(char) * 15); //< 이부분에서 보통은 realloc은 메모리가 부족해서 메모리를 늘려서 재할당 하는건데
    if (!buf)
        return;
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7], buf[8], buf[9], buf[10], buf[11], buf[12], buf[13], buf[14]);
    free(buf);
}



https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/ 말록칼록리얼록 설명
https://www.geeksforgeeks.org/difference-between-malloc-and-calloc-with-examples/  malloc calloc 비교
https://www.weezzle.net/1652   realloc()자세한 설명
https://thinkpro.tistory.com/67  댕글링(dangling pointer)설명


메모리 조작 함수 - 이 함수들을 쓰기 위해서는 #include<memory.h>를 써야한다

memset() : 메모리 내용을 모두 같은 값으로 설정

memset( buf, 0, 5);
메모리 영역 시작 주소 buf , 설정값 0, 값을 설정할 메모리의 바이트 수 5

memcpy() : 메모리의 내용을 복사

memcpy( dst, src, 5);
복사될 곳의 메모리 영역의 시작주소 dst, 복사할 원본 메모리 영역의 시작 주소 src, 복사할 메모리의 바이트 수 5

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<memory.h>

main()

{
	char* buf;
	buf = (char*)malloc(sizeof(char) * 10);
	buf[3] = 2;													// NULL포인터 buf를 역참조하고 있다  여기가 11번쨰 줄 입니다.
	printf("%d(1) %d(2) %d(3)\n\n", buf[1], buf[2], buf[3]);
	memset(buf, 1, 5);
	printf("%d(1) %d(2) %d(3)\n\n", buf[1], buf[2], buf[3]); //여기까지는 프린트 되는데 아래부터 입력하면 안돼여..
	char* dst;
	dst = (char*)calloc(sizeof(char) * 5, 20); // dst를 정의해주어서 오류가 수정되었습니다.
	memcpy(dst, buf, 5);										//buf가 0일수 있습니다. 이경우에 memcpy함수의 사양과 일치하지 않을 수 있습니다 11번째 줄을 참조하십시오
	printf("%d(1) %d(2) %d(3)\n\n", dst[1], dst[2], dst[3]);
}

dst가 NULL포인터였기 때문에 buf의 값을 가져오지 못하였다. dst를 설정해주니까 해결되었다.

*/
