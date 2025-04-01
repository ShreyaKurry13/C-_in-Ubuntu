#include <cstdio>

bool isPrime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}

	if(count==2){
		return true;
	}
	return false;
}

int countPrime(int l,int u){
	int count = 0;
	for(int i=l;i<=u;i++){
		if(isPrime(i)==1){
			count++;
		}
	}
	return count;
}

int main(void)
{
	int l,u;
	int n;

/*	printf("Enter a number: ");
	scanf("%d",&n);

	if(isPrime(n)==1){
		printf("%d Is Prime \n",n);
	}
	else{
		printf("%d Not Prime \n",n);
	}
*/
	printf("Enter range: ");
	scanf("%d %d",&l,&u);
	
       printf("The prime numbers between %d and %d is: %d \n",l,u,countPrime(l,u));	

}
