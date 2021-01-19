int main()
{

    int n = 9;
    //0 00000000 00000000000000000001001
    //S  E         M
    float* pFloat = (float*)&n;
    printf("n的值为:%d\n", n);//9
    printf("*pFloat的值为:%f   \n", *pFloat);//0.000000
    //·E全为0
    //这时，浮点数的指数E等于1 - 127((或者1 - 1023)即为真实值，有效数字M不再加上第一位的1，而是还原为0.xx×xxx的小数.这样做是为了表示 + 0，以及接近于0的很小的数字。
    //(-1)^0*0.0000000000000000001001*2^-126
    //%f小数点后面打印6位
    *pFloat = 9.0;
    //1001。0
    //(-1)^0*1.001*2^3
    //01000001000100000000000000000000
    printf("num的值为:%d\n", n);//1091567616
    printf("*pFloat的值为:%f\n", *pFloat); //9.0
    return 0;
}