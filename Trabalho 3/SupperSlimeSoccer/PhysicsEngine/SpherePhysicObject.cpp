#include "SpherePhysicObject.h"

using namespace cggl;

namespace CGPhysicsEngine
{

SpherePhysicObject::SpherePhysicObject(Vector3 position, float mass, float radius) : PhysicEnabledObject(position, mass)
{
	_radius = radius;
}


SpherePhysicObject::~SpherePhysicObject(void)
{
}

float SpherePhysicObject::GetRadius()
{
	return _radius;
}

}