#include <stdio.h>
#include <string.h>

typedef struct {
    size_t length;
    char buffer[64];
} TextBuffer;

int smart_append(TextBuffer* dest, const char *src);