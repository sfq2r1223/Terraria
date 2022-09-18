#pragma once

#include <SFML/Graphics.hpp>
#include <filesystem>
#include <string>

class Program
{
public:
	Program() = default;
	~Program() = default;

	void createWindow(const std::string& nameWindow,const sf::Vector2i& sizeWindow);
	void activateWindow();
private:
	void eventHandling();
	void draw();
private:
	sf::RenderWindow	  window;
	sf::Vector2i		  sizeWindow;
};

