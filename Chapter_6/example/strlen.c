/*
**  ���Ӻ�@20201223
*/
/*  
**  ����һ���ַ����ĳ���
*/

#include <stdlib.h>

size_t
strlen( char *string )
{   
    int length = 0;
    
    /*
    **  һ�η����ַ��������ݣ������ַ�����ֱ������nul��ֹ��
    */
    while ( *string ++ != '\0')
        length += 1;
        
    return length;
}