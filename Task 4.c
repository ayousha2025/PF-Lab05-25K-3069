#include<stdio.h>
int main(){
	int maximum_limit=500;
	int amount;
	printf("Enter an amount you want to withdraw: ");
	scanf("%d",&amount);
	if (amount<= maximum_limit && amount%20==0){
		printf("Withdrawal approved.");
	}
	else{
	  printf("Withdrawal denied.");	
	}
	
	return 0;
}
