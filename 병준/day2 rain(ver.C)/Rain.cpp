#include "Rain.h"
#include <stdlib.h>
#include "Func.h"
#include <stdio.h>

extern int w, h, game;
extern int playerX, playerY;
int rainX[RAINNUM], rainY[RAINNUM];

void RainInitialize()
{
	int i;
	for(i =0; i< RAINNUM; i++)
	{
		rainX[i] = rand() % (w-2) + 1;
		rainY[i] = -(rand() % h);
	}
}
void RainClear()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
	{
		if(rainY[i] > 0)
		{
			GotoXY(rainX[i]*2, rainY[i]);
			SetColor(WHITE, BLUE);
			printf(" ");
		}
	}
}
void RainUpdate()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
	{
		rainY[i] ++;
		if(rainY[i] > h - 2)
		{
			rainX[i] = rand() % (w-2) +1;
			rainY[i] = -(rand() % h);
		}
		if(playerX == rainX[i])
		{
			if(playerY == rainY[i])
			{
				game = 0;
			}
		}
	}
}
void RainRender()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
	{
		if(rainY[i] > 0)
		{
			GotoXY(rainX[i]*2, rainY[i]);
			SetColor(WHITE, BLUE);
			printf("b");
		}
	}
}
void RainDestroy()
{

}