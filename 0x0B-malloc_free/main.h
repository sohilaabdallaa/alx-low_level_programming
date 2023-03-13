#ifndef MAIN_H
#define MAIN_H
/**
 * main.h Header file that contains all prototypes of functions 
 * 			used in 0x0B-malloc_free projects */
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);
char *_strcpy(char *dest, char *src);
#endif
