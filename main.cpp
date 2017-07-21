#include "FileConverter.h"

class FileOutputDevice: public OutputDevice
{
public:
    FileOutputDevice(const char *path)
    :m_path(path) {}

    int Open(void)
    {
        return 0;
    }

    int Write(const char *buffer, int len)
    {
        return 0;
    }

    int Seek(int offset)
    {
        return 0;
    }

    int Close(void)
    {
        return 0;
    }

private:

    const char *m_path;
}

/* FileConvert HexToBin xxx.hex yyy.bin */
int main(int argc, char argv[])
{
    FileOutputDevice device(argv[3]);
    return FileConvert(argv[1], argv[2], &device);
}