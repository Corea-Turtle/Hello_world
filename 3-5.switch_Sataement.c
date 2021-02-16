#include<stdio.h>

main()
{
    char a;
    
      printf("1-3중에서 좋아하는 숫자를 입력하세요.\n");
      a = getchar();
      
      switch(a)
      {
      case'1':
          printf("당신은 1을 좋아하는 사람입니다.\n\n");
          break;
      case'2':
          printf("당신은 2를 좋아하는 사람입니다.\n\n");
          break;
      case'3':
          printf("당신은 3을 좋아하는 사람입니다.\n\n");
          break;
      default :
          printf("1-3중 하나만 입력하십시오.\n\n");
      }
    
}
/*
switch문은 case라는 여러개의 선택지 중 하나와 switch(식)에서 식의 값이 일치하는 것을 골라 처리한다.

어떤 case와도 맞지 않을경우 마지막에 default값을 출력한다.

각 case 뒤에 break; 문을 써서 일치하는 case만 처리하도록 한다.

switch문의 (식)부분에는 값이 수치인 것만 사용하능하므로 수치 이외에 선택문(문자 등)을 쓰고 싶다면 if else if else를 사용하여 코드를 짜도록하자.
*/
