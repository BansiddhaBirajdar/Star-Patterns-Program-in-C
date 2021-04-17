#include<stdio.h>

void display(int v,int h)
{

	int r,c;
	if(h==v)
	{
		for(r = 0 ; r < v ; r++)
		{
			for ( c = 0; c < h; ++c)
			{
				printf(" %d ",r+1);
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("\ninvalied input");
	}


}

int main()
{
	int h,v,r,c;
	printf("\nEnter the horizontal:");
	scanf("%d",&h);//4
	printf("\nEnter the vertical:");
	scanf("%d",&v);//4
	display(v,h);
	return 0;
}