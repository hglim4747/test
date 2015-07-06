#include "App.h"
int game = 1;

int main(void)
{
	do{
		Initialize();
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

	return 0;

}

