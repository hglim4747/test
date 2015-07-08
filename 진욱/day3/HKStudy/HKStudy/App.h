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
	void Init();	// �����͸� �ʱ�ȭ �� �Ҵ�
	void Clear();		// 
	void Input();		// ����� �Է� ó��
	void Update();		// ������ ������Ʈ
	void Render();		// ���
	void Break();		// Sleep(30)
	void Destroy();		// �ı�
	int Restart();
};