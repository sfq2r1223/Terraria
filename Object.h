#pragma once

#include <SFML/Graphics.hpp>

class Object
{
public:
	Object() = default;
	~Object() = default;

	void setUpObject(const std::string& nameObj, sf::Vector2i& sizeObj, std::size_t massObj,
		sf::Vector2f positionObj, bool hardness, bool visuallyObj) noexcept;

	void setSize(const sf::Vector2i& newSize) noexcept;
	void setMass(const std::size_t newMass) noexcept;
	void setPosition(const sf::Vector2f& newPosition) noexcept;
	void setHardness(const bool newHardness) noexcept;
	void setVisually(const bool newVisually) noexcept;

	sf::Vector2i getSize() const noexcept;
	std::size_t getMass() const noexcept;
	sf::Vector2f getPosition() const noexcept;
	bool getHardness() const noexcept;
	bool getVisually() const noexcept;
private:
	std::string			nameObj;
	sf::Vector2i		sizeObj;
	std::size_t		    massObj = 0u;
	sf::Vector2f		positionObj;
	bool				hardnessObj = true;
	bool				visually = true;
};

