#include <iostream>


int main(){
short int m;
std::cin>>m;
while(m%2==0){
    std::cout<<"Introdu un numar impar de coloane: "<<std::endl;
    std::cin>>m;
}
int v[m][m];
//introducem elementele de la tastatura
for(int i = 0; i<m; i++)
{
    for (int j = 0; j < m; j++)
    {
        int x;
        std::cin>>x;
        v[i][j] = x;
        
    }
    
}
std::cout<<".......Se citeste......."<<std::endl;
//citim matricea
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < m; j++)
    {
        std::cout<<v[i][j];
    }
    std::cout<<std::endl;
}
std::cout<<"......Linia din mijloc........"<<std::endl;
//citim doar linia din mijloc
for (int j = 0; j<m; j++){
    std::cout<<v[m/2][j]<<' ';
}
//citim doar coloana
std::cout<<"\n..............Diagonala......."<<std::endl;
for (int i = 0; i<m; i++){
    std::cout<<v[i][i]<<' ';
}
std::cout<<"\n..............Diagonala2......."<<std::endl;
for (int i = 0; i<m; i++)
    for(int j = 0;j<m; j++)
    {
    if((i+j)==(m-1))
        {
        std::cout<<v[i][j]<<' ';
        }
    }
std::cout<<"\n..............Triunghi sus......."<<std::endl;
for (int i = 0; i<m; i++)
    {

    for(int j = 0;j<m; j++)
    {
    if(i>j)
        {
            std::cout<<'0'<<' ';   
        }else std::cout<<v[i][j]<<' ';
        
    } 
    std::cout<<std::endl; 
    }
}