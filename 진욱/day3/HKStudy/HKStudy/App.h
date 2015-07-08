#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include "Player.h"

using namespace std;

class CApp
{
private:
	CPlayer *m_pPlayer;
public:
	void Init();	// 데이터를 초기화 및 할당
	void Clear();		// 
	void Input();		// 사용자 입력 처리
	void Update();		// 데이터 업데이트
	void Render();		// 출력
	void Break();		// Sleep(30)
	void Destroy();		// 파괴
	int Restart();
};