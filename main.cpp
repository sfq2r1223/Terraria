#include "Program.h"


#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	try
	{
		Program program;
		program.createWindow("Terraria", sf::Vector2i(1280, 720));
		program.activateWindow();
	}
	catch (const std::exception& error)
	{
		std::cout << "--------------" << std::endl;
		std::cout << error.what() << std::endl;
		std::cout << "--------------" << std::endl;
	}


	return 0;
}