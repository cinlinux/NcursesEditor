// file i/o

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#ifndef FILEIO_H
#define FILEIO_H

typedef struct fileio
{
    int fd;
    char* path;
    void* buf;
    ssize_t sizeOfBuf;
    off_t* cur;
    off_t* oldCur;
}FileIO;

off_t* OpenFile(FileIO* fio, int flags);
off_t* WriteFile(FileIO* fio);
off_t* ReadFile(FileIO* fio);

#endif
