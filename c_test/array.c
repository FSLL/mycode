#include<stdio.h>
int main()
{
	int a[5] = {0,1,2,3,4,5},i;
	printf("%d %p\n",sizeof(a),a);	
	for(i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d %p\n",a[i],&a[i]);
	}
	return 0;
}
