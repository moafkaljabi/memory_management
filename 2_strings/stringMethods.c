#include "stringMethods.h"



TextBuffer* dest;
const char* src;

int main() 
{
    smart_append(dest,src);
    return 0;
}


const int max_buffer_size = 64 ;
int smart_append(TextBuffer* dest, const char* src) {
  // ?
 if(dest == NULL || src == NULL)
 {
   return 1;
 }
  strlen(src);
  strcpy(dest,src);
  char *pos = strchr(dest,'\0');

  dest[max_buffer_size];
  return 0;
}
