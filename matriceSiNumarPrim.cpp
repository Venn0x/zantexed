#include <iostream>
//1.Scrieti un algoritm care determina daca un numar este prim
bool estePrim(int& primaX){
	for(int i = 2;i<primaX;i++){
		return (primaX%i==0) ? 0:1;	
	}

}
//.
/*Intr-o matrice cu n linii si n coloane se determina pe fiecare linie valoarea maxima. Dintre aceste maxime sa se afle minimul si pozitia sa in matrice.*/









int main() 
{
//1.

int primaN;
std::cout<<"Introdu numarul pe care vrei sa il testezi: "<<std::endl;
std::cin>>primaN;
 if(estePrim(primaN))
	std::cout<<"Numarul "<< primaN << " este prim."<<std::endl;
 else
	std::cout<<"Numarul "<< primaN<< " nu este prim."<<std::endl;
	
//.
//2
short int n;
std::cout<<"Introdu numerele de coloane si linii: "<<std::endl;
std::cin>>n;
std::cout<<"Introdu elementele matricei.";                        
int matrice2[n][n];
for(int i = 0; i<n; i++)
{
	for(int j = 0; j<n; j++)
	{
		int x;
		std::cin>>x;
		matrice2[i][j] = x;
	}

}
int maxime[n];
int max = matrice2[0][0];
for(int i = 0;i < n; i++)
{
	for(int j = 0;j<n;j++)
	{
		max = (matrice2[i][j]>max) ? matrice2[i][j] : max; 
	}
	maxime[i] = max;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0;j < n; j++)
	{
		std::cout<<"v["<<i<<"]["<<j<<"] = "<<matrice2[i][j]<<std::endl;
	}
	
}

int minim = maxime[0];
for (int i = 1; i < n; i++)
{
	minim = (maxime[i]<minim) ? maxime[i]:minim;
}
std::cout<<"Minimul dintre maximele fiecarei linii a matricei este "<<minim<<std::endl;
//.







system("pause");







}
