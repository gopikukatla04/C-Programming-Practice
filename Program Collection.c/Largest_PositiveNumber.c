/* C-Largest Positive Number Program
   1.Limits.h - includes important limits for various data types,
     like the biggest positive number an unsigned long long type can store.
   2.%llu is used to correctly display this large number.
   3.ULLONG_MAX = max positive value for unsigned long long, which is used
     for very large positive numbers and it is defined in Limits.h */

#include <stdio.h>           
#include <limits.h> 
                                         
int main() {               
    printf("The largest positive number I can print: %llu\n", ULLONG_MAX);
    return 0;              
}