#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void Init();	// �����͸� �ʱ�ȭ �� �Ҵ�
void Clear();		// 
void Input();		// ����� �Է� ó��
void Update();		// ������ ������Ʈ
void Render();		// ���
void Break();		// Sleep(30)
void Destroy();		// �ı�
int Restart();