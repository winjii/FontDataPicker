#include <iostream>
#include <ft2build.h>
#include FT_FREETYPE_H

int main() {
	FT_Library lib;
	int error = FT_Init_FreeType(&lib);
	std::cout << error << std::endl;

	FT_Face face;
	error = FT_New_Face(lib, "SourceHanSerif-Regular.otf", 0, &face);
	std::cout << error << std::endl;

	return 0;
}