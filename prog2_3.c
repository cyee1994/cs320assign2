#include <stdio.h>
#include <math.h>

	main()
	{
	 printf("Assignment 2-3, Christopher Yee, christopheryee@att.net\n");
	 float tanIn, tanOut, PI;
	 PI = 3.141592653;

	 printf("Please input an integer:\n");
 	 scanf("%f",(&tanIn));
	 tanOut = tan(tanIn*(PI/180));
	 
	 printf("The tan is:%0.3f\n",tanOut);
	
	}
