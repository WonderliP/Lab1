#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
     {
     double x1, x2, delta, y;
     int variant, n;
     const double degree = 2;
     unsigned char N;
     double pow(double(x),  double(degree));
     do{
            printf("You have to choose starting and ending initial x value.\n");
            printf("Remember, that starting (x1) value must be less than ending (x2) value\n");
            printf("Enter the variant (1 or 2):");

            scanf("%u", &variant);
            printf("\n");
            printf("\n");

     if(variant != 1 && variant != 2){
            printf("Choose only '1' or '2': ");
            }
     }while(variant != 1 && variant != 2);   // виконувати цей цикл, допоки variant не стане 1 або 2


     if(variant == 1){
            printf("Enter the initial x1 value:");
            scanf("%lf", &x1);
            printf("\n");
            printf("\n");

            printf("Enter the initial x2 value:");
            scanf("%lf", &x2);
            printf("\n");

            printf("Now, you have to enter the number of points. It must be greater than 0.\n");
            printf("\n");
            printf("Enter the number of points:");
            scanf("%d", &N);

            delta = (x2-x1)/(N-1);   // формула обчислення кроку

            y = pow(x1, degree);     // задана функція

            system("cls");  //видаляє все, що було виконано до цієї функції і виводить на екран те, що задано далі

            printf("\t   x1=%.2lf      x2=%.2lf     N=%d    delta=%.2lf \n", x1, x2, N, delta);
            printf("\t**********************************************\n");
            printf("\t* N           x         *         f(x)       *\n");
            printf("\t**********************************************\n");
            printf("\t-----+------------------+---------------------\n");
            printf("\t|%5d|%18.2lf|%21.2lf|\n", n, x1, y);
            printf("\t-----+------------------+---------------------\n");

     for(n=1; n<=N; n++){

            x1 = x1 + delta;
            delta = (x2-x1)/(N-1);
            y = pow(x1, degree);

            printf("\t|%5d|%18.2lf|%21.2lf|\n", n, x1, y);
            printf("\t-----+------------------+---------------------\n");

     if(n%9 == 0){

            printf("\t");
            printf("Press any key to continue\r");

            getch();
                }
                }
        }
     else if(variant == 2){
            printf("Enter the initial x1 value:");
            scanf("%lf", &x1);
            printf("\n");

            printf("Enter the initial x2 value:");
            scanf("%lf", &x2);
            printf("\n");

            printf("Now, you have to enter the step of changing x. It must be greater than 0.\n");
            printf("\n");
            printf("Enter the step of changing x:");
            scanf("%lf", &delta);

            N = 1+((x2-x1)/delta);

            y = pow(x1, degree);

            system("cls");

            printf("\t   x1=%.2lf      x2=%.2lf     N=%d    delta=%.2lf \n", x1, x2, N, delta);
            printf("\t**********************************************\n");
            printf("\t* N           x         *         f(x)       *\n");
            printf("\t**********************************************\n");
            printf("\t-----+------------------+---------------------\n");
            printf("\t|%5d|%18.2lf|%21.2lf|\n", n, x1, y);
            printf("\t-----+------------------+---------------------\n");
     for(n=1; n<=N; n++){

            x1 = x1 + delta;
            delta = (x2-x1)/(N-1);
            y = pow(x1, degree);
            printf("\t|%5d|%18.2lf|%21.2lf|\n", n, x1, y);
            printf("\t-----+------------------+---------------------\n");

     if(n%9 == 0){

            printf("\t");
            printf("Press any key to continue\r");

            getch();
                }
                }
        }

     return 0;
}
