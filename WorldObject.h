#pragma once

#include "Object.h"

#include <SFML/Graphics.hpp>

class WorldObject : public Object
{
public:
	WorldObject() = default;
	~WorldObject() = default;

	void setUpWorldObject(const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
		sf::Vector2f positionObj, bool hardnessObj, bool visuallyObj, std::size_t hp, float speed,
		bool onGround) noexcept;
	void gravity() noexcept;

	void setHp(const std::size_t newHp) noexcept;
	void setSpeed(const float newSpeed) noexcept;
	void setOnGround(const bool newOnGround) noexcept;

	std::size_t getHp() const noexcept;
	float getSpeed() const noexcept;
	bool getOnGround() const noexcept;
private:
	std::size_t		hp;
	float			speed;
	bool			onGround;
};

