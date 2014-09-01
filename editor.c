#include <stdlib.h>
#include <ncurses.h>
#include <lua.h>
#include <lauxlib.h>
#include "editor.h"

editor_t *editor;

void create_editor() {
  editor = (editor_t *)malloc(sizeof(editor_t));
  editor->current_mode = NORMAL;
  editor->lua = luaL_newstate();

  initscr();
}

void run_editor() {
  printw("Press any key to exit");
  char c = getch();
}

void free_editor() {
  endwin();
  lua_close(editor->lua);
  free(editor);
}
