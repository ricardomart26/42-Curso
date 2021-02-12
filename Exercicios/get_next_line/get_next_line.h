#ifndef _GET_NEXT_LINE_
#define _GET_NEXT_LINE_
#define BUFF_SIZE 1

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int get_next_line(int fd, char **line);
int get_next_line(const int fd, char **line);
#endif