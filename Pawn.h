#pragma once

#include "WorldObject.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class Pawn : public WorldObject
{
private:
	typedef std::filesystem::path	path;
public:
	Pawn() = default;
	~Pawn() = default;

	void setUpPawn(std::size_t hpPawn, float speed, const path& texture,
		const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
		sf::Vector2f positionObj, bool hardnessObj, bool visuallyObj,
		bool onGround);
	void loadFilePawn(const path& path);


	std::size_t getHpPawn() const noexcept;
	float getSpeed() const noexcept;

	void setHpPawn(const std::size_t newHpPawn) noexcept;
	void setSpeed(const float newSpeed) noexcept;
private:
	std::size_t		hpPawn = 0u;
	float			speed = 0.f;
	sf::Texture		texturePawn;
};

