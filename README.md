�t�H���g�����̃f�[�^��ǂ݁A�c�����p�O���t�u�����s�������������������́B
GsubReader�N���X�Q�ƁB

FreeType�̃r���h���@(VS2017�̏ꍇ)
- �v���W�F�N�g�t�@�C��"builds/windows/vc2010/freetype.vcxproj"��VS�ŊJ��


FT_OpenType_Validate()���g����悤�ɁA�Y�����W���[����ǉ�����

FreeType�ɂ̓I�v�V�����Ŏg���郂�W���[���Ȃ���̂��p�ӂ���Ă���炵���BFT_OpenType_Validate()�̓t�H���g��GSUB�e�[�u�����Q�Ƃ��邽�߂Ɏg���B


- �\�����[�V�����G�N�X�v���[���[����ASource Files/FT_MODULES/ �Ƀt�@�C��"src/otvalid/otvalid.c"��ǉ�


- include\freetype\config\ftmodule.h ���J��
FT_USE_MODULE( FT_Module_Class, otv_module_class )
- ��ǉ�


FreeType�̃o�O���C��

�P�ƒu���^�C�v�Ńt�H�[�}�b�g��1��Lookup�e�[�u���́A�u����̃O���tID�� (�u���O�̃O���tID)+(����) �Ƃ��Ďw�肷�邪�A���̍ۈÖٓI��2^16=65536��mod�����d�l�ɂȂ��Ă���B������FreeType(2.8.1���_)�́A���̌v�Z���s�����ɂ�����l�����Ă��炸�A�v�Z���ʂ��͂ݏo�����r�[�ɖ����ȃf�[�^�Ƃ��ď������Ă��܂�GSUB�e�[�u�����Q�Ƃ����Ă���Ȃ��B
������C������B

- src\otvalid\otvgsub.c ���J���A74�s�ڂ�������R�����g�A�E�g
//if ( idx < 0 )
//  FT_INVALID_DATA;

//idx = (FT_Long)otv_Coverage_get_last( Coverage ) + DeltaGlyphID;
//if ( (FT_UInt)idx >= otvalid->glyph_count )
//  FT_INVALID_DATA;
�Q�l���
- Microsoft Typography
- https://www.microsoft.com/en-us/Typography/OpenTypeSpecification.aspx
- �t�H���g�����̑��̏�񂪗~���������A�T�v�𒲂ׂ���A��������Ȃ���撣���ăp�[�X���Ă��������ɂȂ�Ǝv���܂�
