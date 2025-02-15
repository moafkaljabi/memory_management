#include <stdio.h>
#include <string.h>

#define MAX_BUFFER_SIZE 64

typedef struct {
    size_t length;
    char buffer[MAX_BUFFER_SIZE];
} TextBuffer;

int smart_append(TextBuffer* dest, const char* src) {
    if (dest == NULL || src == NULL) {
        return 1;  // Failure
    }

    size_t src_len = strlen(src);
    size_t space_left = MAX_BUFFER_SIZE - dest->length - 1; // Account for null terminator

    if (src_len > space_left) {
        // Append only what fits
        strncat(dest->buffer, src, space_left);
        dest->length = MAX_BUFFER_SIZE - 1;  // Max out the buffer
        dest->buffer[MAX_BUFFER_SIZE - 1] = '\0'; // Ensure null-termination
        return 1; // Failure (not all was appended)
    } else {
        // Append everything
        strcat(dest->buffer, src);
        dest->length += src_len;
        return 0; // Success
    }
}


int main() {
    TextBuffer dest = {0, ""}; // Initialize empty buffer

    printf("Appending 'Hello': %d\n", smart_append(&dest, "Hello"));
    printf("Buffer: %s (Length: %zu)\n", dest.buffer, dest.length);

    printf("Appending ', World!': %d\n", smart_append(&dest, ", World!"));
    printf("Buffer: %s (Length: %zu)\n", dest.buffer, dest.length);

    return 0;
}


