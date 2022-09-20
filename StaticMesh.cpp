#include "StaticMesh.h"

void StaticMesh::setUpStaticMash(const std::string& nameObj, sf::Vector2i sizeObj)
{
	setUpObject(sizeObj, false, false);

	this->sizeObj = sizeObj;
	this->nameObj = nameObj;
}