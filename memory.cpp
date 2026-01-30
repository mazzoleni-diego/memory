#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

	
int main()
{
	srand(time(0));
	
	
	// creazion della matrice	
	const int d = rand() % 4 + 4;
	char m[d] [d];
	// array per non sovrascrivere
	int controllo[d] [d]={};
	
	//riempimento della matrice
	for( int i = 0; i < d; i++)
	{
		char a = rand() % 26 + 65;
		for(int s=0; s < 2; s++)
		{	
			if( controllo[y] [k] = 1 )
			{
				s--;
				break;	
			}
			
				
			int y = rand() % d;
			int k = rand() % d;
			m[y] [k] = a;
			controllo[y] [k] = 1;
				
		}		
	}
	
	
	
	
    return 0;
}	

