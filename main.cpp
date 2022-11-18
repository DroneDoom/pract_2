#include <iostream>
#include <getopt.h>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main(int argc, char *argv[])
{

	{ if (argc==1)
    {
        cout<<"КАЛЬКУЛЯТОР"<< endl<< "Чтобы выбрать действие, нужно ввести один из параметров:" << endl<< "-s — вычисление тангенса значениe" << endl << "-c — вычисление арктангенса значения"<< endl << "Для того чтобы продолжить запустите программу еще раз с нужным параметром и введите одно значения через пробел"<< endl<<"Значение должно быть от -1 до 1 включительно"<<endl;
    }        
int opt, i = 0;
	while ((opt = getopt (argc, argv, "s:c:")) != -1)
        {
            switch (opt)
            {
                case 's':{
                    
        			 for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
                    
        			}
                    if (i<4){
                    long double n = stold(argv[2]);//число которое ввели в терминале для функции
                    if (n<=1){cout<<"Результат:"<<tan(n)<<"-радиан   "<<tan(n)*180 / PI<<"-градусов"<<endl;}
                    else{cout<<"Error"<<endl;}}
                    else{cout<<"Error";}
                break; 
                }
               	case 'c':
                     for(i = 0; i<argc; i++)
   			 		{
        				cout<< i << ": "<< argv[i] << endl;
        			}
                    if (i<4){
                    long double n = stold(argv[2]);//число которое ввели в терминале для функции
                    if (n<=1){cout<<"Результат:"<<1/tan(n)<<"-радиан   "<<1/tan(n)*180 / PI<<"-градусов"<<endl;}
                    else{cout<<"Error"<<endl;}}
                    else{cout<<"Error";}
                break;       
            } 
        }
    }
}