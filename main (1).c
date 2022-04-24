#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int c = 1;
  while (c == 1)
    {
      int a, b, square, i, n, fact = 1, choice;
      printf ("\n Welcome to the calculator what calculation you want to do");
      printf ("\n Enter 1 for Addition");
      printf ("\n Enter 2 for Subtraction");
      printf ("\n Enter 3 for Multiplication");
      printf ("\n Enter 4 for Division");
      printf ("\n Enter 5 for Square");
      printf ("\n Enter 6 for Factorial");
      printf ("\n Enter 7 for Finding Odd or Even");
      printf ("\n Enter 8 for Finding Remainder");
      printf ("\n Enter 9 for exit");
      printf ("\n Enter your Choice : ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  printf ("\n Enter Two Numbers: ");
	  scanf ("%d%d", &a, &b);
	  printf (" Sum is : %d\n", a + b);
	  c = 1;
	  break;
	case 2:
	  printf ("\n Enter Two Numbers: ");
	  scanf ("%d%d", &a, &b);
	  printf (" Difference is : %d\n", a - b);
	  c = 1;
	  break;
	case 3:
	  printf ("\n Enter Two Numbers: ");
	  scanf ("%d%d", &a, &b);
	  printf (" Multiplication is : %d\n", a * b);
	  c = 1;
	  break;
	case 4:
	  printf ("\n Enter Two Numbers: ");
	  scanf ("%d%d", &a, &b);
	  printf (" Difference is : %d\n", a / b);
	  c = 1;
	  break;
	case 5:
	  printf ("\n Enter Any Number: ");
	  scanf ("%d", &n);
	  square = n * n;
	  printf (" The Square of the Given number is %d\n", square);
	  c = 1;
	  break;
	case 6:
	  printf ("\n Enter Any Number: ");
	  scanf ("%d", &n);
	  for (i = 1; i <= n; i++)
	    {
	      fact = fact * i;
	    }
	  printf (" The Factorial of a given number is %d\n", fact);
	  c = 1;
	  break;
	case 7:
	  printf ("\n Enter Any Number: ");
	  scanf ("%d", &n);
	  if (n % 2 == 0)
	    {
	      printf (" Given Number is Even\n");
	    }
	  else
	    {
	      printf (" Given Number is Odd\n");
	    }
	  c = 1;
	  break;
	case 8:
	  printf ("\n Enter Two Numbers: ");
	  scanf ("%d%d", &a, &b);
	  printf (" Remainder is : %d\n", a % b);
	  c = 1;
	  break;
	case 9:
	  printf (" Thanks for using our Calculator");
	  c = 0;
	  exit (0);



	default:
	  printf ("Invalid Choice. Please try again\n");
	}
    }
  return 0;

}
