#pragma once

#include <SFML/Graphics.hpp>

class Object
{
public:
	Object() = default;
	~Object() = default;

	void setUpObject(const sf::Vector2i& sizeObj, bool hardness, bool visuallyObj) noexcept;

	void setSize(const sf::Vector2i& newSize) noexcept;
	void setHardness(const bool newHardness) noexcept;
	void setVisually(const bool newVisually) noexcept;

	sf::Vector2i getSize() const noexcept;
	bool getHardness() const noexcept;
	bool getVisually() const noexcept;
private:
	std::string			nameObj;
	sf::Vector2i		sizeObj;
	bool				hardnessObj = false;
	bool				visuallyObj = false;
};

