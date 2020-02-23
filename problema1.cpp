#include <iostream>
/*Scrieti un program in care introduceti n numere naturale de la tastatura si afisati cea mai mare cifra a fiecarui numar.(1.31)*/
int main()
{
	int x, n, y;
	int max;
	std::cout << "n= "; std::cin >> n;
	for(int i = 1; i <= n; i++)
	{
		std::cout << "x= ";
		std::cin >> x;
		y = x;
		max = 0;
		while (x > 0) 
		{
			max = (x % 10 > max) ? (x % 10) : max;
			x = x / 10;
		}
		std::cout << y << " are cifra maxima " << max << std::endl;
	}
	return 0;
}