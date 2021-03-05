#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[])
{
    char usage[] = "usage: trash <-d> filename\n";
    int ret = 0; //함수의 반환값
    char newfilename[256] = "";

    //파라미터가 없을 때 1을 반환
    if (argc <= 1) {
        printf(usage);
        return 1;
    }
    //-d를 지정했을때 수행하는 동작
    else if (strcmp(argv[1], "-d") == 0) {
        if (argc <= 2) {
            printf(usage);
            return 2;
        }
        ret = remove(argv[2]);      //remove() 인수로 지정한 파일을 삭제한다.
        if (ret == 0)
            printf("파일을 삭제했습니다.\n");
        else
            printf("파일을 삭제할 수 없습니다.\n");
    }
    //-d 지정하지 않았을 떄 수행하는 동작
    else {
        sprintf(newfilename, "%s.bak", argv[1]);
        ret = rename(argv[1], newfilename);  //rename() 제 1인수에서 지정한 파일명을 제 2인수에서 지정한 이름으로 변경한다.
        if (ret == 0)
            printf("파일명의 끝에 .bak를 추가합니다.\n");
        else
            printf("파일명을 바꿀 수 없습니다.\n");
    }
}
  
/*
CRT_SECURE_NO_WARNINGS 뒤에 . 을 붙히면 컴파일러 error C2008이 뜬다. .을 삭제해주면 완료
이번에도 cmd(명령형프롬포트) 창을 켜서 trash.exe 파일이 있는 폴더로 들어가 준 후에 trash파일을 실행해준다.
파일을 삭제하는 커멘드를 실행하면 복원할 수 없으므로 .bak(백업 파일)을 만들어주는 프로그램이다.
-d를 치면 완전히 삭제된다.


trash a.txt라고  쳤을때 같은 폴더 안에 a.txt가 있다면 a.txt.bak가 생성
trash -d b.txt라고 쳤을떄 같은 폴더 안에 b.txt가 있다면 b.txt가 완전히 삭제된다

*/

  
