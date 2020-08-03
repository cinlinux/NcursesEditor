


#ifndef NCRS_LINE_H
#define NCRS_LINE_H

struct Line
{
    char* string;
    size_t num;
    size_t lenght;
    struct Line* next;
    struct Line* prev;
    struct Line* first;
    struct Line* last;
    void* parent;
}

struct Line* InitLine(struct Line* ptr, void* parent, char* string, 
                size_t num, size_t lenght );
struct Line* Resize(struct Line* ptr, size_t newLenght);
#endif
