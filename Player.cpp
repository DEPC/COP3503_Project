#include <SDL/SDL.h>
#include "Player.h"
<<<<<<< HEAD
#include "Constants.h"
=======
<<<<<<< HEAD
#include "Constants.h"
=======
>>>>>>> 9a289092e58439612a755c1c6e6377699ab95fa4
>>>>>>> 4246eb03f323f5da4c103d196e69f53bf45dff2b

//Constructor
Player::Player(int x, int y, SDL_Surface* surface){
	//Set  values for x,y and set default movement to not move
	this->x = x;
<<<<<<< HEAD
	this->y =y;

=======
<<<<<<< HEAD
	this->y =y;
=======
	this ->y =y;
>>>>>>> 9a289092e58439612a755c1c6e6377699ab95fa4
>>>>>>> 4246eb03f323f5da4c103d196e69f53bf45dff2b

	mUp=false;
	mDown=false;
	mLeft=false;
	mRight=false;

	this-> surface = surface;
}

//Get the X and Y position of the player
int Player::getX(){
	return this->x;
}

int Player::getY(){
	return this->y;
}

//Return the surface that represents the player
SDL_Surface* Player::getSurface(){
	return this->surface;
}

//Change boolean values of whether or not to move in that direction based on key input
void Player::moveUp(bool m){
	mUp = m;
}

void Player::moveDown(bool m){
	mDown = m;
}

void Player::moveLeft(bool m){
	mLeft = m;
}

void Player::moveRight(bool m){
	mRight =m;
}

//Once per loop this is called to move in the directions it's supposed to
<<<<<<< HEAD

void Player::move(float dt){

	if(mDown){
		this->y+= Constants::SPEED_Y * dt;
=======
<<<<<<< HEAD
void Player::move(float dt){

	if(mDown){
		this->y+=Constants::SPEED_Y * dt;
		std::cout<<Constants::SPEED_Y * dt<<std::endl;
	}
	else if(mUp){
		this->y-=Constants::SPEED_Y * dt;
		std::cout<<Constants::SPEED_Y * dt<<std::endl;
	}
	if(mRight){
		std::cout<<Constants::SPEED_X * dt<<std::endl;
		this -> x += Constants::SPEED_X * dt;
	}
	else if(mLeft){
		this->x-= Constants::SPEED_X * dt;
		std::cout<<Constants::SPEED_X * dt<<std::endl;

	}

=======
void Player::move(){
	if(mRight){
		this->x+=1;
>>>>>>> 4246eb03f323f5da4c103d196e69f53bf45dff2b
	}
	else if(mUp){
		this->y-=Constants::SPEED_Y * dt;
	}
	if(mRight){
		this -> x += Constants::SPEED_X * dt;
	}
	else if(mLeft){
		this->x-= Constants::SPEED_X * dt;
	}
>>>>>>> 9a289092e58439612a755c1c6e6377699ab95fa4
}
