#include <stdio.h>
int main(void)
{
    int unit_id, unit_version, unit_status;
    scanf("%d %x %o", &unit_id, &unit_version, &unit_status);
    int sum_id = unit_id + unit_version + unit_status;
    printf("UNIT_ID: %d \n", unit_id);
    printf("UNIT_VERSION: %d \n", unit_version);
    printf("UNIT_STATUS: %d \n", unit_status);
    printf("SUM: %d \n", sum_id);
    return 0;
}