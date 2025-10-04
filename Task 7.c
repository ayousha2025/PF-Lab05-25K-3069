#include<stdio.h>

int main(){
int number;
printf("Enter a number (1-5) to rate the movie The Lion King: ");
scanf("%d",&number);

swtich(number){
	case 1: printf("Terrible");        break;
	case 2: printf("Poor");            break;
	case 3: printf("Average");         break;
	case 4: printf("Good");            break;
	case 5: printf("Excellent");       break;
	default: printf("Out of range.");
}	
        return 0;
}


