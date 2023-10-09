#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *    */
int main(void) {
	    int num, digit;
	        /*to seed a random time*/
    	    srand(time(0));
	    /*to round it and center it around zero*/
	    num = rand() - RAND_MAX / 2;
	    digit = num % 10;
	    if(digit > 5)
		    printf("Last digit of %d is %d and is greater than 5\n", num , digit);
	    else if(digit == 0)
		    printf("Last digit of %d is %d and is 0\n", num , digit);				  
      	    else if(digit < 6 && digit != 0)
		    printf("Last digit of %d is %d and is less than 6 and not 0\n", num , digit);					return (0);
}

