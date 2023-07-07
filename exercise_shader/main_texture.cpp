#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <GLFW/glfw3.h>
#include <glad/glad.h>

int width, height, nrChannels;
unsigned char *data = stbi_load("container.jpg", &width, &height,
&nrChannels, 0);

unsigned int texture; //generate an texture ID
glGenTextures(1, &texture);
