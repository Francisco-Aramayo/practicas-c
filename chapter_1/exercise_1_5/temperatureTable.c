/* modify the temperature conversion program to print the table in reverse order,
from 300 to 0 */

#include <stdio.h>

int main (){
    int fahr;

    printf("Fahr  Celsius\n");
    printf("----  -------\n");

    for (fahr = 300; fahr >= 0; fahr -= 20){
        printf("%3d %8.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}