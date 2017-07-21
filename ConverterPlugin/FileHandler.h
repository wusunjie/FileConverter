#ifndef _FILE_HANDLER_H
#define _FILE_HANDLER_H

class FileHandler
{
public:
	virtual ~FileHandler(void) {}
	virtual int open(const char *path, int mode) = 0;
	virtual int read(char *buffer, int len) = 0;
	virtual int write(const char *buffer, int len) = 0;
	virtual int close(void) = 0;
};

class FileHandlerFactory
{
public:
	static FileHandler *GetFileHandler(void);

private:
	FileHandlerFactory(void);
	~FileHandlerFactory(void);
};

#endif