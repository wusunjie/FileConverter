#include "AbstractConverter.h"

#include <dlfcn.h>
#include <stdio.h>

typedef AbstractConverter *(*GetFileConverterFunc)(void);

class FileConverterFactory
{
public:
	
	static AbstractConverter *GetConverter(const char *con)
	{
		char path[256] = {0};
		sprintf(path, "/lib/plugin/FileConverter.%s.so", con);
		void *handler = dlopen(path, RTLD_LAZY);
		if (handler) {
			GetFileConverterFunc func = (GetFileConverterFunc)dlsym(handler, "GetFileConverter");
			if (func) {
				return func();
			}
		}
		
		return NULL;
	}

private:
	FileConverterFactory(void);
	~FileConverterFactory(void);
};

int FileConvert(const char *con, const char *infile, OutputDevice *device)
{
	AbstractConverter *converter = FileConverterFactory::GetConverter(con);
	if (converter) {
		return converter->Convert(infile, device);
	}
	else {
		return -1;
	}
}
