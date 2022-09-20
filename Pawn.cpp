#include "Pawn.h"

void Pawn::setUpPawn(std::size_t hpPawn, float speed, const path& texture,
	const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
	sf::Vector2f positionObj, bool hardnessObj, bool visuallyObj,
	bool onGround)
{
	setUpWorldObject(nameObj, sizeObj, massObj, hardnessObj, hpPawn);

	this->hpPawn =	 hpPawn;
	this->speed =	 speed;

	loadFilePawn(texture);
}

void Pawn::loadFilePawn(const path& texture)
{
	if (texturePawn.loadFromFile(texture.string()))
		throw std::exception("ERROR: Pawn::loadFile: failed loading file");
}

void Pawn::setHpPawn(const std::size_t newHpPawn) noexcept { this->hpPawn = newHpPawn; setHp(newHpPawn); }
void Pawn::setSpeed(const float newSpeed) noexcept { this->speed = speed; setSpeed(newSpeed); }

std::size_t Pawn::getHpPawn() const noexcept { return hpPawn; }
float Pawn::getSpeed() const noexcept { return speed; }