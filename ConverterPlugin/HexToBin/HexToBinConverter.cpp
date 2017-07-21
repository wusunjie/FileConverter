#include "HexToBinConverter.h"
#include "../FileHandler.h"


FILE_CONVERTER_API AbstractConverter *GetFileConverter(void)
{
	static HexToBinConverter converter;
	return &converter;
}

int HexToBinConverter::Convert(const char *infile, const char *outfile)
{
	(void)infile;
	(void)outfile;
	FileHandler *file = FileHandlerFactory::GetFileHandler();
	if (file) {
		/* open, read, convert, write, close */
		return 0;
	}
	return -1;
}