#include "Map.h"

void Map::setUpMap(const sf::Vector2i& sizeMap, std::size_t numberOfDrawnChunks)
{
	this->sizeMap = sizeMap;
	this->numderOfDrawnChunks = numberOfDrawnChunks;

	mapInit();
}

void Map::mapInit()
{
	setVectorsSize();
	setVectorOfChunks();
	setVectorOfBlocks();
}

void Map::setVectorOfChunks()
{
	for (std::size_t i = 0; i < numderOfDrawnChunks; ++i)
		for (std::size_t j = 0; j < numderOfDrawnChunks; ++j)
		{
			Chunk chunk;
			chunk.setUpChunk("", sizeChunk, sf::Vector2f(0, 0));//*
			mapOfChunks.at(i).at(j) = chunk;
		}
}

void Map::setVectorOfBlocks()
{
	setGroundBlocks();
	setID();
}

std::size_t Map::getIDTouchingBlock() const noexcept
{
	sf::Sprite playerSprite;
	for (std::size_t i = 0; i < mapOfBlocks.size(); ++i)
		for (std::size_t j = 0; j < mapOfBlocks.at(i).size(); ++j)
		{
			auto temp = mapOfBlocks.at(i).at(j);
			if (playerSprite.getPosition() == temp.getSprite().getPosition())
				return temp.getBlockID();
		}
}

void Map::setGroundBlocks()
{
	static sf::Vector2i sizeArrayGround;
	sizeArrayGround.y = mapOfBlocks.size() / 3;
	sizeArrayGround.x = mapOfBlocks.at(0).size();

	for (std::size_t i = 0; i < mapOfBlocks.size(); ++i)
		for (std::size_t j = 0; j < mapOfBlocks.at(i).size(); ++j)
		{
			Block ground;
			ground.setUpBlock("", "ground", sf::Vector2i(10, 10), 5, true, true, 5);//*
			mapOfBlocks.at(i).at(j) = ground;
		}
}

void Map::setID()
{
	static std::size_t id = 0;
	for (std::size_t i = 0; i < mapOfBlocks.size(); ++i)
		for (std::size_t j = 0; j < mapOfBlocks.at(i).size(); ++j)
		{
			mapOfBlocks.at(i).at(j).setBlockID(id);
			++id;
		}
}

void Map::setVectorsSize() noexcept
{
	//set size mapOfChunk
	mapOfChunks.resize(numderOfDrawnChunks);
	for (std::size_t i = 0; i < numderOfDrawnChunks; ++i)
		mapOfChunks.at(i).resize(numderOfDrawnChunks);

	static std::size_t numberBlocksX = mapOfChunks.at(0).size();
	static std::size_t numberBlocksY = mapOfChunks.size();

	//set size mapOfBlock
	mapOfBlocks.resize(numberBlocksY);
	for (std::size_t i = 0; i < numberBlocksY; ++i)
		mapOfBlocks.at(i).resize(numberBlocksX);
	
}