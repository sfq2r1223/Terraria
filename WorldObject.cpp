#include "WorldObject.h"

void WorldObject::setUpWorldObject(const std::string& nameObj,sf::Vector2i sizeObj, std::size_t massObj,
	bool hardnessObj, std::size_t hp) noexcept
{
	setUpObject(sizeObj, hardnessObj, true);

	this->hp =			hp;
	this->onGround =	onGround;
	this->massObj =		massObj;
}

void WorldObject::gravity() noexcept
{
	
}

std::size_t WorldObject::getHp() const noexcept { return hp; }
bool WorldObject::getOnGround() const noexcept { return onGround; }

void WorldObject::setHp(const std::size_t newHp) noexcept { this->hp = newHp; }
void WorldObject::setOnGround(const bool newOnGround) noexcept { this->onGround = newOnGround; }
