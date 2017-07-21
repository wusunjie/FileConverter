#ifndef _ABSTRACT_CONVERTER_H
#define _ABSTRACT_CONVERTER_H

#include "CommonDefs.h"

class AbstractConverter
{
public:
	virtual ~AbstractConverter(void) {}
	virtual int Convert(const char *infile, const char *outfile) = 0;
};

COMMON_EXTERN_C_BEGIN

extern FILE_CONVERTER_API AbstractConverter *GetFileConverter(void);

COMMON_EXTERN_C_END

#endif