#include <stdio.h>
int main(){
	float r;
	int p,t;
	printf("enter principle value:");
	scanf("%d",&p);
	printf("enter rate:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%d",&t);
	float s;
	s=p*r*t/100;
	printf("simple interest: %f",s);
	return t;
}
