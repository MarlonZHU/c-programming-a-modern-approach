#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double), double first, double last, double incr);
int main(){
    double final, increment, initial;

    printf("Enter increment: ");
    scanf("%lf", &increment);

    printf("Enter initial: ");
    scanf("%lf", &initial);
    
    printf("Enter final: ");
    scanf("%lf", &final);

    printf("\n\tx\tcos(x)\n");
    tabulate(cos, initial, final, increment);

    printf("\n\tx\tcos(x)\n");
    return 0;
}

void tabulate(double (*f)(double), double first, double last, double incr)
{
    for (; first<=last; first+=incr)
        printf("%f: %f\n",first, f(first));
}

