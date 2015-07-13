#include "player.h"
#include "Func.h"
#include <stdio.h>

int playerX, playerY;
extern int w, h;

CPlayer::CPlayer()
{
	playerX = w / 2;
	playerY = h - 2;
}
void CPlayer::Clear()
{
	GotoXY(playerX * 2, playerY);
	SetColor(WHITE, BLUE);
	printf(" ");

}
void CPlayer::Update()
{

}
void CPlayer::Render()
{
	GotoXY(playerX * 2, playerY);
	SetColor(WHITE, BLACK);
	printf("¡Ú");
}
CPlayer::~CPlayer()
{

}

void CPlayer::Move(int left)
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