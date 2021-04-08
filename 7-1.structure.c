#include<stdio.h>

struct _point2d{ //템플릿 선언 _point2d는 구조체템플릿 이름
  double x;   //멤버1
  double y;  // 멤버2
}pt; //구조체 변수명

main()
{
  pt.x = 30.0;
  pt.y = 23.6;
  printf("pt = (%4.1f, %4.1f)\n", pt.x, pt.y);
}


/*
구조체는 먼저 템플릿을 선언하고 멤버에 변수를 불러올 떄는 구조체 변수명.멤버이름으로 초기화 한다.
*/

/*
구조체와 포인터

템플릿 선언 후 포인터를 선언한다.
struct data{
  int no;
  char name[10];
  int age;
  };
  struct data *sp;
  struct data list1
  
  포인터의 구조체 주소값 대입
  struct list1;
  
  sp = &list1;
  
  포인터를 사용한 구조체의 참조
  -> 로 표시
*/
#include<stdio.h>

struct _colorpoint2d {
	double x, y;
	int colorid;
} cpt;
struct _colorpoint2d* ppt = &cpt;

main() {
	ppt->x = 2.4;
	ppt->y = 3.2;
	ppt->colorid = 1;
	printf("(%3.1f, %3.1f) color = %d\n",
		ppt->x, ppt->y, ppt->colorid);
}
/*
구조체와 배열
배열 하나에 구조체 템플릿 1개를 담는다.
*/
#include<stdio.h>

struct data {
	int no;
	char name[10];
	int age;
};
struct data list1[10] = { //구조체 배열의 선언
	{1, "가", 12},
	{2, "나", 23},
	{3, "다", 34},
	{4, "다", 34},
	{5, "다", 34},
	{6, "다", 34},
	{7, "다", 34},
	{8, "다", 34},
	{9, "다", 34},
	{10, "다", 34}
};              //구조체 배열의 초기화


main() {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d %s %d\n", list1[i].no, list1[i].name, list1[i].age);
	printf("\n");	//배열 []를 사용하여 출력

	struct data* sp = list1;
	for (i = 0; i < 10; i++)
		printf("%d %s %d\n", (*(sp + i)).no, (*(sp + i)).name, (*(sp + i)).age);
	printf("\n");	//포인터 sp를 사용하여 출력

	struct data* spp;
	for (spp = list1; spp != list1 + 10; spp++)
		printf("%d %s %d\n", spp->no, spp->name, spp->age);
	//포인터 spp 와 ->참조 연산자를 사용

// 여기까지 구조체 배열의 참조하는 방법 3가지.
}

/*
형의 재정의 typedef
typedef unsigned char u_char
u)char c; // unsigned char c; 와 같은 의미

포인터의 재정의
typedef unsigned int *pt_int;
pt_int a; // unsigned int *a와 같은 의미

구조체명의 변경
typedef를 사용하면 구조체의 템플릿에도 임의이 이름을 정의가 가능
구조체명

typedef struct data{ // 아래에서 DATA라는 새이름을 붙이고 있기 떄문에 생략해도 재이용하는데 지장 없음.
  int no;
  char name[10];
  int age;
  }DATA; //DATA는 새이름
  DATA list1;

이것과

struct data{
  int no;
  char[10];
  int age;
  };
 sturct data list1; //여기서는 구조체명 앞에 struct가 필요함
 은 같은 결과가 된다.
 
 #include<stdio.h>
 
 typedef struct _PROFILE{
  char name[40];
  int age;
  }PROFILE;
  
  main()
  {
    PROFILE prof[2] = {
      {"juhyun", 20},
      {"jiwon", 23}
      };
      int 1;
      for(i=0; i<2; i++)
        printf("%s님은 %d살입니다.\n",prof[i].name, prof[i].age);
  }
*/

