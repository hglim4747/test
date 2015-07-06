#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <Windows.h>
#include <stdio.h>

int w, h;
extern int game;
void Initialize()	// �����͸� �ʱ�ȭ �� �Ҵ�
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
void Input() // ����� �Է� ó��
{
	if (GetKeyState(VK_LEFT) & 0x8000) //���� Ű ���������� 1, ������ ����
	{
		PlayerMove(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000) //������ Ű ���������� 1
	{
		PlayerMove(0);
	}

}
void Update()	// ������ ������Ʈ
{
	PlayerUpdate();
	RainUpdate();
}
void Render()	// ���
{
	PlayerRender();
	RainRender();
}
void Break()	// Sleep(30)
{
	Sleep(50);
}
void Destroy()	// �ı�
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