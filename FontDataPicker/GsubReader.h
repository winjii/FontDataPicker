/*#pragma once
#include <ft2build.h>
#include <map>
#include FT_FREETYPE_H
#include FT_OPENTYPE_VALIDATE_H
#include "Util.h"

namespace NoNameEditor {
namespace Font {


using GlyphIndex = uint16;
class GsubReader {
private:

	//���L���͎����Ȃ�
	FT_Face _face;

	std::map<GlyphIndex, GlyphIndex> _vertSubstitution;

public:

	GsubReader(FT_Face face);

	GlyphIndex vertSubstitute(GlyphIndex gid);

};


}
}*/