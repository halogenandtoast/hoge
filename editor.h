#ifndef _EDITOR_
#define _EDITOR_

#include <lua.h>

enum editor_mode {
  NORMAL,
  INSERT,
  COMMAND
};

typedef struct {
  enum editor_mode current_mode;
  lua_State *lua;
} editor_t;

void create_editor();
void free_editor();

#endif
