/*
**  赵子豪@20201223
*/
/*  
**  计算一个字符串的长度
*/

#include <stdlib.h>

size_t
strlen( char *string )
{   
    int length = 0;
    
    /*
    **  一次访问字符串的内容，计算字符数，直到遇见nul终止符
    */
    while ( *string ++ != '\0')
        length += 1;
        
    return length;
}