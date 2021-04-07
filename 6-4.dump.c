#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(int argc, char* argv[])
{
    FILE* fp;
    unsigned char buf[16]; /*읽기 버퍼*/
    unsigned long addr = 0;
    int readnum, i;

    if (argc <= 1) {
        printf("usage: dump filename\n");
        return 1;
    }
    if (!(fp = fopen(argv[1], "rb"))) {
        printf("파일을 열지 못했습니다.\n");
        return 1;
    }
    while (1) {
        printf("%08X ", addr);
        readnum = fread(buf, 1, 16, fp); //바이너리 데이터 표시
        for (i = 0; i < readnum; i++) { //readnum은 실제로 읽어 들인 바이트 수
            if (i == 8)
                printf(" ");
            printf("02X ", buf[i]);
        }
        for (i = readnum; i < 16; i++) {
            if (i == 8)
                printf(" ");
            printf("  ");
        }
        printf("  ");
        for (i = 0; i < readnum; i++)
            printf("%c", (32 <= buf[i] && buf[i] <= 126) ? buf[i] : '.'); //제어코드는 "."으로 바꿈
        printf("\n");
        addr += 16;
        if (feof(fp))
            break;
    }
    fclose(fp);
    return 0;
  
/*비쥬얼 스튜디오의 경우 프로젝트를 빌드 한 후 cmd창을 열고 프로젝트 Debug 폴더에 들어가 데이터 파일을 Debug폴더에 넣은뒤 "프로젝트명 .dat" 실행해야한다. 
ex)FILE bintest.dat*/
