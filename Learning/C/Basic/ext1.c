#include <stdio.h>

extern int count;

void write_extern() { printf("Count = %d\n", count); }
