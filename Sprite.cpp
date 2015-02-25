#include <SDL/SDL.h>
#include "Sprite.h"
#include <iostream>

//Constructor
Sprite::Sprite(){
}
//Overload this method to create rectagles
SDL_Surface* Sprite::Load(char* File){
	//Create two temporary pointers to surfaces
	SDL_Surface* temp = NULL;
	SDL_Surface* optimized = NULL;


	//Make sure that the file exists
	if((temp = SDL_LoadBMP(File)) == NULL){
		std::cout << "The file path does not exist" << std::endl;
		return NULL;
	}

	//convert the image to an optimize form 
	optimized = SDL_DisplayFormatAlpha(temp);

	//free temp
	SDL_FreeSurface(temp);

	return optimized;
}

bool Sprite::Draw(SDL_Surface* dest, SDL_Surface* src, int x, int y)
{
  if(dest == NULL || src == NULL)
   {
			  return false;
   }

   SDL_Rect  destR;

   destR.x = x;
   destR.y = y;

   SDL_BlitSurface(src, NULL, dest, &destR);
   
	return true;
}

