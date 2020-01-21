#include <iostream>
using namespace std;
const int Max=6;
int arreglo[Max];

#include <fstream>
void ingres();
void orden();
void nuevo();
int menu();

int main()
{
int op;

while (op != 0)
{
switch(op)
{
case 1:
{
ingres();
}
break;

case 2:
{
    orden();
}
break;
case 3:
{

nuevo();

}
break;


}
op = menu();
}
return 0;
}


void ingres()
{
    for (int i=0; i<Max; i++)
{
  cout<<"ingrese un numero "<<i+1<<endl;
   cin>> arreglo[i];

}

}
void orden()
{
    cout<< "Arreglo antes"<<endl;
  for (int i=0; i<Max; i++)
{
  cout<<arreglo[i]<<endl;

}
}
void nuevo()
{
	
	ofstream archivo;
	
	archivo.open("arreglo.txt");
	
    cout<< "Arreglo despues"<<endl;
    for(int j=5 ; j>=0; j--)
      {
	  if(archivo.is_open()){
		cout<<arreglo[j]<<endl;
		archivo << arreglo[j]<<endl;
	}
          

      }
      archivo.close();
}

int menu()
{
    int x = -1;
while ((x < 0)||(x > 3))
{
cout << "----------------Menu-------------------" << endl;
cout << "1 - Ingrese los valores" << endl;
cout << "2 - mostrar los elementos" << endl;
cout << "3 - mostrar el cambio" << endl;
cout << "0 - salir" << endl;
cout << "Opcion: " << endl;
cin >> x;
}
return x;

}

