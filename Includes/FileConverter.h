#ifndef _FILE_CONVERTER_H
#define _FILE_CONVERTER_H

class OutputDevice
{
public:
	virtual ~OutputDevice(void) {}
	virtual int Open(void) = 0;
	virtual int Write(const char *buffer, int len) = 0;
	virtual int Seek(int offset) = 0;
	virtual int Close(void) = 0;
};

extern int FileConvert(const char *con, const char *infile, OutputDevice *device);

#endif