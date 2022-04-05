#include "memchr_opt.h"

int main()
{   
    const char str[] = "http://wiki.csie.ncku.edu.tw";
    const char ch1 = '.';
    const char ch2 = 'p';
    const char ch3 = 'd';
		    
    char *ret = memchr_opt(str, ch1, strlen(str));
    printf("String after |%c| is - |%s|\n", ch1, ret);

    ret = memchr_opt(str, ch2, strlen(str));
    printf("String after |%c| is - |%s|\n", ch2, ret);

    ret = memchr_opt(str, ch3, strlen(str));
    printf("String after |%c| is - |%s|\n", ch3, ret);
    return 0;
}
