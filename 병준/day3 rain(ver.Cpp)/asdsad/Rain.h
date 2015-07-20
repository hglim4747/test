#pragma once
#define RAINNUM 7

class CPlayer;
class CRain
{
public:
	CRain(CPlayer *p);
	~CRain();

	CPlayer *Player;

	void Clear();
	void Update();
	void Render();
};