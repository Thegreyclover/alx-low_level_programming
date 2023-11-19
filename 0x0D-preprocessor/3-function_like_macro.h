#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
/**
* FUNCTION_LIKE_MACRO_H - Header guard to prevent multiple inclusions.
* ABS: Macro that computes the absolute value of a given number.
* Returns the absolute value of x.
*/
#define ABS(x) ((x) < (0) ? -(x) : (x))
#endif
