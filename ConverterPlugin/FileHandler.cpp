#include "FileHandler.h"

#define UNIX_FILE_SYSTEM

#ifdef UNIX_FILE_SYSTEM

class UnixFileHandler: public FileHandler
{
public:

	UnixFileHandler(void):fd(-1) {}
	
	int open(const char *path, int mode)
	{
		return 0;
	}

	int lseek(int offset, int whence)
	{
		return 0;
	}

	int read(char *buffer, int len)
	{
		return 0;
	}

	int write(const char *buffer, int len)
	{
		return 0;
	}
	
	int close(void)
	{
		return 0;
	}

private:

	int fd;
};

static UnixFileHandler FileHandlerInst;

#endif

FileHandler *FileHandlerFactory::GetFileHandler(void)
{
	return &FileHandlerInst;
}