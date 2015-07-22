#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <windows.h>
#include <stdio.h>
int w, h;
extern int game;

void CApp::Initialize()
{
	SetColor(BLACK, DARK_VIOLET);
	system("cls");
	game = 1;
	w = 30;
	h = 15;
	PrintMap();
	m_pPlayer =new CPlayer();
	m_pRain = new CRain(m_pPlayer);
}

void CApp::Clear()
{
	m_pPlayer->Clear();
	m_pRain->Clear();
}

void CApp::Input()
{
	if(GetKeyState(VK_LEFT) & 0x8000 )
	{
		m_pPlayer->Move(1);
	}
	if(GetKeyState(VK_RIGHT) & 0x8000 )
	{
		m_pPlayer->Move(0);
	}
}

void CApp::Update()
{
	m_pRain->Update();
	m_pPlayer->Update();

}

void CApp::Render()
{
	m_pPlayer->Render();
	m_pRain->Render();
}

void CApp::Break()
{
	Sleep(70);
}


void CApp::Destroy()
{
	delete m_pPlayer;
	delete m_pRain;
}

int CApp::Restart()
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