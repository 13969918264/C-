/*
    赵子豪@20200809
*/
/*  read.c --从标准输入读取文件，并计算花括号是否成对出现   */

#include <stdio.h>
#include <stdlib.h>

int 
main (int argc, char * argv[] )
{
    int left = 0;
    int right = 0;
    char target;
    FILE * origin;


    if ( (origin =fopen(argv[1], "r") ) == NULL)
    {
        printf("打开文件%s失败\n", argv[1]);
        exit(1);
    }

    while ( (target = fgetc(origin) ) != EOF)
    {
        if (target == '{')
            left++;
        else if (target == '}')
            right++;
        else
            putchar(target);
    }

    putchar('\n');

    fclose(origin);

    if ( (left == right) && (left != 0) )
        printf("花括号成对出现\n");
    
    return 0;
}