#include "Pawn.h"

void Pawn::setUpPawn(std::size_t hpPawn, float speed) noexcept
{
	this->hpPawn = hpPawn;
	this->speed = speed;
}

void Pawn::setHpPawn(const std::size_t newHpPawn) noexcept { this->hpPawn = newHpPawn; }
void Pawn::setSpeed(const float newSpeed) noexcept { this->speed = speed; }

std::size_t Pawn::getHpPawn() const noexcept { return hpPawn; }
float Pawn::getSpeed() const noexcept { return speed; }