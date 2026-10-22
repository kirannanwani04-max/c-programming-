#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("===== SMART CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("enter the numbers:");
    scanf("%f%f",&a,&b);
    switch(choice)
      {
      case 1:
      printf("result:%.2f\n",a+b);
        break;
      case 2:
       printf("result:%.2f\n",a-b);
        break;
        case 3:
       printf("result:%.2f\n",a*b);
        break;
        case 4:
          if (b != 0)
       printf("result:%.2f\n",a/b);
          else
            printf("Cannot divide by zero!\n");
        break;
        case 5:
            printf("Exiting calculator!\n");
            break;
        default:
        printf("invalid choice\n");
}       
    return 0;
}
