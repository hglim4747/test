#include "AppleBox.h"
#include <stdio.h>
#include <string.h>

AppleBox :: AppleBox(char *str)
{
	name = new char [ strlen(str) + 1];
	strcpy(name, str);
	printf("%s�ڽ� ����~!!!\n", name);
	num =  0;
}

AppleBox :: ~AppleBox()
{
	printf("%s�ڽ� �Ҹ� �̤̤�\n", name);
	delete[] name;
}

void AppleBox :: SetNum(int n)
{
	num = n;
}
void AppleBox :: AddApple(int n)
{
	num += n;
}
void AppleBox :: PrintAppleNum()
{
	printf("%s�� %d�� ����ֽ��ϴ�.\n",  name,num);
}

