#include<stdio.h>

float Area_Rect(float length, float width);
float Peri_Rect(float length, float width);
float Area_Tria(float length, float width);

int main () {
	float x,y;
	scanf("%f %f",&x,&y);
	printf("Area of a rectangle : %.2f\n",Area_Rect(x,y));
	printf("Perimeter of a rectangle : %.2f\n",Peri_Rect(x,y));
	printf("Area of a triangle : %.2f",Area_Tria(x,y));
	return 0;
}

float Area_Rect(float length, float width) {
	return length*width;
}

float Peri_Rect(float length, float width) {
	return ((2*length)+(2*width));
}

float Area_Tria(float length, float width) {
	return ((length*width)/2);
}
