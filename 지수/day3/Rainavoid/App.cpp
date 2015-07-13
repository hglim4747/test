#include "App.h"
#include "Func.h"
#include "Player.h"
#include "Rain.h"
#include <Windows.h>
#include <stdio.h>

int w, h;
extern int game;
void CApp::Initialize()	// 데이터를 초기화 및 할당
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
void CApp::Input() // 사용자 입력 처리
{
	if (GetKeyState(VK_LEFT) & 0x8000) //왼쪽 키 눌려있으면 1, 멈추지 않음
	{
		m_pPlayer->Move(1);
	}
	if (GetKeyState(VK_RIGHT) & 0x8000) //오른쪽 키 눌려있으면 1
	{
		m_pPlayer->Move(0);
	}

}
void CApp::Update()	// 데이터 업데이트
{
	m_pPlayer->Update();
	RainUpdate();
}
void CApp::Render()	// 출력
{
	m_pPlayer->Render();
	RainRender();
}
void CApp::Break()	// Sleep(30)
{
	Sleep(40);
}
void CApp::Destroy()	// 파괴
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