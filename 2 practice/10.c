#include <stdio.h>
#include <stdint.h>
int main(void)
{
    int packet_id;
    uint8_t status_code;
    float voltage;
    scanf("%x %hho %f", &packet_id, &status_code, &voltage);
    char status_char = (char)status_code;
    uint16_t checksum = (uint16_t)(packet_id + status_code);
    printf("PACKET_ID: %d \n", packet_id);
    printf("STATUS_CODE: %u \n", (unsigned)status_code);
    printf("STATUS_CHAR: %c \n", status_char);
    printf("VOLTAGE: %.2f \n", voltage);
    printf("CHEKSUM: %u \n", checksum);
    return 0;
}