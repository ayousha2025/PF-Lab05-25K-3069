#include<stdio.h>

int main(){
	char color;
	printf("Enter a color (first alpabet): ");
	scanf("%c",&color);
	if (color=='R' || color=='r'){
		printf("STOP!");
	}
	else if (color=='Y' || color=='y'){
		printf("Caution!");
	}
	else if (color=='G' || color=='g'){
		printf("GO!");
	}
	return 0;
}
