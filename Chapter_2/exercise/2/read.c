/*
    ���Ӻ�@20200809
*/
/*  read.c --�ӱ�׼�����ȡ�ļ��������㻨�����Ƿ�ɶԳ���   */

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
        printf("���ļ�%sʧ��\n", argv[1]);
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
        printf("�����ųɶԳ���\n");
    
    return 0;
}