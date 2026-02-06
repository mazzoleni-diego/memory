#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

	
int main()
{
	srand(time(0));
	
	
	// creazion della matrice	
	const int d = rand() % 4 + 4;
	cout << d << endl;       /***********************/
	char m[d] [d]={};
	
	for( int i = 0; i < d; i++)
	{
		for(int s = 0; s < d; s++)
		{
			cout << m [i] [s] << " ";
		}
		cout << endl;	
	}

	
	//riempimento della matrice
	int controllo[26]={};
	for( int i = 0; i < d*d/2; i++)
	{
		char a = rand() % 26 + 65;
			
		//controllo per generare lettere diverse
		int z = a - 64;
		cout << z;	
		cout << a << endl;   
		if(controllo[z] == 1)
		{
			i--;
			continue;
		}
		else
		{
				
			//genero le posizioni delle coppie
			for(int s = 0; s < 2; s++)
			{	
				int y = rand() % d;
				int x = rand() % d;
				
				//controllo se la casella e' libera
				if( m[y] [x] == 0 )
				{
					m[y] [x] = a;
				}
				else
				{
					s--;
					continue;
				}						
			}		
		}
		controllo[z] = 1;
	}

	for( int i = 0; i < d; i++)
		{
			int s = 0;
			for(; s < d; s++)
			{
				if( m [i] [s] == 0 )
				{
					m [i] [s] = 35;
				}	
			}
				
		}
	

	//stampa
	for( int i = 0; i < d; i++)
	{
		for(int s = 0; s < d; s++)
		{
			cout << m [i] [s] << " ";
		}
		cout << endl;	
	}
		
    return 0;
}



