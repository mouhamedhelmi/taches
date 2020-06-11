#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
/**
* @file personnage2.c
* @brief Testing program.
* @author C Team
* @version 0.1
* @date juin 10,2020
* testing program 
*
*/
typedef struct Personnage2{

	int x,y,vx,vy;
	SDL_Surface **screen,*image, *image2;
	SDL_Rect position;
	SDL_Rect clips[00];
	SDL_Rect clips2[00];
	float frame;
	
} Player;

void Personnage_Init2(Player *p);
void Personnage_Render2(Player *p,SDL_Rect r, SDL_Surface **screen);
