#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  long cpus = sysconf(_SC_NPROCESSORS_ONLN);
  printf("CPUs: %ld\n", cpus);

  return 0;
}
