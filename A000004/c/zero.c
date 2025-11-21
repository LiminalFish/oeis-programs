#include <stdio.h>
#include <stdlib.h>

int A000004(int n) { return 0; }

int main(int argc, char **argv) {
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
    printf("%d\n", A000004(n));
  }
  return 0;
}
