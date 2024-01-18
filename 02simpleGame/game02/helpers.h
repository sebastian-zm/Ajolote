#ifndef HELPERS_H
#define HELPERS_H

#include <SDL.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>

#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 600

// Makro bat izan behar da, bestela funtzioa bada warning batzuk agertzen dira, ez dakielako aldagaiak null diren konprobatu dugula (bereziki malloc erabiltzean).
#define ERRORIF(kondizioa,...) {\
  if(kondizioa)\
  {\
    fprintf(stderr,"Errore kritikoa:\n");\
    fprintf(stderr,__VA_ARGS__);\
    fprintf(stderr,"\n");\
    exit(EXIT_FAILURE);\
  }\
}



enum Animalia
{
	ANIMALIA_AXOLOTE,
	ANIMALIA_AMAZONIAR_MANATI,
	ANIMALIA_BELUGA,
	ANIMALIA_BALE_URDIN,
	ANIMALIA_HARTZ_TXURI,
	ANIMALIA_LEMUR,
	ANIMALIA_AZERI_ARTIKO,
	ANIMALIA_JAGUAR,

	ANIMALIA_KOPURUA // Ez da animalia bat, aldagai honek animalia kopurua gordetzen du.
};


SDL_Texture* irudiaKargatuTexturara(SDL_Renderer* renderer, char* path);
SDL_Surface* irudiaKargatuGainazalera(SDL_Renderer* renderer, char* path);
SDL_Texture* texturaGainazaletik(SDL_Renderer* renderer, SDL_Surface* surface);
TTF_Font* letraTipoKargatu(int tamaina, char* path);
void pantailaGarbitu(SDL_Renderer* renderer);
void fadeIn(SDL_Renderer* renderer, SDL_Texture* texture, int tiempo);
char* pathAbsolutua(char* path);
void handleQuit();
void pantailaEguneratuEstalkiekin(SDL_Renderer* renderer);

#endif // !HELPERS_H