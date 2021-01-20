int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    char* p1 = "abcdef";//常量字符串
    char* p2 = "abcdef";//
    if (arr1 == arr2)//在内存中arr1指向的首元素的地址不一样，所以不会打印hehe
    {
        printf("hehe\n");
    }
    if (p1 == p2)//在内存中指针p1和指针p2一模一样得常量字符串不会再内存开辟第二块空间，所以p1指向地址==p2
    {
        printf("haha\n");
    }
    return 0;
}