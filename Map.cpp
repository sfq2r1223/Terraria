#include "Map.h"

void Map::setUpMap(const sf::Vector2i& sizeMap, std::size_t numberOfDrawnChunks)
{
	this->sizeMap = sizeMap;
	this->numderOfDrawnChunks = numberOfDrawnChunks;

	mapInit();
}

void Map::mapInit()
{
	createVectorOfChunks();
	initGround();
}

void Map::initGround()
{
	for (std::size_t i = 0u; i < numderOfDrawnChunks; ++i)//замутити так шоб тільки пів карти(нижня часть) була в блоках землі
		for (std::size_t j = 0u; j < numderOfDrawnChunks; ++j)
			getOverStaticMesh(sf::Vector2u(i, j));
}

void Map::getOverStaticMesh(sf::Vector2u counter)
{
	for (std::size_t i = 0; i < sizeChunk / 2; ++i)
		for (std::size_t j = 0; j < sizeChunk; ++j)
		{
			Block blockGround;
			blockGround.setUpBlock("", "ground", sf::Vector2i(10, 10), 5, true, true, 5);//*
			static auto temp = mapOfChunks.at(counter.x).at(counter.y);
			temp.getVectorChunk()->at(i).at(j) = blockGround;//*
		}

}

void Map::createVectorOfChunks()
{
	setVectorSize();
	for (std::size_t i = 0; i < numderOfDrawnChunks; ++i)
		for (std::size_t j = 0; j < numderOfDrawnChunks; ++j)
		{
			Chunk chunk;
			chunk.setUpChunk("", sizeChunk, sf::Vector2f(0, 0));//*
			mapOfChunks.at(i).at(j) = chunk;
		}
}

void Map::setVectorSize() noexcept
{
	mapOfChunks.resize(numderOfDrawnChunks);
	for (std::size_t i = 0; i < numderOfDrawnChunks; ++i)
		mapOfChunks.at(i).resize(numderOfDrawnChunks);
}