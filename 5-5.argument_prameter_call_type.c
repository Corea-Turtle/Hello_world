#include<stdio.h>

void swapbyval(int, int);
void swapbyref(int*, int*);

main()
{
	int a = 2, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swapbyval(a, b);                         // 값의 전달
	printf("a = %d, b = %d\n", a, b);
	swapbyref(&a, &b);                       //참조 전달
	printf("a = %d, b = %d\n", a, b);
}

void swapbyval(int x, int y)  // int x, int y는 가인수이기 때문에 실인수를 대체할 수 없다. 따라서 main 함수에서 a, b가 실인수 2 7로 선언되었을때
{								// 밑에 swapbyval 함수 옆에 a, b는 가인수이기 때문에 위치가 바뀌지 않는다.
	int temp;
	temp = x;
	x = y;
	y = temp;    //x와 y를 바꿔 넣는 처리
}

void swapbyref(int* x, int* y)  // 실인수나 가인수 모두 같은 주소값을 사용하기 떄문에 같은 것을 쓰면 함수 안에서 호출한 쪽의 값을 변경할 수 있다.
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;  // *x와 *y를 바꿔넣는 처리 
  
  /*
  호출하는 부분은 실인수    함수(a,b); 에서 a,b는 실인수라고 한다.
  함수의 정의              함수(int a, int b){  } 에서 int a, int b는 가인수라고 한다.
  
  값의 전달은 실인 수의 값을 가인수에 넣는 표준적인 방법이다.
  
  실인수와 가인수는 모두 별개의 변수로 인식되므로, 함수 안에서 가인수의 값을 변경해도 실인수의 값에는 영향을 주지 않는다.
  
  첨조 전달(포인터)
  
  실인수의 주소를 가인수에 전달한다.
  
  실인수도 가인수도 같은 주소 값을 참조하기 떄문에, 함수 안에서 호출한 쪽의 값을 변강 가능
  
  참조 : https://www.tutorialspoint.com/cprogramming/c_functions.htm
        https://csdaniel.tistory.com/13 간단정리
  *?
