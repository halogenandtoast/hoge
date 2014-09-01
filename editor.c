#include <stdlib.h>
#include "editor.h"

editor_t *editor;

void create_editor() {
  editor = (editor_t *)malloc(sizeof(editor_t));
  editor->current_mode = NORMAL;
}

void free_editor() {
  free(editor);
}
