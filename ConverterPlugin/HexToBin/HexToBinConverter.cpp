#include "FileConverter.h"
#include "HexToBinConverter.h"

#include "../FileReader.h"


FILE_CONVERTER_API AbstractConverter *GetFileConverter(void)
{
	static HexToBinConverter converter;
	return &converter;
}

FILE_CONVERTER_LOCAL int HexToBinConverter::Convert(const char *infile, OutputDevice *device)
{
	(void)infile;
	(void)device;
	FileReader *reader = FileReaderFactory::GetFileReader();
	if (reader) {
		/* open, read, convert, write, close */
		return 0;
	}
	return -1;
}