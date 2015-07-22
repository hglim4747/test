#pragma once
// ��ó�� ���� : ��� ������ �ѹ��� ���Եǵ���
#include "Player.h"
#include "Rain.h"
class CApp
{
public:
	void Initialize();  // ������ �ʱ�ȭ �� �Ҵ�

	void Clear();		//
	void Input();		// ����� �Է�ó��
	void Update();		// ������ ������Ʈ
	void Render();		// ���
	void Break();		// Sleep(30)

	void Destroy();		// �ı�

	int Restart(); // �����

	CPlayer * m_pPlayer;
	CRain * m_pRain;
};