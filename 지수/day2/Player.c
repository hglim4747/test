#include "player.h"
#include "Func.h"

int playerX, playerY;
extern int w, h;

void PlayerInitialize()
{
	playerX = w / 2;
	playerY = h - 2;
}
void PlayerClear()
{
	GotoXY(playerX * 2, playerY);
	SetColor(WHITE, BLUE);
	printf(" ");

}
void PlayerUpdate()
{

}
void PlayerRender()
{
	GotoXY(playerX * 2, playerY);
	SetColor(WHITE, BLACK);
	printf("¡Ú");
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
		if (playerX > w - 2)
			playerX = w - 2;
	}
}