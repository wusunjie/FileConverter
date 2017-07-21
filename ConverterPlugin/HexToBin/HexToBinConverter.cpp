#include "HexToBinConverter.h"
#include "../FileHandler.h"

#include <new>

FILE_CONVERTER_API AbstractConverter *GetFileConverter(void)
{
	return new (std::nothrow)HexToBinConverter();
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