/*
**  ���Ӻ�@20201223
*/
/*
**  ����������ز���ֵ��Ϊ1��λ�ĸ���
*/
int 
count_one_bits( unsigned value )
{
    int ones;
    
    /*
    **  �����ֵ�л�����һЩֵΪ1��λʱ..
    */
    for ( ones = 0; value != 0; value >>= 1)
        /*
        **  ������λΪ1���Ӽ�������ֵ
        */
        if ( (value & 1) != 0)
            ones += 1;
    
    return 0;
}