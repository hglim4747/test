#include "App.h"
int game = 1;

int main(void)
{
	CApp App;
	do{
		App.Initialize();
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

	return 0;

}

