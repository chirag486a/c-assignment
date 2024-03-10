#include<stdio.h>
#define PI 3.14

int main() {

	float radius = 0;
	
	printf("Enter value of radius\n");
	scanf("%f", &radius);

	float area_circle = PI * radius * radius;
 	float circumference = 2 * PI * radius;	

 printf("The area of circle is %.2f\n", area_circle);
 printf("The circumference of circle is %.2f\n", circumference);


 return 0;

}
