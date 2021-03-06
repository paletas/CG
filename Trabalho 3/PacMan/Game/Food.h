#ifndef _PACMAN_FOOD_
#define _PACMAN_FOOD_

#include "GameObject.h"
#include "Effect.h"
#include "Entity.h"

class Food : public GameObject
{
private:
	bool hasBeenEaten;

protected:
	virtual Effect& GetEffect();

	void OnCollision(Entity& collisioner);
	
public:
	Food(ObjectModel * model, BoardCoordinates coords);
	~Food(void);

	void SetEaten() { hasBeenEaten = true; }
	bool HasBeenEaten() { return hasBeenEaten; }

	void Draw();
};

#endif