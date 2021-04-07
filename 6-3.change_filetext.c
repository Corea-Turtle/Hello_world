#include<stdio.h>
#include<string.h>

int main()
{
  FILE *fpr, *fpw;              //읽기, 쓰기 파일 포인터
  char bufr[256], bufw[256];    //읽기, 쓰기 버퍼
  char str1[] = "dog";          //바꿀 원래 글자
  char str2[] = "rabbit";       //바꿔 넣을 문자
  char *p *q;
  
  if(!(fpr=fopen("dog.txt", "r"))){
      printf("파일을 읽어 오지 못했습니다.\n);
    return 1;
  }
  if(!(fpw=fopen("rabbit.txt","w"))){
      printf("작성할 파일을 열지 못했습니다.\n");
    return 1;
  }
  while(1) {                      //while조건에 !feof(fpr)을 써줘야 제대로 나옴 feof는 파일 끝이면 0이 아닌값을 리턴해줌 파일 중간이면 0을 리턴.
    fgets(bufr, 256, fpr);
    if(feof(fpr))  //
      break;       // 여기 두줄을 지워야된다.  이유는 fgets가 줄바꿈이 나오는 곳까지 읽고 0을 반환하기 떄문이 아닐까...?
    strcpy(bufw, bufr); // fgets에서 읽어온 문장 하나를 새로 넣을 파일에 복사한다.
    p = strstr(bufr,str1); // 읽어와서 버퍼에 넣은 문장에서 dog의 첫 주소를 찾는다.
    if(p) {                 //dog의 주소를 찾았다면
      q = bufw + (p -bufr);              //p q가 포인터라는 것에 유의해서 보자. q는 주소값이다. 여기에  p - bufr 을 하면 시작주소(bufr)에서 몇 바이트가면 dog가 나오는지 알 수 있다.
      strcpy(q, str2);                    //여기서 bufw도 동일한 시작지점이라 가정하고 bufw + (p-bufr) 하면 rabbit을 넣을 지점을 찾을 수 있게 된다.
      strcpy(q+strlen(str2), p + strlen(str1);  //dog와 rabbit의 길이가 다르기 떄문에 글자가 바뀔 수 있다. 예를 들면 doghouse였다면 rabbitse가 될 수 있기 떄문에 해준다.
     }                                          //이해가 완벽히 안됐지만 아무튼 포인터다
             fprintf(fpw, "%s", bufw);
   }
   fclose(fpr);
             fclose(fpw);
             return 0;
             }
