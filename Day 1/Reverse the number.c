#include <stdio.h>


int main() {
	// your code goes here
	
	int tst,lst;
	long n;
	scanf("%d",&tst);
	
	
	while(tst--)
	{
	    long ivt=0;
		scanf("%ld",&n);
	    while(n>0)
	    {
	        lst=n%10;
	        ivt=ivt*10+lst;
	        n/=10;
	    }
	    printf("%ld\n",ivt);
	}
	return 0;
}

