#pragma once

#include "Pawn.h"
#include "Actor.h"
#include "StaticMesh.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class Chunk
{
	typedef std::vector<std::vector<StaticMesh>> ArrayChunk;
public:
	Chunk() = default;
	~Chunk() = default;

	void setUpChunk(const std::filesystem::path& texture, const std::size_t sizeChunk, 
		const sf::Vector2f& playerPosition);

	std::size_t getSizeChunk() const noexcept;
	ArrayChunk& getVectorChunk() noexcept;
private:
	void setTheSizeChunk() noexcept;
	void createVectorFromStaticMetch();
private:
	std::size_t			sizeChunk = 0u;
	sf::Vector2f		playerPosition;

	ArrayChunk	chunk;
};

