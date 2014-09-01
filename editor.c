#include <stdlib.h>
#include <lua.h>
#include <lauxlib.h>
#include "editor.h"

editor_t *editor;

void create_editor() {
  editor = (editor_t *)malloc(sizeof(editor_t));
  editor->current_mode = NORMAL;
  editor->lua = luaL_newstate();
}

void free_editor() {
  lua_close(editor->lua);
  free(editor);
}
