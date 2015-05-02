#include <stdio.h>
#include <stdlib.h>

#define ERR "It is forbidden to divide by zero"
#define MSG "Please, enter number or \"q\" for exit\n"

int main()
{
    int sum = 0, dif = 0, prod = 0;
    float num = 0, quot = 0;
    printf(MSG);
    scanf("%f", &num);
    sum = num;
    dif = num;
    prod = num;
    quot = num;
    printf(MSG);
    while (scanf("%f", &num)) {
      sum = sum + num;
      dif = dif - num;
      prod = prod * num;
      if (num == 0) {
        printf("%s\n", ERR);
      } else {
        quot = quot / num;      
      }
      printf(MSG);
    }    
    printf("Sum: %d\nDifference: %d\nProduct: %d\nQuotient: %f\n", sum, dif, prod, quot);
    system("PAUSE");	
    return 0;
}
