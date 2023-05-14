#include<stdio.h>
int main()
{
	int n,sum=0,m;//n表示空瓶子数 
	while (scanf("%d", &n) != EOF && n)
	{
		while(n>=2)
		{
			if(n>=3)
			{
				m=n/3;//m表示换的瓶数
				sum+=m;
				n=n-3*m+m; 
			}
			else if(n==2)
			{
				sum+=1;
				n=0;
			}
		}
		printf("%d\n", sum);
		sum=0;//记得置零 
	}
	return 0;
}