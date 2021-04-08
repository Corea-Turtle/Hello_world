#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct _CALORIE {
    char name[40];
    float value;
} CALORIE; //calorie 구조체 정의

int calregist(CALORIE*, int);
float calcalc(CALORIE*, int); //프로토타입 선언

int main()
{
    CALORIE cal[500] = {                            // 데이터베이스를 main함수 안에 정의 500건까지
      {"쌀류", 150.0f}, {"짜장면", 57.1f},           //숫자뒤에 f를 안붙히면 double인데 float으로 하면 잘린다고 하면서 실행이 안된다.
      {"국수", 133.3f}, {"우동", 100.0f},             //double에서 float으로 잘립니다
      {"소면", 133.3f}, {"식빵", 250.0f}
    };
    int cal_num = 6; //처음 6건은 미리 등록
    int mode = 0;

    printf("칼로리 계산기\n");
    while (1) {
        printf("등록은 1, 계산은 2, 종료는 0을 입력하세요: ");
        scanf_s("%d", &mode);
        if (mode == 0)
            break;
        else if (mode == 1)
            cal_num = calregist(cal, cal_num);
        else if (mode == 2)
            printf("총칼로리 : %6.2f kcal\n\n", calcalc(cal, cal_num));
    }
    return 0;
}

    /********************************************
    calregist() 칼로리 리스트에 등록
    [인수] pcal -- 칼로리 리스트를 가리키는 포인터
           num -- 등록 전 리스트의 요소 수
    [반환값] 등록 후 리스트의 요소 수
    ********************************************/
    int calregist(CALORIE * pcal, int num)
    {
        printf("식품명을 입력하세요 : ");
        scanf("%s", (pcal + num)->name);
        printf("그 식품의 칼로리를 입력하세요 (kcal/100g] : ");
        scanf("%f", &(pcal + num)->value);
        printf("등록되었습니다. \n\n");
        return num + 1;
    }
    /********************************************
    calcalc() 칼로리를 계산한다.
    [인수] pcal -- 칼로리 리스트를 가리키는 포인터
          num -- 리스트의 요소 수
    [반환값] 칼로리 수
    ********************************************/

    float calcalc(CALORIE * pcal, int num)
    {
        char name[40]; //입력된 식품명
        float gram;  //입력된 그램수
        float totalcal = 0.0; //합계 칼로리
        int i;

        printf("-- 식품명 일람 ------------------\n");
        for (i = 0; i <= num; i++)
            printf("%s\t", (pcal + i)->name);
        printf("\n--------------------------------------\n");

        while (1) {
            printf("식품명(end를 입력하면 계산합니다.) : ");
            scanf("%s", name);
            if (strcmp(name, "end") == 0)
                break;
            printf("그램 수: ");
            scanf("%f", &gram);

            for (i = 0; i < num; i++) {
                if (strcmp(name, (pcal + i)->name) == 0) {
                    totalcal += (pcal + i)->value*gram/100.0f;      //f를 안붙히면 double에서 float로 변환하면서 데이터가 손실될 수 있습니다가 
                    break;
                }
            }
        }
        return totalcal;

    }
