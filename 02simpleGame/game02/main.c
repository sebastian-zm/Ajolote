#include "init_screen.h"
#include "scene_handler.h"
#include "mugimendua.h"

int main() {
    SDL_Window* lehioa = NULL;
    // el contenedor visual en el que se renderizan los gr�ficos, pero no poder dibujar ALDAGAI PUNTEROA
    SDL_Surface* superficie = NULL;
    //La superficie representa el �rea de la ventana donde se pueden dibujar im�genes, 
    //texturas y otros elementos gr�ficos ALDAGAI PUNTEROA

    Hasieratu(&lehioa, &superficie);
    // & zen aldagai hauen memoria informazioa bidali nahi da 

    PantailaAldaketa(lehioa, superficie);
    // & ze zen aldagaiaren edukia bakarrik aldatu eta ez memoria
    return 0;
}
