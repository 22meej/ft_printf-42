#include "ft_printf.h"

// int test(const char *format, ...)
// {
// 	int			i;
// 	int			res;
// 	va_list		args;
//     va_start(args, format);
//     args->
//     printf("%d\n", args->fp_offset);
//     while (i < 17)
//     {
//         va_arg(args, double);
//         printf("%d\n", args->fp_offset);
//         printf("%d\n", *(int *)args->overflow_arg_area);
//         i++;
//     }
//     static int a = 0;
//     a = 0;
//     a++;
//     return (a);

// }

int main() {
    // Close the stdout file descriptor
    fclose(stdout);

    // Now any printf attempt will fail because stdout is closed
    if (printf("Hello, world!\n") < 0) {
        return (printf("Hello, world!\n"));
        // perror(printf("Hello, world!\n"));
    }

    return 0;
}

// int main()
// {

    // test("hhhh",1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1);
    // int *ptr;
    // int a = 99;
    // ptr  = malloc(4);
    // *ptr = a;
    // printf("%d", *ptr);
    // free(ptr);
    // free(ptr);
    // free(ptr);
    // printf("%d", test("hwhdheuu", 33)); 
    // printf("%d", test("hwhdheuu", 33)); 
    // printf("%d", test("hwhdheuu", 33)); 
    // printf("%d", test("hwhdheuu", 33)); 
    // printf("%d", test("hwhdheuu", 33)); 
// }