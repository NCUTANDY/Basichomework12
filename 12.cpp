#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num,num1,row;
	printf("�п�J���(�j��1):");
	scanf("%d",&row);
	for (num=1;num<=row;num++)
{
	for (num1=1;num1<=((row+1)-num);num1++)
	printf("*");
	printf("\n");
}
    system("pause");	
	return 0;
}
