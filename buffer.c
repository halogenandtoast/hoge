#include <stdlib.h>
#include "buffer.h"

buffer_t* new_buffer() {
  buffer_t* buffer = (buffer_t*)malloc(sizeof(buffer_t));
  return buffer;
}

void free_buffer(buffer_t* buffer) {
  free(buffer);
}
