#include "ResourceManager.h"

bool ResourceManager::loadResource(const char * filename, int width, int height) {
	unsigned char *data;
	
	FILE *file;
	file = fopen(filename, "rb");

	if (file == NULL) {
		// Cant find the file
		std::cout << "Error loading file " << filename << "." << std::endl;
		return false;
	}

	data = (unsigned char *)malloc(width * height * 3);
	fread(data, width*height * 3, 1, file);
	fclose(file);

	// TODO: Open gl generate textures

	free(data);

	resVector.push_back(texture);
	return true;


}

bool ResourceManager::loadPNG(const std::string filename, int &width, int &height) {

}

bool ResourceManager::unloadResource(unsigned int txtr) {
	// glDeleteTextures(1, &txtr);

	return true;
}

ResourceManager::ResourceManager()
{
}


ResourceManager::~ResourceManager()
{
}
