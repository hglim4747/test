#include "Applebox.h"
#include <stdio.h>
#include <string.h>

AppleBox::AppleBox(char *str)
{
	name = new char[strlen(str)+1];
	strcpy_s(name, strlen(str)+1, str);
	printf("%s박스 등장\n", name);
	num = 0;
}


AppleBox::~AppleBox()
{
	printf("%s박스 소멸\n", name);
	delete[] name;
}


void AppleBox::AddApple(int n)
{
	num += n;
}

void AppleBox::PrintAppleNum()
{
	printf("%s가 %d개 들었습니다.\n", name, num);
}

void AppleBox::PopApple(int n)
{
	num -= n;
}

