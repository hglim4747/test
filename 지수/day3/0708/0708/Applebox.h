#pragma once

class AppleBox
{
private:
	int num;
	char *name;
public:
	AppleBox(char *str); //������, �����Ͱ� ������ �� ȣ��Ǵ� �Լ� , �Ű����� O
	~AppleBox(); //�Ҹ���, �����Ͱ� �Ҹ�� �� ȣ��Ǵ� �Լ� 
	void AddApple(int n);
	void PrintAppleNum();
	void PopApple(int n);

};
