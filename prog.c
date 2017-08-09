#include <stdio.h>
#include <math.h>

void linEq(float b, float c);
void quadEq(float a, float b, float c);

void main() {
	printf("%s\n", "Equations solver");
	float a, b, c;
	printf("%s\n", "Enter a, b, c, 	and then any symbol");
	scanf("%f %f %f\n", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0) 
		printf("%s\n", "X - any number"); 
	else if (a == 0) linEq(b, c);
	else quadEq(a, b, c);
}

void linEq(float b, float c) {
	float x;
	if (c > 0) x = -c/b;
    else x = c/-b;
    printf("Lineal equation\nX = %.2f\n", x );
}

void quadEq(float a, float b, float c) {
	float x1, x2;
	float dis = (b*b) - 4 * a * c;
	x1 = (-b - sqrt(dis)) / (2 * a);
	x2 = (-b + sqrt(dis)) / (2 * a);
	printf("Quad equation\nx1 = %.2f x2 = %.2f\n", x1, x2);
}