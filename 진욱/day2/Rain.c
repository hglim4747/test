#include "Rain.h"
#include "Func.h"

extern int w, h;
extern playerX, playerY;
extern game;

int rainX[RAINNUM], rainY[RAINNUM];

void RainInit()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
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
		if (rainY[i]>1)
		{
			gotoxy(rainX[i] * 2, rainY[i]);
			printf(" ");
		}
	}
}
void RainUpdate()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
	{
		rainY[i]++;

		if (playerX == rainX[i] && playerY == rainY[i])
		{
			game = 0;
		}

		if (rainY[i]>h - 2)
		{
			rainX[i] = rand() % (w - 2) + 1;
			rainY[i] = -(rand() % h);
		}
	}
}
void RainRender()
{
	int i;
	for (i = 0; i < RAINNUM; i++)
	{
		if (rainY[i]>1)
		{
			gotoxy(rainX[i] * 2, rainY[i]);
			SetColor(WHITE, BLACK);
			printf("b");
		}
	}
}
void RainDestroy()
{

}