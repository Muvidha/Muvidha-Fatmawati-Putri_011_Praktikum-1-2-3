#include<iostream>
using namespace std ;
 
int main() 
{
	cout << " --------------------\n " ;
	cout << "Tabel Perkalian \n " ;
    cout << " --------------------\n " ;
   
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            cout << i*j << "\t " ;
        }
            cout << endl << endl ;
    }
   return 0;
}
