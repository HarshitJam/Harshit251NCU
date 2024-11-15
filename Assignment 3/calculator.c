#include<stdio.h>
#include<math.h>

float add(float a, float b) {
    float c;
    c=a+b;
    return printf("%f + %f = %f",a,b,c);
}

float sub(float a, float b) {
    float c;
    c=a-b;
    return printf("%f - %f = %f",a,b,c);
}

float mul(float a, float b) {

    float c;
    c=a*b;
    return printf("%f x %f = %f",a,b,c);
}

float div(float a, float b) {
    float c;
    c=a/b;
    return printf("%f divided by %f = %f",a,b,c);
}

int main() {
    float a,b;
    int choice;

    

    printf("Enter 1 to do Addition\n");
    printf("Enter 2 to do Subtraction\n");
    printf("Enter 3 to do Multiplication\n");
    printf("Enter 4 to do Division\n");
    printf("Enter 5 to find Logarithmic Value\n");
    printf("Enter 6 to find Square Roots\n");


    scanf("%d",&choice);

    if(choice == 5 || choice == 6){
        printf("Enter Integer a = ");
        scanf("%f",&a);
    }
    else{
        printf("Enter Integer a = ");
        scanf("%f",&a);

        printf("Enter Integer b = ");
        scanf("%f",&b);
    }

    switch(choice) {
        case 1:
        add(a,b);
        break;

        case 2:
        sub(a,b);
        break;

        case 3:
        mul(a,b);
        break;

        case 4:
        div(a,b);
        break;

        case 5:
        printf("log(%f) = %.4lf", a, log(a));
        break;

        case 6:
        printf("The Square Root of %f is %f",a,sqrt(a));
        break;

        default:
        printf("Invalid Input");
        break;
    }

}