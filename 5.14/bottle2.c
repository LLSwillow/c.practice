//找规律法
#include<stdio.h>
int main()
{
    int n,k=0,i;
    int arr[1000];
    while(scanf("%d",&n) != EOF && n)
    {
        if(n%2==0)
        {
            arr[k++]=n/2;
        }
        else
        {
            arr[k++]=(n-1)/2;
        }
    }
    for(i=0;i<k;i++)
    {
    	printf("%d\n",arr[i]);
	}
	return 0;
}