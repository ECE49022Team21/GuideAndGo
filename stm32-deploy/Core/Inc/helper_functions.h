#ifndef HELPER_FUNCTIONS_HEADER_G
#define HELPER_FUNCTIONS_HEADER_G
#include "main.h"
#include "custom_typedef.h"

#define DO_PRINT_STATEMENTS 1

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#define GETCHAR_PROTOTYPE int __io_getchar(void)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#define GETCHAR_PROTOTYPE int fgetc(FILE *f)
#endif

extern UART_HandleTypeDef huart6;
extern UART_HandleTypeDef huart3;
void print_float(float_t num);
void print_message();
#endif
