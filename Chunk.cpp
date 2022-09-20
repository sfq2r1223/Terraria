#include "Chunk.h"

void Chunk::setUpChunk(const std::filesystem::path& texture, const std::size_t sizeChunk,
	const sf::Vector2f& playerPosition)
{
	this->sizeChunk = sizeChunk;
	this->playerPosition = playerPosition;

	setTheSizeChunk();
	createVectorFromStaticMetch();
	
}

void Chunk::createVectorFromStaticMetch()
{
	for (std::size_t i = 0; i < sizeChunk; ++i)
		for (std::size_t j = 0; j < sizeChunk; ++j)
		{
			StaticMesh staticMesh;
			staticMesh.setUpStaticMash("square", sf::Vector2i(10, 10)); // to redo
			chunk.at(i).at(j) = staticMesh;
		}
}

void Chunk::setTheSizeChunk() noexcept
{
	chunk.resize(sizeChunk);
	for (std::size_t i = 0; i < sizeChunk; ++i)
		chunk.at(i).resize(sizeChunk);
}

std::size_t Chunk::getSizeChunk() const noexcept { return sizeChunk;  }
Chunk::ArrayChunk* Chunk::getVectorChunk() const noexcept { return chunk; }