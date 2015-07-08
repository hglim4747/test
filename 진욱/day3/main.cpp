#include "App.h"

int game = 1;

void main()
{

	CApp App;

	srand((unsigned)time(NULL));

	do
	{
		App.Init();

		do
		{
			App.Clear();
			App.Input();
			App.Update();
			App.Render();
			App.Break();
		} while (game);

		App.Destroy();

	} while (App.Restart());
	
}