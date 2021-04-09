#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

union _user {
    int usernum; //사용자번호
    char name[10]; //이름
} user;

main()
{
    int flag = 0;
    printf("입력항목은? (0=사용자번호, 1=이름) ");
    scanf("%d", &flag);
    if (flag) {
        printf("name ? ");
        scanf("%s", user.name);
        printf("이름이 %s이군요.\n", user.name);
    }
    else {
        printf("사용자번호 ? ");
        scanf("%d", &(user.usernum));
        printf("사용자 번호는 %d이군요.\n", user.usernum);
    }
}

/*
유니온(공용체)는 멤버중 가장 큰 메모리를 사용하는 멤버의 메모리가 최대 메모리이다.
구조체와 비슷한데 앞에서 union으로 시작한다.
멤버의 값을 대입할때 마지막에 대입된 멤버를 불러오지 않으면 순서가 달라져 정확한 값을 보증할 수 없다.

*/
