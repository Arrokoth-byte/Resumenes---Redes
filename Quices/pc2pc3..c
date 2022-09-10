#include <stdio.h>
#include <string.h>
 
// hexadecimal a binario
void HexToBin(char* hexa)
{
    char string[100];
    long int i = 0;
    while (hexa[i]) {
 
        switch (hexa[i]) {
        case '0':
            strncpy(string, "0000", 4);
            printf("0000");
            break;
        case '1':
            strncpy(string, "0001", 4);
            printf("0001");
            break;
        case '2':
            strncpy(string, "0010", 4);
            printf("0010");
            break;
        case '3':
            strncpy(string, "0011", 4);
            printf("0011");
            break;
        case '4':
            strncpy(string, "0100", 4);
            printf("0100");
            break;
        case '5':
            strncpy(string, "0101", 4);
            printf("0101");
            break;
        case '6':
            strncpy(string, "0110", 4);
            printf("0110");
            break;
        case '7':
            strncpy(string, "0111", 4);
            printf("0111");
            break;
        case '8':
            strncpy(string, "1000", 4);
            printf("1000");
            break;
        case '9':
            strncpy(string, "1001", 4);
            printf("1001");
            break;
        case 'A':
        case 'a':
            strncpy(string, "1010", 4);
            printf("1010");
            break;
        case 'B':
        case 'b':
            strncpy(string, "1011", 4);
            printf("1011");
            break;
        case 'C':
        case 'c':
            strncpy(string, "1100", 4);
            printf("1100");
            break;
        case 'D':
        case 'd':
            strncpy(string, "1101", 4);
            printf("1101");
            break;
        case 'E':
        case 'e':
            strncpy(string, "1110", 4);
            printf("1110");
            break;
        case 'F':
        case 'f':
            strncpy(string, "1111", 4);
            printf("1111");
            break;

            
        }
        i++;
    }
}


int main(int argc, char *argv[])
{
    HexToBin(argv[3]);
}