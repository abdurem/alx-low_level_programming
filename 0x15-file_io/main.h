#ifndef FILE_IO_MAIN_H
#define FILE_IO_MAIN_H

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"
#include "string.h"

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
char *str_concat(const char *s1, const char *s2);
void copy_contents(int fd_from, int fd_to, char *filename_fd_from,
				   char *filename_fd_to);
void close_file(int fd);
int open_file(char *filename, int flag, int file_to_copy_from, int fp);

#endif /* FILE_IO_MAIN_H */
