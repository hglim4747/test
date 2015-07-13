#pragma once // 헤더파일이 한 번만 포함되도록
#include "Player.h"

class CApp
{
public:

	CPlayer *m_pPlayer;

	void Initialize();	// 데이터를 초기화 및 할당
	void Clear();	//

	void Input();	// 사용자 입력 처리
	void Update();	// 데이터 업데이트
	void Render();	// 출력
	void Break();	// Sleep(30)
	void Destroy();	// 파괴
	int Restart();

};
