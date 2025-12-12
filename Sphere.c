#include <stdio.h>
#include <math.h>

int main()
{
    double r, volume, area;
    double Sr, Svolume, Sarea;
    double Tr, Tvolume, Tarea;
    double Fr, Fvolume, Farea;

    const double PI = acos(-1.0); 
    /*cosine ^-1 */

    printf("Enter 1nd radius of the sphere: ");
    scanf("%lf", &r);

    printf("Enter 2nd radius of the sphere: ");
    scanf("%lf", &Sr);

    printf("Enter 3rd radius of the sphere: ");
    scanf("%lf", &Tr);

    printf("Enter 4th radius of the sphere: ");
    scanf("%lf", &Fr);

   
    volume = (4.0 * PI * r * r * r) / 3.0; 
    area = 4.0 * PI * r * r;  

    Svolume = (4.0 * PI * Sr * Sr * Sr) / 3.0; 
    Sarea = 4.0 * PI * Sr * Sr;  

    Tvolume = (4.0 * PI * Tr * Tr * Tr) / 3.0; 
    Tarea = 4.0 * PI * Tr * Tr;  

    Fvolume = (4.0 * PI * Fr * Fr * Fr) / 3.0; 
    Farea = 4.0 * PI * Fr * Fr;  

    printf("\n<== THE FIRST SPHERE ==>\n");
    printf("Volume = %.3f\n", volume);
    printf("Surface Area = %.3f\n", area);

    printf("\n<== THE SECOND SPHERE ==>\n");
    printf("Volume = %.3f\n", volume);
    printf("Surface Area = %.3f\n", area);

    printf("\n<== THE THIRD SPHERE ==>\n");
    printf("Volume = %.3f\n", volume);
    printf("Surface Area = %.3f\n", area);

     printf("\n<== THE FOURTH SPHERE ==>\n");
    printf("Volume = %.3f\n", volume);
    printf("Surface Area = %.3f\n", area);

    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float r, volume, area;
//     float MPI = 3.142;

//     printf("Enter radius of the sphere: ");
//     scanf("%f", &r);

//     volume = (4.0 * MPI * pow(r, 3)) / 3.0;
//     area = 4.0 * MPI * pow(r, 2);

//     printf("Volume = %.3f\n", volume);
//     printf("Surface Area = %.3f\n", area);

//     return 0;
// }

