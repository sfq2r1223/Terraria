#include "Block.h"

void Block::setUpBlock(const path& texturePath, const std::string& nameObj, sf::Vector2i sizeObj, std::size_t massObj,
	bool hardnessObj, bool visuallyObj, std::size_t hp)
{
	setUpWorldObject(nameObj, sizeObj, massObj, hardnessObj, hp);

	loadFileBlock(texturePath);
}

void Block::loadFileBlock(const path& texturePath)
{
	if (!texture.loadFromFile(texturePath.string()))
		throw std::exception("ERROR: Block::loadFileBlock: failed loading file");

	spriteBlock.setTexture(texture);
}

void Block::setBlockID(const std::size_t blockID) noexcept { this->ID = blockID; }

sf::Texture& Block::getTexture() noexcept { return texture; }
sf::Sprite& Block::getSprite() noexcept { return spriteBlock; }
std::size_t Block::getBlockID() const noexcept { return ID; }