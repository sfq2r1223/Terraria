#pragma once

#include "Chunk.h"
#include "Block.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class Map
{
public:
	Map() = default;
	~Map() = default;

	void setUpMap(const sf::Vector2i& sizeMap, std::size_t numberOfDrawnChunks);
private:
	void mapInit();
	void createVectorOfChunks();
	void setVectorSize() noexcept;
	void initGround();
	void getOverStaticMesh(sf::Vector2u counter);
private:
	sf::Vector2i							sizeMap;
	std::size_t								numderOfDrawnChunks = 0u;
	std::vector<std::vector<Chunk>>		    mapOfChunks;
	const std::size_t						sizeChunk = 15;
};

