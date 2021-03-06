#ifndef _PACMAN_SPECIALFOOD_
#define _PACMAN_SPECIALFOOD_

#include "Food.h"

#include <cggl\MathUtils.h>

class SpecialFood : public Food
{
protected:
	Effect& GetEffect();

public:
	SpecialFood(ObjectModel * model, BoardCoordinates& coords);
	~SpecialFood(void);

};

#endif