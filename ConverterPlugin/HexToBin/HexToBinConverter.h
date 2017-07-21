#ifndef _HEXTOBIN_CONVERTER_H
#define _HEXTOBIN_CONVERTER_H

#include "AbstractConverter.h"

class HexToBinConverter: public AbstractConverter
{
public:

	int Convert(const char *infile, const char *outfile);
};

#endif