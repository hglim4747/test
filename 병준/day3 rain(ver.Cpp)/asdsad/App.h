#pragma once
// 전처리 구문 : 헤더 파일을 한번만 포함되도록
#include "Player.h"
#include "Rain.h"
class CApp
{
public:
	void Initialize();  // 데이터 초기화 및 할당

	void Clear();		//
	void Input();		// 사용자 입력처리
	void Update();		// 데이터 업데이트
	void Render();		// 출력
	void Break();		// Sleep(30)

	void Destroy();		// 파괴

	int Restart(); // 재시작

	CPlayer * m_pPlayer;
	CRain * m_pRain;
};