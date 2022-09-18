#include "Program.h"


void Program::createWindow(const std::string& nameWindow,const  sf::Vector2i& sizeWindow)
{
	this->sizeWindow = sizeWindow;

	window.create(sf::VideoMode(sizeWindow.x, sizeWindow.y), nameWindow);
}

void Program::activateWindow()
{
	while (window.isOpen())
	{
		eventHandling();
		draw();
	}
}

void Program::eventHandling()
{
	sf::Event event;
	while (window.pollEvent(event))
		if (event.type == sf::Event::Closed)
			window.close();
}

void Program::draw()
{
	window.clear(sf::Color::White);
	window.display();
}