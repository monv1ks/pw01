#include <stdio.h>
#include <string.h>
#define LinuxDistro "LinuxDistro"
const char rdate[20] = "2026";
int main(void)
{
printf("DISTRO: %s\n", LinuxDistro);
printf("RDATE: %s\n", rdate);
printf("STRLEN: %zu\n", strlen(LinuxDistro));
printf("SIZEOF: %zu\n", sizeof(LinuxDistro));
    return 0;
}
