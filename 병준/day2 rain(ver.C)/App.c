#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <windows.h>
int w, h;
extern int game;

void Initialize()
{
	SetColor(BLACK, DARK_VIOLET);
	system("cls");
	game = 1;
	w = 30;
	h = 15;
	PrintMap();
	PlayerInitialize();
	RainInitialize();
}

void Clear()
{
	PlayerClear();
	RainClear();
}

void Input()
{
	if(GetKeyState(VK_LEFT) & 0x8000 )
	{
		PlayerMove(1);
	}
	if(GetKeyState(VK_RIGHT) & 0x8000 )
	{
		PlayerMove(0);
	}
}

void Update()
{
	RainUpdate();
	PlayerUpdate();

}

void Render()
{
	PlayerRender();
	RainRender();
}

void Break()
{
	Sleep(45);
}


void Destroy()
{
	PlayerDestroy();
	RainDestroy();
}

int Restart()
{
	GotoXY(2, h + 3);
	printf("Restart? ( y / n) ");
	while(1)
	{
		if(GetKeyState('Y') & 0x8000 )
		{
			return 1;

		}
		if(GetKeyState('N') & 0x8000 )
		{
			return 0;
		}
	}
}