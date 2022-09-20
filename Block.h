#pragma once

#include "WorldObject.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class Block : public WorldObject
{
private:
	typedef	std::filesystem::path	path;
public:
	Block() = default;
	~Block() = default;

	void setUpBlock(const path& texturePath, const std::string& nameObj, sf::Vector2i sizeObj, std::size_t massObj,
		bool hardnessObj, bool visuallyObj, std::size_t hp);

	void setBlockID(const std::size_t blockID) noexcept;

	sf::Texture& getTexture() noexcept;
	sf::Sprite& getSprite() noexcept;
	std::size_t getBlockID() const noexcept;
private:
	void loadFileBlock(const path& texturePath);
private:
	sf::Texture		texture;
	sf::Sprite		spriteBlock;
	std::size_t		ID = 0u;
};

