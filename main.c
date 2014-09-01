#include <stdlib.h>
#include "editor.h"

int main(int argc, char *argv[]) {
  create_editor();
  run_editor();
  free_editor();
  return EXIT_SUCCESS;
}
