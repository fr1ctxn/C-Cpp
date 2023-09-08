#include <stdio.h>

int main(){

//Taking user input
   /* 
    char name[100]; //declaration of taking input in characters, where the limit of characters is 100

    printf("What is your name?: ");
    scanf("%99s", name);

    printf("hello, %s!\n", name);
    return 0;

*/
/*

    TO TAKE INPUT AND CHECK IF IT IS NEGATIVE/POSITIBE

    int number;

    printf("Write any number: ");
    scanf("%d", &number);

    if (number > 0)
    {
      printf("The given number is positive");
    }
    else if(number == 0)
    {
     printf("The number is zero,i.e, neither negative nor positive");
    }
    else
    {
      printf("The number is negative");
    }
    
    return 0;


*/

/*

    int value, i;

    printf("enter any number: ");
    scanf("%d", &value);

    printf("Multiplication table for %d: \n", value);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", value, i, value * i);
    }

    return 0;
*/

// HOMEWORK 
      // QUESTION NO.1 ASK FOR FIRST AND LAST NAME SEPERATELY
       
      /* char firstname[100];
       char lastname[100];

       printf("Enter your first name: ");
       scanf("%99s", firstname);

       printf("Enter your last name: ");
       scanf("%99s", lastname);

       printf("Hii %s %s", firstname, lastname); */

      //SUCCESSFULL

      //QUESTION NO.2 EVEN OR ODD

      /* int number;

      printf("Enter any number: ");
      scanf("%d", &number);

      if(number==0)
      {
        printf("The given number is zero");
      }
      else if(number%2==0)
      {
        printf("The given number is even");
      }
      else
      {
        printf("The given number is odd");
      }

      return 0;   */

      //QUESTION NO.3 FACTORIAL

      /* 
      int number, factorial=1;

      printf("enter any number: ");
      scanf("%d", &number);

      if(number<0)
      printf("Factorial is not defined for non negative numbers");

      else
      {
        int i;

          for(i=1; i<=number; i++)
          {factorial *=i ;}
          printf("factorial: %d\n", factorial);

          return 0;
      
      
      //QUESTION NO. 6 FIBBONACCI SERIES UPTILL 5
     
     /*
      int main() 
      {
      int n=5, first=0, second=1, number, i, next;

      printf("Fibonacci series: ");
      for(i=1; i<=n; i++)
      {
        if(i == 1)
        {
          printf("%d\n", first);
          continue;
        }
        if(i == 2)
        {
          printf("%d\n", second);
          continue;
        }
        next= first + second;
        printf("%d ", next);
        first = second;
        second = next;
      }

      return 0;

      }
      */

     // Arrays int number[5] = {1,2,3,4,5}; 
}
