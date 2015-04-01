#include "SDL/SDL.h"
#include "Sprite.h"
#include "Player.h"

class Ball : public Sprite{
	double speed;
	Player captor;

public:
	Ball(double speed, int width, int height) : Sprite(width, height){
		this->speed = speed;

	}
	void move(){
		//todo: implement
	}
	void getcaptures(Player capture){

	}

	void getshot(double theta){
		//todo: implement
	}
};
