#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define BUFFSIZE 1024
extern char **environ;
/* string.c - functions to manipulate strings */
int _strlen(char *s);
int _strcmp(char *s1, char *s2, int n);
char *_strncat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_getenv_val(const char *name);
char *path_split(char *input);
int stat(char *command);
void execute(char **input);
/* tokenizer.c - allocate memory for tokens and split */
char **tokenizer(char *input);
#endif
