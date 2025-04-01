#include <cstdio>

int reverseNum(int n){
	int rev =0;
	while(n>0){
		int rem = n%10;
		rev = rev *10+ rem;
		n/=10;
	}
	return rev;
}


int main(void)
{

	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	printf("The reverse of %d is: %d \n",n,reverseNum(n));

	if(reverseNum(n)==n){
		printf("%d is palindrome\n", n);
	}
	else{
		printf("%d is not palindrome \n",n);
	}
}
