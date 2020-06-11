#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "personnage.h"




void Personnage_Render(Personnage *p,SDL_Rect r, SDL_Surface **screen){
	SDL_Rect r2 = {p->position.x - r.x, p->position.y};
	if(p->vx >=0){
		SDL_BlitSurface(p->image,&p->clips[(int) p->frame],*screen,&r2);
	}else{
		SDL_BlitSurface(p->image2,&p->clips2[(int) p->frame],*screen,&r2);

	}

	if(p->vx != 0){
		p->frame += 0.0f;
		if(p->frame >00) p->frame = 1;
		p->position.x += p->vx;
	}else{
		p->frame = 0;
	}
	p->vy += 1;
	p->position.y += p->vy;
		
	if(p->position.y + 000 > 720){
		p->position.y = 720-000;
		p->vy = 0;
	}
	
	
}
