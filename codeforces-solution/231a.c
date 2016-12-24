#include <stdio.h>

int main()
{
	int i,n,s1,s2,s3,sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		int count =0;
		scanf("%d %d %d", &s1,&s2,&s3);
		if(s1==1){
			count++;
		}
		if(s2==1){
			count++;
		}
		if(s3==1){
			count++;
		}
		if(count>1){
			sum++;
		}
	}
	printf("%d\n", sum); 
	return 0;
}
