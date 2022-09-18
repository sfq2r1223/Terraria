#pragma once

#include <SFML/Graphics.hpp>

class Pawn
{
public:
	Pawn() = default;
	~Pawn() = default;

	void setUpPawn(std::size_t hpPawn, float speed) noexcept;

	std::size_t getHpPawn() const noexcept;
	float getSpeed() const noexcept;

	void setHpPawn(const std::size_t newHpPawn) noexcept;
	void setSpeed(const float newSpeed) noexcept;
private:
	std::size_t		hpPawn = 0u;
	float			speed = 0.f;
};

