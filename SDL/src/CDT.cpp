#define FPS (1000/30)

#include <iostream>
#include "SDL/SDL.h"
#include "GObject/Hero.h"
#include "GObject/CMonster.h"

using namespace std;

int main(int argc, char* argv[]) {
	try {
		if (SDL_Init(SDL_INIT_VIDEO == -1))
			throw SDL_GetError();
	} catch (const char* s) {
		std::cerr << s << std::endl;
		return -1;
	}

	Hero* pmyHero = new Hero();
	CMonster* pmonster1=new CMonster();

	//Set up screen
	SDL_Surface* screen= SDL_SetVideoMode(1000, 600, 32, SDL_SWSURFACE);
	bool GAMESTATUS = true;

	int time1, time2;

	while (GAMESTATUS) {
		time1 = SDL_GetTicks();

		//事件处理
		SDL_Event gameEvent;

		if (SDL_PollEvent(&gameEvent) != 0) {

			if (gameEvent.type == SDL_QUIT) {
				GAMESTATUS = false;
			}
			if (gameEvent.type == SDL_KEYDOWN) {
				if (gameEvent.key.keysym.sym == SDLK_ESCAPE) {
					GAMESTATUS = false;
				}else{
					pmyHero->DealInput(gameEvent.key.keysym.sym);
				}
			}
		}

		//场景逻辑

		//场景绘制

		pmyHero->Draw(screen);
		pmonster1->Draw(screen);

		SDL_Flip(screen);

		//更新窗口
		time2 = SDL_GetTicks();
		time2 = FPS - (time2 - time1);
		if (time2 > 0) {
			SDL_Delay(time2);
		} else {
			std::cout << time2;
		}
	}

	//Quit SDL
	SDL_Quit();

	return 0;
}

