#define FPS (1000/30)

#include <iostream>
#include "SDL/SDL.h"
#include "GObject/Hero.h"
#include "GObject/CMonster.h"
#include "GObject/CSpriteStore.h"

using namespace std;

struct KeyStatus {
	SDLKey val;
};

int main(int argc, char* argv[]) {
	try {
		if (SDL_Init(SDL_INIT_VIDEO == -1))
			throw SDL_GetError();
	} catch (const char* s) {
		std::cerr << s << std::endl;
		return -1;
	}

	//按键
	KeyStatus keyStatus;

	CSpriteStore* spriteList = new CSpriteStore();
	Hero* pmyHero = new Hero();
	spriteList->Add(pmyHero);
	CMonster* pmonster1 = new CMonster();
	spriteList->Add(pmonster1);


	//Set up screen
	SDL_Surface* screen = SDL_SetVideoMode(1000, 600, 32, SDL_SWSURFACE);
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
				} else {
					keyStatus.val = gameEvent.key.keysym.sym;
				}
			} else if (gameEvent.type == SDL_KEYUP) {
				if (keyStatus.val == gameEvent.key.keysym.sym) {
					keyStatus.val = SDLK_CLEAR;
				}
			}
		}


		//场景逻辑

		//清空屏幕
		SDL_FillRect(screen,NULL,0);

		//精灵绘制
		for (map<int, CSprite*>::iterator iter =
				spriteList->GetSprites()->begin();
				iter != spriteList->GetSprites()->end(); iter++) {
			iter->second->Draw(screen);
		}

		pmyHero->DealInput(keyStatus.val);

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

