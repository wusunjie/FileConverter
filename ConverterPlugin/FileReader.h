#ifndef _FILE_READER_H
#define _FILE_READER_H

#include "CommonDefs.h"

class FILE_CONVERTER_LOCAL FileReader
{
public:
	virtual ~FileReader(void) {}
	virtual int open(const char *path) = 0;
	virtual int read(char *buffer, int len) = 0;
	virtual int close(void) = 0;
};

class FILE_CONVERTER_LOCAL FileReaderFactory
{
public:
	static FileReader *GetFileReader(void);

private:
	FileReaderFactory(void);
	~FileReaderFactory(void);
};

#endif