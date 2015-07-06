#include "App.h"

int game = 1;

void main()
{
	srand((unsigned)time(NULL));
	do
	{
		Init();

		do
		{
			Clear();
			Input();
			Update();
			Render();
			Break();
		} while (game);

		Destroy();

	} while (Restart());
	
}