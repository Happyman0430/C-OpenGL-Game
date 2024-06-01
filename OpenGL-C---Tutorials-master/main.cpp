#include "Game.h"

//ZOOOOOOOOOOOM IN BEFORE RECORDING!

int main()
{
	Game game("YOUTUBE_TUTORIAL",
		1366,768,
		4, 4,
		false);

	//MAIN LOOP
	while (!game.getWindowShouldClose())
	{
		//UPDATE INPUT ---
		game.update();
		game.render();	
	}

	return 0;
}