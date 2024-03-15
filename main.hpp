#include <iostream>
using namespace std;
int getNextPrime(int);
int getPrevPrime(int);
void getTwoValues(int& begin, int& end)
{
    for (int i = 0; i < 1;)
    {
        cin>>begin>>end;
        if ((begin<end))
        {       
            i++;
        }
    }
    
    
}

int getNextPrime(int begin)
{
int k,h,flag=0;
	for (h = begin; h < (begin+1000);h++)
	{
        flag=0;
		for (  k= 2; k <= (h/2); k++)
		{
			if (h%k==0)
			{
				flag=1; break;
			}
		}
		if (flag==0)
		{
            return h;
            h=begin+1000;
		}
	}
}

int getPrevPrime(int end)
{

int k,h,flag=0;
	for (h = end; h > (end-1000);h--)
	{
        flag=0;
		for (  k= 2; k <= (h/2); k++)
		{
			if (h%k==0)
			{
				flag=1; break;
			}
		}
		if (flag==0)
		{
            return h;
            h=end-1000;
		}
	}
}

