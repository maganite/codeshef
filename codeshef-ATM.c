// this program is in c langauge
// QUESTION NAME - ATM



#include <stdio.h>
int main() 
{
	int x;
	float y;
	scanf("%d%f",&x,&y);

	if(x%5==0)
	{
        if(x<=(y-0.5))
        {
            printf("%0.2f",y-(0.5+x));
        }
        else
        {
            printf("%0.2f",y);
        }
	   
	}
	else
	{
	    printf("%0.2f",y);
	}
	
	return 0;
}
