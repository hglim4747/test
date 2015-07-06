#include "Rain.h"
#include "Func.h"
#include <stdio.h>
#include <stdlib.h>

int rainX[RAINNUM], rainY[RAINNUM];

extern int w, h, game;
extern int playerX, playerY;

void RainInitialize()
{

	for (int i = 0; i<RAINNUM; i++)
	{
		rainX[i] = rand() % (w-2) +1;
		rainY[i] = -(rand() % h); // 시간 차이 두고 내려올 수 있게
	}

}
void RainClear()
{
	for (int i = 0; i < RAINNUM; i++)
	{
		if (rainY[i]>0)
		{
			GotoXY(rainX[i] * 2, rainY[i]);

			printf(" ");
		}
	}

}
void RainUpdate()
{

	for (int i = 0; i<RAINNUM; i++)
	{
		rainY[i]++;
		if (rainY[i] > h - 2)
		{
			rainX[i] = rand() % (w - 2) + 1;
			rainY[i] = -(rand() % h);
		}
		if (playerX == rainX[i] && playerY == rainY[i])
		{
			game = 0;
		}
	}

}
void RainRender()
{
	for (int i = 0; i < RAINNUM; i++)
	{
		if (rainY[i]>0) // rainY좌표가 음수일 경우(화면 위에서 내리는 경우) 예외처리 
		{
			GotoXY(rainX[i] * 2, rainY[i]);
			SetColor(WHITE, BLUE);
			printf("!");
		}
	}
}
void RainDestroy()
{

}
