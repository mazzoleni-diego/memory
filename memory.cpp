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
	for( int i = 0; i < d; i++)
	{
		char a = rand() % 26 + 65;		
		cout << a << endl;    /***********************/

		//genero le coppie
		for(int s = 0; s < 2; s++)
		{	
			int y = rand() % d;
			int x = rand() % d;
			
			//controllo se la casella e' libera
			if( m[y] [x] != 0 )
			{
				s--;
				break;	
			}

			m[y] [x] = a;				
		}		
	}
	cout << "ok\n"; /****************************/
	
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


