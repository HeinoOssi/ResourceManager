#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <stdio.h>
#include <string>
#include <vector>
/*
ResourceManager, can be used to load textures for openGL projects
*/
class ResourceManager
{
public:
	// Load resource, returns true if ok.
	bool loadResource(const char * filename, int width, int height);
	bool loadPNG(const std::string filename, int &width, int &height);
	bool unloadResource(unsigned int txtr);


	ResourceManager();
	~ResourceManager();

private:
	unsigned int texture;

	// Vector to hold resource id's
	std::vector<unsigned int> resVector;


};

#endif