#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
/**
* @struct personnage
* @brief struct for personnage
* @author phunyuka

*
*/
typedef struct Personnage{

	int x,y,vx,vy;
	SDL_Surface **screen,*image, *image2;
	SDL_Rect position;
	SDL_Rect clips[00];
	SDL_Rect clips2[00];
	float frame;
	
} Player;

void Personnage_Init(Personnage *p);
void Personnage_Render(Personnage *p,SDL_Rect r, SDL_Surface **screen);
