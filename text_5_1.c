#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>	
void* my_memcpy(void *a1,const void*a2,size_t p)
{
	while (p)
	{
		*((char*)a1)++ = *((char*)a2)++; 
		p--;
	}

}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1,sizeof(arr1));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
}