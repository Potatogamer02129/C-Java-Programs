#include <stdio.h>

float Area(float r);
float Circumference(float r);
void main(){
	float r;
	printf("The radius of the circle :");
	scanf("%f",&r);
	printf("The area of the circle is %.2f\n",Area(r));
        printf("The circumference of the circle is %.2f",Circumference(r));	
}

float Area(float r){
  return 3.14*r*r;	  
}

float Circumference(float r){
	return 2*3.14*r;
}
