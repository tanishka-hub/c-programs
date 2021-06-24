#include<stdio.h>
void main(){

int a,b;
printf("enter first no.");
scanf("%d",&a);
printf("enter second no.");
scanf("%d",&b);
int choice;
printf("press 1 for addition \n press 2 for substraction \n press 3 for multiplication \n press 4 for division");
scanf("%d",&choice);
switch (choice){
	case 1:
		printf("addition is %d",a+b);
		break;
	case 2:
		if(a<b){
			printf("substraction is %d",b-a);
			break;
		}
		printf("substraction is %d",a-b);
		break;
	case 3:
		printf("multiplication is %d", a*b);
		break;
	case 4:
		printf("division is %d", a/b);
		break;
	default:
		printf("isse zada nhi milega");
		break;
		
	}	
}
