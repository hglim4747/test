#include <iostream>
#include "AppleBox.h"
using namespace std;


int main()
{

	AppleBox *ab[3];


	ab[0] = new AppleBox("���");
	ab[1] = new AppleBox("��");
	ab[2] = new AppleBox("����ȣ");

	for(int i=0; i<3; i++)
	{
		delete ab[i];
	}

	return 0;
}