//	4. Area and perimeter of rectangle
#include<stdio.h>

int main() {

	float length;
	float bredth;
	
	printf("Enter length of rectangle\n");
	scanf("%f", &length);

	printf("Enter bredth of rectangle\n");
	scanf("%f", &bredth);

	float area_rect = length * bredth;
	float perimeter_rect = 2 * (length + bredth);

 printf("The area of rectangle is %.2f\n", area_rect);
 printf("The perimeter of circle is %.2f\n", perimeter_rect);


 return 0;

}
