#include <stdio.h>
#include <string.h>

    int main(){
       /* //Question no 1
        printf("Hello, world\n");

        //Question no 2 
        int num = 42;
        printf("%d\n", num);

        //Question no 3
        int num1, num2;
        
        printf("Enter any integer: ");
        scanf("%d", &num1);

        printf("Enter another integer: ");
        scanf("%d", &num2);

        int sum = num1 + num2;
        printf("The sum of the given numbers is: %d", sum);
        */
        //Question no. 4
        /*
        int number, factorial =1;
        printf("Enter the number you want the factorial of: ");
        scanf("%d", &number);

        if(number<0){
            printf("Factorial is not defined for negative numbers");
        }
        else{
            int i;

            for(i= 1; i<=number; i++)
            {
               factorial *= i;
            }
            printf("The factorial of this number is %d", factorial);
            
        }

    }   */

        /*
        int num1, num2, num3, largest;

        printf("Enter a number: ");
        scanf("%d", &num1);
        
        printf("Enter one more number: ");
        scanf("%d", &num2);

        printf("Enter another number: ");
        scanf("%d", &num3);

        if(num1>num2 && num1>num3){
            largest= num1;
        }
        else if(num2>num1 && num2>num3){
            largest = num2;
        }
        else{
            largest = num3;
        }

        printf("The largest out of the given numbers is: %d", largest);
    }   */

        char str1[]= "";
        char str2[]= "";

        printf("Enter a string: ");
        scanf("%s", str1);

        printf("Enter another string: ");
        scanf("%s", str2);

        printf("These are the strings you entered: %s and %s", str1, str2);
        // strcmp(str1,str2);
 
    }