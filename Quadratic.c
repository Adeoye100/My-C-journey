#include <stdio.h>
#include <math.h>
#include <tgmath.h>

int main(){
    double a;
    double b;
    double c;

    double Sqrt(double n);
    {
        double x = 0.0;

        double n;
        while (x * x <= n) {
            x += 0.0001;
        }

        return x;
    }


    printf("Enter the variable a: ");
    scanf("%lf",&a); // NOLINT(*-err34-c)

    printf("Enter the variable b: ");
    scanf("%lf",&b);

    printf("Enter the variable c: ");
    scanf("%lf",&c);
     
    
    if(a == 0){
        printf("Error: Coefficient 'a' cannot be zero for a quadratic equation\n");
        return 1;
    }

    const double discriminant = (b * b) - (4 * a * c);

    if(discriminant >= 0){
         double root1 = (-b + Sqrt(discriminant)) / (2 * a);
         double root2 = (-b - Sqrt(discriminant)) / (2 * a);

        printf("\n//--Result--//\n");
        printf("The discriminant is: %.2lf\n", discriminant);
        printf("The real roots are: \n");
        printf("Root 1 (when x is negative) = %.2lf\n",root1);
        printf("Root 2 (when x is positive) = %.2lf\n",root2);
    }else{
        printf("\n--Results--\n");
        printf("The discriminant is: %.2lf\n", discriminant);
        printf("The equation has no real roots (the discriminant is negative).\n");
    }

    return 0;
}
