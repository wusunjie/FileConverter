#include "FileReader.h"


#ifdef UNIX_FILE_SYSTEM

class FILE_CONVERTER_LOCAL UnixFileReader: public FileReader
{
public:

	UnixFileReader(void):fd(-1) {}

	int Open(const char *path)
	{
		return 0;
	}

	int Read(char *buffer, int len)
	{
		return 0;
	}

	int Close(void)
	{
		return 0;
	}

private:

	int fd;
};

static UnixFileHandler FileReaderInst;

#endif

FILE_CONVERTER_LOCAL FileReader *FileReaderFactory::GetFileReader(void)
{
	return &FileReaderInst;
}