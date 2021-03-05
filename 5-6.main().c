#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i;
  
    if(argc <= 1)
         return 1; //인수를 지정하지 않았을 떄 에러가 나지 않게 하는 반환문
    if(strcmp(argv[1], "enum") == 0)
          for(i = 0; i< argc; i++)
              printf("argv[%d] : %s\n",i, argv[i]);
    else if(strcmp(argv[1], "count") == 0)
              pirntf("커맨드라인 인수의 수 : %d\n", argc-1);
}


/*
이 코드는 디버그를 통해 실행하는게 아니라 프로젝트 빌드 후 cmd창을 실행시켜서 exe파일을 실행하는 식으로 해야 한다.
vs에서 빌드(f7)를 하면 exe파일이 프로젝트폴더 안 Debug폴더에 컴파일 되는데 그걸 명령형 프로포트에서 실행시키는 것이다.

폴더에 들어가서
cmdparam.exe enum hi man (엔터)를 쳤을 경우 enum이 들어갔기 때문에 (strcmp로 비교해서 같을경우)
argv[0]부터 출력하는 if문이 출력되고 enum대신 count를 입력할 경우에 argv 포인터 배열이 몇개인지 출력된다
이름을 틀리게 쓸 경우 아무것도 출력되지 않으니 주의하자.(인수를 지정하지 않았다고 인식함)
 
*/
