#pragma once

class AppleBox
{
private:
	int num;
	char *name;
public:
	AppleBox(char *str); //생성자, 데이터가 생성될 때 호출되는 함수 , 매개변수 O
	~AppleBox(); //소멸자, 데이터가 소멸될 때 호출되는 함수 
	void AddApple(int n);
	void PrintAppleNum();
	void PopApple(int n);

};
