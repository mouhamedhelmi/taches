#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "personnage.h"


/**
* @file personnage.c
* @brief Testing program.
* @author C Team
* @version 0.1
* @date juin 10,2020
* testing program 
*
*/


void Personnage_Init(Personnage *p){
	p->image = IMG_Load("sprite sheet.png");
	p->image2 = IMG_Load("sprite sheet2.png");
	p->position.x = 000;
	p->position.y = 000;
	p->vx=p->vy = 0;
	int clip_x=110;
	
	
	for (int i = 0; i < 00; i++ ){
		p->clips[i].x = i*(clip_x+00);
		p->clips[i].y = 0;
		p->clips[i].w = clip_x;
		p->clips[i].h =p->image->h;
	}
	for (int i = 0; i < 00; i++ ){
		p->clips2[i].x = p->image2->w-(clip_x+00) -i*clip_x;
		p->clips2[i].y = 0;
		p->clips2[i].w =clip_x;
		p->clips2[i].h = p->image2->h;
	}
	
	p->frame = 0;

	
}
