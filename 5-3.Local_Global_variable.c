#include<stdio.h>

int y;                  //글로벌 변수 y
int z;                  //글로벌 변수 z

void myfunc(int a)
{
	int z;   // 글로벌 변수와 같은 이름의 로컬변수가 있을경우 로컬변수가 우선
	int x;   // myfunc()의 로컬변수 x
	x=a;      //myfunc()의 로컬변수 x에 a를 대입
	y=a;      //글로벌 변수 y에 a를 대입
	z=a;      //myfunc함수의 로컬변수 z에 a를 대입
}                       //여기까지 로컬변수myfunc z,x의 범위, myfunc함수가 종료되었으므로 로컬변수x,z의 값은 사라지고(초기화) 글로벌 변수 y에 넣은 값만 남는다.

main()
{
int x;  
	x = 10;
	y = 10;
	z = 10;   //여기까지 메인함수의 로컬변수 x의 범위  .. 동일한 이름의 로컬변수끼리는 별개의 변수로 간주
  printf("x, y, z의 값은 %d, %d, %d\n\n",x,y,z); //로컬변수 main x=10 글로벌 변수 y = 10 글로벌변수 z= 10
  myfunc(3); //myfunc함수가 종료되었으므로 x,z에 넣은 값은 사라지고 글로벌 변수 y에 넣은 a(=3)만 남는다.
  printf("x, y, z의 값은 %d, %d, %d\n\n",x,y,z);   //로컬변수 main x = 10 글로벌 변수 y= 3 글로벌 변수 z= 10
  
  //로컬변수 z는 함수가 끝나고 글로벌 변수 z로 대체된다.
