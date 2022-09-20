#pragma once

#include "Object.h"

#include <SFML/Graphics.hpp>
#include <filesystem>

class StaticMesh : public Object
{
public:
	StaticMesh() = default;
	~StaticMesh() = default;

	void setUpStaticMash(const std::string& nameObj, sf::Vector2i sizeObj);
private:
	std::string		nameObj;
	sf::Vector2i	sizeObj;
};

