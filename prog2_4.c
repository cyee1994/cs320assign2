#include <stdio.h>
#include <math.h>
#include <stdlib.h>


	

	void printArray(float* data, int N)
	{
 	
	 int i;

 	 for(i = 0; i < N; i++)
	 {
  	  printf("%0.2f ",data[i]);
	 }
	 printf("\n");

	}

	float* genSin(int N, float s)
	{

	 float* data = (float *)malloc(N*sizeof(float));
	 int i;
	 float sp, PI;
	 PI = 3.141592653;
	
	 for(i = 0, sp = 0; i < N; i++, sp+= s)
	 {
	  data[i] = sin(sp*(PI/180));
	  printf("%.2f ",sp);	 
	 }
	  printf("\n");
	  return data;
	
	}
	
	 main(int argc, char** argv)
	{
	 printf("Assignment 2-4, Christopher Yee, christopheryee@att.net\n");
	 float* data;
	 int count = atoi(argv[1]);
	 float step = atof(argv[2]);
	 
	 data = genSin(count, step);
	 printArray(data,count);
		
	}
