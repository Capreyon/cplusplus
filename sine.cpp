#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Declare variables */

    int    line_count,              /* Counts the lines in the program */
           sine_count,              /* Counts the values in the sine range */
           no_of_lines,             /* The number of lines to display in the graph */
           initial_step_size;       /* The initial step size in degrees */
    double current_step_size;       /* The current step size in degrees */

    /* Prompt user for information */

    printf("\nEnter the initial step-size in degrees: ");
    scanf("%d", &initial_step_size);
    printf("\nEnter the number of lines to be displayed in the graph: ");
    scanf("%d", &no_of_lines);

    /* Convert from degrees to radians and assign to current step size */

    current_step_size = initial_step_size * 3.14 / 180;

    /* Display graph */

    for (line_count = 0; line_count < no_of_lines; line_count++)
    {
     for (sine_count = -90; sine_count <= 90; sine_count++)
     {
      /* Compare the sin of the step value to the sin of the sine range value and print '*' if there is a match.
         Otherwise, print a blank */
      if (sin(current_step_size) == sin(sine_count * 3.14 / 180))
      {
       printf("*");
       break;
      }
      else
       printf(" ");
     }
     /* Increment step size */
     current_step_size += initial_step_size * 3.14 / 180;
    }

    return 0;
}


