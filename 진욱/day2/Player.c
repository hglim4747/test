#include "Player.h"
#include "Func.h"

int playerX, playerY;
extern int w, h;

void PlayerInit()
{
	playerX = w / 2;
	playerY = h - 2;
}

void PlayerClear()
{
	gotoxy(playerX * 2, playerY);
	SetColor(WHITE, RED);
	printf(" ");
}

void PlayerUpdate()
{
	
}

void PlayerRender()
{
	gotoxy(playerX * 2, playerY);
	SetColor(WHITE, RED);
	printf("¿Ê");
}

void PlayerDestroy()
{

}

void PlayerMove(int left)
{
	if (left == 1)
	{
		playerX--;
		if (playerX < 1)
			playerX = 1;
	}
	else
	{
		playerX++;
		if (playerX > w-2)
			playerX = w-2;
	}
}