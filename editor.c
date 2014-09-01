#include <stdlib.h>
#include <ncurses.h>
#include <lua.h>
#include <lauxlib.h>
#include <signal.h>
#include "editor.h"

editor_t *editor;
void resize_editor();

void create_editor() {
  editor = (editor_t *)malloc(sizeof(editor_t));
  editor->current_mode = NORMAL;
  editor->lua = luaL_newstate();
  editor->active_buffer = new_buffer();

  initscr();

  getmaxyx(stdscr, editor->height, editor->width);
  signal(SIGWINCH, resize_editor);
}

void resize_editor() {
  endwin();
  refresh();
  clear();
  getmaxyx(stdscr, editor->height, editor->width);
  printw("Size: %dx%d\nPress any key to exit", editor->width, editor->height);
  refresh();
}

void run_editor() {
  printw("Size: %dx%d\nPress any key to exit", editor->width, editor->height);
  char c = getch();
}

void free_editor() {
  endwin();
  lua_close(editor->lua);
  free_buffer(editor->active_buffer);
  free(editor);
}
