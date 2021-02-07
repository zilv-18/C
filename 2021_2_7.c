int my_memcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 && buf2);
	while (count)
	{
		if (*(char*)buf1 == *(char*)buf2)
		{
			buf1 = (char*)buf1 + 1;
			buf2 = (char*)buf2 + 1;
		}
		else
		{
			break;
		}
		count--;
	}
	if (count == 0)
	{
		return 0;
	}
	else
	{
		return *(char*)buf1 - *(char*)buf2;
	}
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,9 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	if ((my_memcmp(arr1, arr2, sizeof(arr1)) == 0))
	{
		printf("=\n");
	}
	else if((my_memcmp(arr1, arr2, sizeof(arr2)) > 0))
	{
		printf(">\n");
	
	}
	else
	{
		printf("<\n");
	}
	return 0;
}