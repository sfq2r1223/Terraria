#pragma once

#include <SFML/Graphics.hpp>
#include <filesystem>

class StaticMesh
{
public:
	StaticMesh() = default;
	~StaticMesh() = default;

	void setUpStaticMash(const std::filesystem::path& texturePath, const sf::Vector2i& size);
	void loadFile(const std::filesystem::path& texturePath);
private:
	sf::Vector2i		size;
	sf::Texture			texture;
};

