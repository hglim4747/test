#include <iostream>
#include "Applebox.h"
using namespace std; //std:: 안써도 됨

int main(void)
{

	AppleBox *ab[3];

	ab[0] = new AppleBox("사과");

	ab[1] = new AppleBox("배");
	
	ab[2] = new AppleBox("송인호");

	for (int i = 0; i < 3; i++)
	{
		delete ab[i];
	}
	return 0;
}



// cout << => 출력
