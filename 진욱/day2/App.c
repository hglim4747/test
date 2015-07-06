#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"

int w, h;

extern int game;

void Init()
{
	SetColor(BLACK, WHITE);
	system("cls");
	CursorView(0);
	w = 30;
	h = 30;
	PrintMap();
	PlayerInit();
	RainInit();
	game = 1;
}

void Clear()
{
	PlayerClear();
	RainClear();
}

void Input()
{
	if (GetKeyState(VK_LEFT) & 0x8000)
	{
		PlayerMove(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000)
	{
		PlayerMove(0);
	}
}

void Update()
{
	PlayerUpdate();
	RainUpdate();
}

void Render()
{
	PlayerRender();
	RainRender();
}

void Break()
{
	Sleep(30);
}

void Destroy()
{
	PlayerDestroy();
	RainDestroy();
}

int Restart()
{

	gotoxy(2, h + 3);
	printf("Restart ? <y/n> : ");
	while (1)
	{
		if (GetKeyState('Y') & 0x8000)
		{
			return 1;
		}
		else if (GetKeyState('N') & 0x8000)
		{
			return 0;
		}
	}
}