#include "Object.h"

void Object::setUpObject(const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
	sf::Vector2f positionObj, bool hardnessObj, bool visuallyObj) noexcept
{
	this->nameObj =			nameObj;
	this->sizeObj =			sizeObj;
	this->massObj =		    massObj;
	this->hardnessObj =		hardnessObj;
	this->positionObj =		positionObj;
	this->visually =		visually;
}

void Object::setSize(const sf::Vector2i& newSize) noexcept { this->sizeObj = newSize; }
void Object::setMass(const std::size_t newMass) noexcept { this->massObj = newMass; }
void Object::setVisually(const bool newVisually) noexcept { this->visually = newVisually; }
void Object::setHardness(const bool newHardness) noexcept { this->hardnessObj = newHardness; }

sf::Vector2i Object::getSize() const noexcept { return sizeObj; }
std::size_t Object::getMass() const noexcept { return massObj; }
sf::Vector2f Object::getPosition() const noexcept { return positionObj; }
bool Object::getHardness() const noexcept { return hardnessObj; }
bool Object::getVisually() const noexcept { return visually; }