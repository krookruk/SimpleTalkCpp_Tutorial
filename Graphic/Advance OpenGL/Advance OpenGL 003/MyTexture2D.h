#pragma once

#include "MyColor.h"

#pragma comment(lib, "libpng16.lib")
#pragma comment(lib, "zlib.lib")

class MyTexture2D {
public:

	~MyTexture2D() {
		destroy();
	}

	void create(int width, int height, const MyColor4b* pixels);
	void destroy();

	void subImage(int x, int y, int width, int height, const MyColor4b* pixels);

	void bind() const;
	void unbind() const;

	bool valid() const { return m_tex != 0; }
	int width () const { return m_width; }
	int height() const { return m_height; }

	void loadPngFile(const char* filename, bool mulAlpha);

private:
	GLuint m_tex = 0;
	int m_width = 0;
	int m_height = 0;
};
