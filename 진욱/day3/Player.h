#pragma once

class CPlayer
{
public:
	CPlayer();
	void Clear();
	void Update();
	void Render();
	~CPlayer();
	void Move(int left);
};