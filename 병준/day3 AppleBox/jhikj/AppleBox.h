#pragma once
#include <stdio.h>
class AppleBox 
{
private: // ����
	int num;
	char *name;
public: // ����

	AppleBox(char *str);
	~AppleBox();

	void SetNum(int n);
	void AddApple(int n);
	void PopApple(int n);
	void PrintAppleNum();
};


