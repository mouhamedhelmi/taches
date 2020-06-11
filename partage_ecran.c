#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "partage_ecran.h"
/**
* @file partage_ecran.c
* @brief Testing program.
* @author C Team
* @version 0.1
* @date juin 10,2020
* testing program 
*
*/
void init ()
{
SDL_Surface *ecran =NULL,*background=NULL,*perso=NULL;
SDL_Rect camera1,camera2,poscam1,poscam2,positionperso;
 int continuer = 1;
SDL_Event event;
SDL_Init(SDL_INIT_VIDEO);
ecran=SDL_SetVideoMode(1600,950,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
background= IMG_Load("background(1).jpg");
perso=IMG_Load("detective1.png");

positionperso.x=10;
positionperso.y=800;

camera1.x=0;
camera1.y=0;
camera1.w=6000;
camera1.h=475;

poscam1.x=0;
poscam1.y=0;
poscam1.w=1600;
poscam1.h=475;

camera2.x=0;
camera2.y=475;
camera2.w=6000;
camera2.h=475;

poscam2.x=0;
poscam2.y=0;
poscam2.w=1600;
poscam2.h=475;

int keysHeld[323]={0};

}
void partage_ecran(SDL_Rect poscam1,SDL_Rect poscam2,SDL_Rect camera1,SDL_Rect camera2,SDL_Surface *ecran)
{  
  if (continuer==1)
{
SDL_BlitSurface(background,&poscam1,ecran,&camera1);
SDL_BlitSurface(background,&poscam2,ecran,&camera2);
//SDL_BlitSurface(perso,NULL,ecran,&positionperso);
//SDL_SetColorKey(perso,SDL_SRCCOLORKEY,SDL_MapRGB(perso->format,255,255,255));
SDL_Flip(ecran);
SDL_EnableKeyRepeat(10,10);
while(SDL_WaitEvent(&event))
    {
     switch(event.type)
     { 
     case SDL_QUIT:
      continuer=0;
     break;
      case SDL_KEYDOWN:
       keysHeld[event.key.keysym.sym]=1;
     break;
      case SDL_KEYUP:
       keysHeld[event.key.keysym.sym]=0;
     break;
     }
        if (keysHeld[SDLK_RIGHT])
{           
if(poscam1.x<3400)
{
            poscam1.x+=5;
}
            SDL_BlitSurface(background,&poscam1,ecran,&camera1);


}
if(keysHeld[SDLK_LEFT])
{
if(poscam1.x>0)
{
           poscam1.x-=5;
}
           SDL_BlitSurface(background,&poscam1,ecran,&camera1);

}
if(keysHeld[SDLK_d])
{
if(poscam2.x<3400)
{
       poscam2.x+=5;
}
         SDL_BlitSurface(background,&poscam2,ecran,&camera2);

}
if(keysHeld[SDLK_q])
{
if(poscam2.x>0)
{
          poscam2.x-=5;
}
         SDL_BlitSurface(background,&poscam2,ecran,&camera2);

}
       SDL_Flip(ecran);
     }
    }
SDL_FreeSurface(background);
SDL_FreeSurface(perso);
SDL_Quit();
}
}
