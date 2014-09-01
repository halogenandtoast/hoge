#ifndef _EDITOR_
#define _EDITOR_

#include <lua.h>
#include "buffer.h"

enum editor_mode {
  NORMAL,
  INSERT,
  COMMAND
};

typedef struct {
  enum editor_mode current_mode;
  lua_State *lua;
  buffer_t *active_buffer;
  int width;
  int height;
} editor_t;

void create_editor();
void run_editor();
void free_editor();

#endif
