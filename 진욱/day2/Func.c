#include "Func.h"
#include <Windows.h>

extern int w, h;

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void SetColor(int BackgroundColor, int FrontgroundColor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BackgroundColor * 16 + FrontgroundColor);
}

void PrintMap()
{
	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
			{
				SetColor(WHITE, DARK_VIOLET);
				printf("¢Æ");
			}
			else
			{
				SetColor(WHITE, DARK_VIOLET);
				printf("  ");
			}
		}
		printf("\n");
	}
}