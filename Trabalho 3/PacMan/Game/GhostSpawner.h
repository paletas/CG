#ifndef _PACMAN_GHOSTSPAWNER_
#define _PACMAN_GHOSTSPAWNER_

#include "gameobject.h"

class GhostSpawner :
	public GameObject
{
protected:
	void DoDraw() {}

public:
	GhostSpawner(ObjectModel& model, BoardCoordinates& coords);
	~GhostSpawner(void);

};

#endif
