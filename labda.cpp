#include "std_lib_facilities.h"
#include <unistd.h>

#define SZEL 78
#define MAG 22

int putX(int x,int y)
{
	int i;

	for(i=0;i<x;i++)
		cout<<("\n");

	for(i=0;i<y;i++)
		cout<<(" ");

	cout<<("X\n");

	return 0;
}

int main()
{
	int x=0,y=0;

	while(1)
	{
		system("clear");
		putX(abs(MAG-(x++%(MAG*2))),abs(SZEL-(y++%(SZEL*2))));
		usleep(50000);
	}

	return 0;
} 
