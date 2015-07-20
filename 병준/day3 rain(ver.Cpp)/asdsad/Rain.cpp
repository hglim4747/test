#include "Rain.h"
#include <stdlib.h>
#include "Func.h"
#include <stdio.h>
#include "Player.h"

extern int w, h, game;
int rainX[RAINNUM], rainY[RAINNUM];

CRain :: CRain(CPlayer *p)
{
	int i;
	for(i =0; i< RAINNUM; i++)
	{
		rainX[i] = rand() % (w-2) + 1;
		rainY[i] = -(rand() % h);
	}

	Player = p;
}
void CRain :: Clear()
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
void CRain :: Update()
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
		if(Player -> x == rainX[i])
		{
			if(Player -> y == rainY[i])
			{
				game = 0;
			}
		}
	}
}
void CRain :: Render()
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
CRain :: ~CRain()
{

}