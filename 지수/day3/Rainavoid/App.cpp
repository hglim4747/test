#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <Windows.h>
#include <stdio.h>

int w, h;
extern int game;
void CApp::Initialize()	// �����͸� �ʱ�ȭ �� �Ҵ�
{
	system("cls");
	game = 1;
	w = 15;
	h = 20;
	PrintMap();
	m_pPlayer = new CPlayer();

	RainInitialize();
}
void CApp::Clear()	//
{
	m_pPlayer->Clear();
	RainClear();
}
void CApp::Input() // ����� �Է� ó��
{
	if (GetKeyState(VK_LEFT) & 0x8000) //���� Ű ���������� 1, ������ ����
	{
		m_pPlayer->Move(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000) //������ Ű ���������� 1
	{
		m_pPlayer->Move(0);
	}

}
void CApp::Update()	// ������ ������Ʈ
{
	m_pPlayer->Update();
	RainUpdate();
}
void CApp::Render()	// ���
{
	m_pPlayer->Render();
	RainRender();
}
void CApp::Break()	// Sleep(30)
{
	Sleep(40);
}
void CApp::Destroy()	// �ı�
{
	delete m_pPlayer;
	RainDestroy();
}

int CApp::Restart()
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