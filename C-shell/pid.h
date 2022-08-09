#ifndef PID_H
#define PID_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/stat.h>


char *_getenv(const char *name);
int _strlen(const char *str);
void print_path();

#endif
