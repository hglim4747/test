#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <Windows.h>
#include <stdio.h>

int w, h;
extern int game;
void Initialize()	// 데이터를 초기화 및 할당
{
	system("cls");
	game = 1;
	w = 15;
	h = 20;
	PrintMap();
	PlayerInitialize();
	RainInitialize();
}
void Clear()	//
{
	PlayerClear();
	RainClear();
}
void Input() // 사용자 입력 처리
{
	if (GetKeyState(VK_LEFT) & 0x8000) //왼쪽 키 눌려있으면 1, 멈추지 않음
	{
		PlayerMove(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000) //오른쪽 키 눌려있으면 1
	{
		PlayerMove(0);
	}

}
void Update()	// 데이터 업데이트
{
	PlayerUpdate();
	RainUpdate();
}
void Render()	// 출력
{
	PlayerRender();
	RainRender();
}
void Break()	// Sleep(30)
{
	Sleep(50);
}
void Destroy()	// 파괴
{
	PlayerDestroy();
	RainDestroy();
}

int Restart()
{
	GotoXY(2, h + 2);
	printf("Restart (Y/N)\n");
	while (1) //
	{
		if (GetKeyState('Y') & 0x8000)
		{
			return 1;
		}
		if (GetKeyState('N') & 0x8000)
		{
			return 0;
		}
	}


}