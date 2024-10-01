/* Da der Datentyp int immer zu 0 rundet, wird für 
gerade n immer n/2 und für ungerade n immer (n+1)/2 ausgegeben.*/

#include <iostream>

int main()
{
	int n = 42;
	int result = (n+1)/2;
	std::cout << "f(" << n << ")=" << result << std::endl;
	
}