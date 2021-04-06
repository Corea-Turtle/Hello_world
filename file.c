/*파일 읽기*/
#include<stdio.h>

main()
{
FILE *fp;
  char s[256];
  int i = 1;
  fp = fopen("abc.txt", "r");
  if ( fp == NULL)
    return;
  while(1) // while(!eof((fp))
  {
  fgets(s,255,fp);
    if(feof(fp))
      break;
    printf("%04d: %s", i, s);
    i++
  }
}

//마지막줄이 출력이 안되다가 파일에 마지막줄을 추가했다가 삭제했더니 잘됐다.

/*파일로 출력하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


main()
{
    FILE* fp;
    int a = 100, b = 5, c = 40;
    int x =1, y = 10, z = 100;
    char delm[] = "----====----\n";

    fp = fopen("mat.txt", "w");
    if (fp == NULL)
        return;
    fputs(delm, fp);
    fprintf(fp, "%4d%4d%4d\n %4d%4d%4d\n", a, b, c, x, y, z);
    fputs(delm, fp);
    fclose(fp);
}

/*바이너리 파일 열기
바이너리 파일은 모든 문자를 똑같이 취급한다.(텍스트파일에서 행바꿈과 문자를 구분해주던 것과는 다름)
바이너리 파일을 읽는 순서
1. 열기 
short buf[3];
FILE = *fp;
fp = fopen("file3.dat","rb"); - b는 바이너리 파일 일떄 붙혀줌
2.데이터 읽어오기
fread(buf, sizeof(short), 3, fp);
버퍼의 맨앞 주소, 읽어들일 기본단위, 읽기 횟수, 파일 포인터

fread함수는 실제로 읽은 횟수를 반환하기 떄문에 에러가 발생할 경우 인수로 지정했던 횟수와 반환되는 값이 일치하지 않음
3. 파일을 닫는다.
fclose(fp);
*/

바이너리 파일 만들기

#include<stdio.h>

main()
{
  FILE *fp;
  char filename[] = "bintest.dat";
  int buf_w[10], buf_r[10];
  int i;
  
  for(i = 0; i<10;i++)
    buf_w[i] = (i+1)*10;  //파일에 쓸 데이터 생성
  
  if(!(fp= fopen(filename, "wb")))
    return;                           //에러 처리
  if(fwrite(buf_w, sizeof(int), 10, fp) !=10) {  //!=10은 10개인자가 올바르게 반환되지 않으면 에러처리하는 구문이다.
    fclose(fp);
    return;
  }
  fclose(fp); // 여기까지가 쓰기
  
  if(!(fp = fopen(filename, "rb")))
    return; //읽기 에러처리
  if(fread(buf_r, sizeof(int), 10, fp) !=10){  //
    fclose(fp);
    return;
  }
  fclose(fp);    //여기까지 가 읽기
  
  for(i = 0; i< 10; i++)
    printf("%d ", buf_r[i]); //읽어들인 내용 표시
  
}
*/

