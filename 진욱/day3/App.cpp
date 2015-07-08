#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"

int w, h;

extern int game;

void CApp::Init()
{
	SetColor(BLACK, WHITE);
	system("cls");
	CursorView(0);
	w = 30;
	h = 30;
	m_pPlayer = new CPlayer;
	PrintMap();
	RainInit();
	game = 1;
}

void CApp::Clear()
{
	m_pPlayer->Clear();
	RainClear();
}

void CApp::Input()
{
	if (GetKeyState(VK_LEFT) & 0x8000)
	{
		m_pPlayer->Move(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000)
	{
		m_pPlayer->Move(0);
	}
}

void CApp::Update()
{
	m_pPlayer->Update();
	RainUpdate();
}

void CApp::Render()
{
	m_pPlayer->Render();
	RainRender();
}

void CApp::Break()
{
	Sleep(30);
}

void CApp::Destroy()
{
	delete m_pPlayer;
	RainDestroy();
}

int CApp::Restart()
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