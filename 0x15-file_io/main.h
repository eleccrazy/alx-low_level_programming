#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Desc: This header file contains all the required function
 * prototypes and header files required for the project 0x15-file_io
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Created: May 30, 2022
 *
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
