/*
#include<stdio.h>

main() 
{
	int i, j, list[10];

	for (i = 0; i < 10; i++)
	{
		list[i] = 2 * i + 3;
		for (j = 0; j <= i; j++)
			printf("%d\n", list[j]);
		printf("\n");
	}
}
3

3
5

3
5
7
.
.
.

*/

/*
#include<stdio.h>

main()
{
    char let = 'F';
    char start;
    char end;

    for (end = let; end >= 'A'; end--)
    {
        for (start = let; start >= end; start--)
            printf("%c", start);
        printf("\n");
    }
}
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

/*
#include<stdio.h>

main()
{
	int x, y;

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y <= x; y++)
			printf("$");
			printf("\n");
	}
}

$
$$
$$$
$$$$
$$$$$
*/


/*
#include<stdio.h>

main()
{
    int by_twos[8];
    int index;

    for (index = 0; index < 8; index++)
        by_twos[index] = 2 * (index + 1);
    for (index = 0; index < 8; index++)
        printf("%d ", by_twos[index]);
        printf("\n");
}
 
 2 4 6 8 10 12 14 16
 
 */
}
