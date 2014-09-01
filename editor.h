#ifndef _EDITOR_
#define _EDITOR_

enum editor_mode {
  NORMAL,
  INSERT,
  COMMAND
};

typedef struct {
  enum editor_mode current_mode;
} editor_t;

void create_editor();
void free_editor();

#endif
