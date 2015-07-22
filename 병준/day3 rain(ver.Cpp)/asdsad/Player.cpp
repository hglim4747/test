#include "Player.h"
#include "Func.h"
#include <stdio.h>


extern int w, h;

CPlayer :: CPlayer()
{
	x = w / 2;
	y = h - 2;
}
void CPlayer :: Clear()
{
	GotoXY(x * 2, y);
	SetColor(WHITE, BLACK);
	printf(" ");
}
void CPlayer :: Update()
{

}
void CPlayer :: Render()
{
	GotoXY(x * 2,y);
	SetColor(WHITE, BLACK);
	printf("¿Ê");

}
CPlayer :: ~CPlayer()
{

}

void CPlayer :: Move(int left)
{
	if(left == 1)
	{
		x--;
		if(x < 1)
			x = 1;
	}
	else
	{
		x++;
		if(x > w - 2)
			x = w -2;
	}
}

