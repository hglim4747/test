#pragma once
#include <stdio.h>
class AppleBox 
{
private: // 개인
	int num;
	char *name;
public: // 공용

	AppleBox(char *str);
	~AppleBox();

	void SetNum(int n);
	void AddApple(int n);
	void PopApple(int n);
	void PrintAppleNum();
};


