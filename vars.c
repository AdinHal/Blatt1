#include <stdio.h>
#include <stdint.h>
int main()
{
    char c;
    printf("Enter char value: ");
    scanf("%c", &c);
    double d;
    printf("Enter double value: ");
    scanf("%lf", &d);
    unsigned short us;
    printf("Enter unsigned short value: ");
    scanf("%hu",&us);
    long long ll;
    printf("Enter long long value: ");
    scanf("%lli",&ll);
    char s[15];
    printf("Enter string value to 15 chars: ");
    scanf("%s", &s);
    
    printf("Char value is: %c\n",c);
    printf(" Double value is: %lf\n",d);
    printf(" unsigned short value is: %hu\n", us);
    printf(" long long value is: %lli\n", ll);
    printf(" String value is: %s\n",s);
    printf("Size of char is: %d\n", sizeof(c));
   printf("Size of double is: %d\n", sizeof(d));
   printf("Size of unsigned short is: %d\n", sizeof(us));
   printf("Size of long long is: %d\n", sizeof(ll));
   printf("Size of string value is: %d\n", sizeof(s));

   uint32_t ui32;
   printf("Size of uint32 is:  %llu\n",  sizeof(ui32));
   uint64_t ui64;
   printf("Size of uint64 is:  %llu\n", sizeof(ui64));
    
}