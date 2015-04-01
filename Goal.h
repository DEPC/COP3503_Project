#include "Sprite.h"

class Goal: public Sprite{
protected:
	bool team;
	int score;
	Sprite fillGoal;
public:
	Goal(bool team, int width, int height) : Sprite(width, height){
		this->team = team;
		if (team){
			Sprite s(width / 10, height / 10);
			s.Load("lib/lightGreen");
			fillGoal = s;
		}
		else{
			Sprite s(width / 10, height / 10);
			s.Load("lib/lightPink");
			fillGoal = s;
		}
	}
	void incrementScore(bool hasBall){
		if(hasBall){
			score++;
			if(score % 10 == 1){
				Sprite::Draw(this->surface, fillGoal, 0, this->height/10 * (score / 10));
			}
			else{
				Sprite::Draw(this->surface, fillGoal, this->width/10 * (score % 10), this->height * (score / 10));
			}
		}
		
	}

};
