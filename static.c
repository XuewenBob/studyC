#include <stdio.h>
static int j;
void f1(void)
{
	static int i=0;
	i++;
	printf("i=%d\n",i);
}
void f2(void)
{
	j=0;
	j++;
	printf("j=%d\n",j);
}
int main(int argc, char *argv[])
{
	int k;
	for(k=0;k<5;k++)
	{
		f1();
		f2();
	}
	
	return 0;
}