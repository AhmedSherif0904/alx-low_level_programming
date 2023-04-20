#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function pointer to a function that takes an integer and returns nothing */
typedef void (*int_func_ptr)(int);

/* Function pointer to a function that takes a character pointer and returns nothing */
typedef void (*char_func_ptr)(char *);

/* Function prototype for print_name */
void print_name(char *name, char_func_ptr f);

#endif /* FUNCTION_POINTERS_H */
