/*
    ���Ӻ�@20200809
*/

/*  main.c  --  ������������ ��һ���෴��   */

#include <stdio.h>

int increment ( int );
int negate ( int );

int 
main ( void )
{
    int x = 10;
    int y = 0;
    int z = -10;
    
    printf("%d\n", increment(x) );
    printf("%d\n", negate(x) );
    printf("%d\n", increment(y) );
    printf("%d\n", negate(y) );
    printf("%d\n", increment(z) );
    printf("%d\n", negate(z) );
    
    return 0;
}