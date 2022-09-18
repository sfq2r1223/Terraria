#include "StaticMesh.h"

void StaticMesh::setUpStaticMash(const std::filesystem::path& texturePath, const sf::Vector2i& size)
{
	this->size = size;

	loadFile(texturePath);
}

void StaticMesh::loadFile(const std::filesystem::path& texturePath)
{
	if (!texture.loadFromFile(texturePath.string()))
		throw std::exception("ERROR: StaticMesh::loadFile: failed loading file");

	
}