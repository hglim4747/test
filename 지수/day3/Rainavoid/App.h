#pragma once // ��������� �� ���� ���Եǵ���
#include "Player.h"

class CApp
{
public:

	CPlayer *m_pPlayer;

	void Initialize();	// �����͸� �ʱ�ȭ �� �Ҵ�
	void Clear();	//

	void Input();	// ����� �Է� ó��
	void Update();	// ������ ������Ʈ
	void Render();	// ���
	void Break();	// Sleep(30)
	void Destroy();	// �ı�
	int Restart();

};
