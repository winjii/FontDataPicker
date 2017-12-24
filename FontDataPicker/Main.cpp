#include <iostream>
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_OPENTYPE_VALIDATE_H

int main() {
	FT_Library lib;
	int error = FT_Init_FreeType(&lib);
	std::cout << error << std::endl;

	FT_Face face;
	error = FT_New_Face(lib, "SourceHanSerif-Regular.otf", 0, &face);
	std::cout << error << std::endl;

	FT_Bytes baseTable, gdefTable, gposTable, gsubTable, jstfTable;
	error = FT_OpenType_Validate(face, FT_VALIDATE_GSUB, &baseTable, &gdefTable, &gposTable, &gsubTable, &jstfTable);
	std::cout << error << std::endl;
	return 0;
}