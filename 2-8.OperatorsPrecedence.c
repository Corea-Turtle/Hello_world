#include <stdio.h>

main()
{
    printf("2 x 8 - 6 ÷ 2 = %d\n", 2*8-6/2);
    printf("2 x (8 -6) ÷ 2 = %d\n", 2*(8-6)/2);
    printf("1 - 2 + 3 = %d\n", 1-2+3);
    printf("1 - (2 + 3) = %d\n", 1-(2+3);
          
}

/*
연산자의 우선순위

Category    	                Operator	                                                    Associativity(우선순위가 같을 경우 실행순서)
Postfix(후치)	                  ()함수호출 []배열지정 -> .(피리어드,구조체의멤버선택) x++ x--           Left to right
Unary(단항연산자)	   + - ! ~ ++x --x (type)* & sizeof	                                              Right to left  R
cast                           (datatype)                                                           Right to left R         
Multiplicative	               * / %	                                                              Left to right  
Additive	                      + -	                                                                Left to right
Shift                        	 << >>	                                                              Left to right
Relational	                 < <= > >=	                                                            Left to right
Equality	                      == !=	                                                              Left to right
Bitwise AND	                      &	                                                                Left to right
Bitwise XOR	                      ^	                                                                Left to right
Bitwise OR	                      |	                                                                Left to right
Logical AND	                      &&	                                                              Left to right
Logical OR	                      ||	                                                              Left to right
Conditional	                      ?:	                                                              Right to left  R
Assignment	        = += -= *= /= %=>>= <<= &= ^= |=	                                              Right to left  R
Comma	                            ,	                                                                Left to right

ex)
a = b = c = 1;  
->assignment 이므로 오른쪽에서 왼쪽으로 계산 c = 1 , b = c, a = b 순으로 계산해서 1 출력

c = a == b
Equality 가 우선수위이므로 a==b 가 참이면 1, 거짓이면 0을 c에 대입


참고웹페이지
https://yaraba.tistory.com/418 개인블로그 - 연습문제 2개
https://en.cppreference.com/w/c/language/operator_precedence
https://dojang.io/mod/page/view.php?id=188 코딩도장 -매우 자세하게 나와있음
*/
