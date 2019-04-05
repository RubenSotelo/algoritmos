#include <iostream>
using namespace std;
float niveles[5][3];
////////////////////////////
int participantes();
float promedioTotal();
float elPuntuajeMasAltoDelNivel();
float elPuntuajeMasAlto(int el);
///////////////////////////
int main ()
{
	participantes();
}
//mis funciones
int participantes()
{
	int i, j;
	float participante;
	for(i=0;i<5;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"ingresa el puntuaje del participante "<<j+1<<" del nivel "<<i+1<<endl;
			do
			{
				cin>>participante;
			}
			while(participante<=0 || participante>24.8);
			niveles[i][j]=participante;
		}
	}
	promedioTotal();
	
}
float promedioTotal()
{
	int i, j;
	float acum=0,promedio=0;
	for(i=0;i<5;i++)
	{
		for (j=0;j<3;j++)
		{	
			acum=acum+niveles[i][j];
		}
		promedio=acum/3;
		cout<<"el promedio del nivel "<<i+1<<" en puntuaje es: "<<promedio<<endl;
	}
	elPuntuajeMasAltoDelNivel();
}
float elPuntuajeMasAltoDelNivel()
{
	int i, j, el=0;
	float elMejor=1;
	for(i=0;i<5;i++)
	{
		for (j=0;j<3;j++)
		{
			if(niveles[i][j]>elMejor)
			{
				elMejor=niveles[i][j];
			}
//			else
//			{
//				elMejor=elMejor;
//			}
		
		}
		if(elMejor==24.8)
		{
			el=i;
			cout<<"el= "<<el<<endl;
		}
		cout<<"el mejor del nivel "<<i+1<<" es: "<<elMejor<<endl;
		elMejor=1;
	}
	elPuntuajeMasAlto(el);

}
float elPuntuajeMasAlto(int el)
{
	cout<<" el puntuaje mas alto de juego fue del nivel "<<el<<" con el sorprendente pontuaje de 24.8 puntos"<<endl;
}
/*
solitario
clasico
spider
medio
avanzado
pro
puntos maximos 24.8
sacar promedio
*/
