#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include<glad/glad.h>
#include<stb/stb_image.h>

#include"shaderClass.h"

class Texture
{
public:

	GLuint ID;
	GLuint unit;
	const char* type;

	Texture(const char* image, const char* texType, GLuint slot);

	void texUnit(Shader& shader, const char* uniform, GLuint unit);

	void Bind();

	void Unbind();

	void Delete();
};
#endif