#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define buff_size   1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);

#endif
