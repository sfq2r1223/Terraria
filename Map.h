#pragma once

#include "Chunk.h"
#include "Block.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class Map final
{
public:
	Map() = default;
	~Map() = default;

	void setUpMap(const sf::Vector2i& sizeMap, std::size_t numberOfDrawnChunks);
	std::size_t getIDTouchingBlock() const noexcept;
	void setVectorOfBlocks();
private:
	void setID();
	void mapInit();
	void setVectorOfChunks();
	void setVectorsSize() noexcept;
	void setGroundBlocks();
	//void getOverStaticMesh(sf::Vector2u counter);
private:
	sf::Vector2i								sizeMap;
	std::size_t								numderOfDrawnChunks = 2u;
	std::vector<std::vector<Chunk>>		   			        mapOfChunks;
	std::vector<std::vector<Block>>						mapOfBlocks;
	const std::size_t							sizeChunk = 15;
};

