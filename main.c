#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
int main(int argc, char *argv[])
{
SDL_Surface *ecran = NULL, *imageDeFond = NULL;
SDL_Rect positionFond;
positionFond.x = 0;
positionFond.y = 0;


SDL_Init(SDL_INIT_VIDEO);
	ecran = SDL_SetVideoMode(984, 553, 32, SDL_HWSURFACE);
SDL_WM_SetCaption("Chargement d'images en SDL", NULL);
/* Chargement d'une image Bitmap dans une surface */
	imageDeFond = SDL_LoadBMP("Bar.bmp");
/* On blitte par-dessus l'écran */
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_Flip(ecran);
	pause();
SDL_FreeSurface(imageDeFond); /* On libère la surface */
SDL_Quit();
return EXIT_SUCCESS;
}
