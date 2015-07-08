#include <iostream>
#include "AppleBox.h"
using namespace std;


int main()
{

	AppleBox *ab[3];


	ab[0] = new AppleBox("사과");
	ab[1] = new AppleBox("배");
	ab[2] = new AppleBox("송인호");

	for(int i=0; i<3; i++)
	{
		delete ab[i];
	}

	return 0;
}