/*
   ���Ӻ�@20201222
*/
/*
**  ����������ز���ֵ��ֵΪ1��λ�ĸ�����
*/

int
count_one_bits( unsigned value)
{
    int ones;
    
    /*
    **  �����ֵ����һЩֵΪ1��λʱ������
    */
    for( ones = 0; value != 0; value = value >> 1)
        /*
        **  ������λ��ֵΪ1��������1
        */
        if (value % 2 != 1)
            ones = ones + 1;
    
    return ones;
}