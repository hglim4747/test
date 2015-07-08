#pragma once


class CPlayer
{
public:
	CPlayer();
	~CPlayer();
	void Clear();
	void Update();
	void Render();

	void Move(int left);
};