#include <stdio.h>
#include <limits.h>

// char  short  int  long  long long  / unsigned
// name, format, bytes, min signed, uformat, max unsigned
int main() {
    printf("+----------------------------------------------------------------------------------------------------+\n");
    printf("| Type          | Format  | Bytes    | Min signed           | Unsigned format | Max unsigned         |\n");
    printf("|---------------|---------|----------|----------------------|-----------------|----------------------|\n");
    printf("| char          |  %%d     | %8zu | %20d |       %%u        | %20u |\n", sizeof(char), CHAR_MIN, UCHAR_MAX);
    printf("| short         |  %%hd    | %8zu | %20d |       %%hu       | %20hu |\n", sizeof(short), SHRT_MIN, USHRT_MAX);
    printf("| int           |  %%d     | %8zu | %20d |       %%u        | %20u |\n", sizeof(int), INT_MIN, UINT_MAX);
    printf("| long          |  %%ld    | %8zu | %20ld |      %%lu        | %20lu |\n", sizeof(long), LONG_MIN, ULONG_MAX);
    printf("| long long     |  %%lld   | %8zu | %20lld |      %%llu       | %20llu |\n", sizeof(long long), LONG_LONG_MIN, ULONG_LONG_MAX);
    printf("+----------------------------------------------------------------------------------------------------+");

    return 0;
}