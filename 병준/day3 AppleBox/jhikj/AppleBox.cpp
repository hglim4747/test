#include "AppleBox.h"
#include <stdio.h>
#include <string.h>

AppleBox :: AppleBox(char *str)
{
	name = new char [ strlen(str) + 1];
	strcpy(name, str);
	printf("%s박스 등장~!!!\n", name);
	num =  0;
}

AppleBox :: ~AppleBox()
{
	printf("%s박스 소멸 ㅜㅜㅜ\n", name);
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
	printf("%s가 %d개 들어있습니다.\n",  name,num);
}

