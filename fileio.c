#include "fileio.h"

#include <errno.h>
#include <stdio.h>


off_t* OpenFile(FileIO* fio, int flags)
{
    char err[255];
    if( fio == NULL ){
        errno = EFAULT;
        sprintf(err, "OpenFile::%s", (*fio).path); 
        perror(err);
        return errno;
    }
    else if( *(*fio).path == NULL 
           || (*fio).path == NULL)
    {
        errno = EFAULT;
        sprintf(err, "OpenFile:: path is NULL"); 
        perror(err);
        return errno;
    }

    if( (*fio).fd = open( (*fio).path, flags) == -1 )
    {
        switch( errno )
        {
            case ENOENT:
                (*fio).fd = open( (*fio).path
                                , O_CREAT | O_APPEND
                                , S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_ISUID | S_ISGID);
                break;
            default:
                sprintf(err, "OpenFile::%s", (*fio).path); 
                perror(err);
                return errno;
        }
    }
    return (*fio).oldCur;// = lseek( (*fio).fd, 0, SEEK_CUR);
}

off_t* WriteFile(FileIO* fio)
{
    OpenFile(&fio, O_APPEND);
    ssize_t sizeIsRed = 0;

//    if ( sizeIsRed = write( (*fio).fd, (*fio).buf, (*fio).sizeOfBuf) == -1 )
//    {
  //      return errno;
  //  }
    
   // *(*fio).cur = lseek( (*fio).fd, 0, SEEK_CUR);
    close( (*fio).fd );
    return (*fio).cur;
}

off_t* ReadFile(FileIO* fio)
{
    OpenFile(fio, O_APPEND);
    ssize_t sizeIsRed = 0;

    if ( sizeIsRed = read( (*fio).fd, (*fio).buf, (*fio).sizeOfBuf) == -1 )
    {
        return errno;
    }
    
    *(*fio).cur = lseek( (*fio).fd, 0, SEEK_CUR);
    close( (*fio).fd );
    return (*fio).cur;
}
