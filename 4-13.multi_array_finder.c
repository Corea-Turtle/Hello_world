#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int a[4][3] = { {1,3,5},
					{2,4,6},
					{3,6,9},
					{123,234,345}
	};
	int i, in, * pt;

	scanf("%d", &in);

	pt = a[in - 1]; //포인터 pt에 a의[in-1] 번지를 직접 지정

	for (i = 0; i < 3; i++)
		printf("%d\t", *(pt + i)); //원소들 출력
}
