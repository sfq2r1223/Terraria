#include "WorldObject.h"

void WorldObject::setUpWorldObject(const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
	sf::Vector2f positionObj, bool hardnessObj, bool visuallyObj, std::size_t hp, float speed, 
	bool onGround) noexcept
{
	setUpObject(nameObj, sizeObj, massObj, positionObj, hardnessObj, visuallyObj);

	this->hp =			hp;
	this->speed =		speed;
	this->onGround =	onGround;
}

void WorldObject::gravity() noexcept
{
	
}

std::size_t WorldObject::getHp() const noexcept { return hp; }
float WorldObject::getSpeed() const noexcept { return speed; }
bool WorldObject::getOnGround() const noexcept { return onGround; }

void WorldObject::setHp(const std::size_t newHp) noexcept { this->hp = newHp; }
void WorldObject::setSpeed(const float newSpeed) noexcept { this->speed = speed; }
void WorldObject::setOnGround(const bool newOnGround) noexcept { this->onGround = newOnGround; }
