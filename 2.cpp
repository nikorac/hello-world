#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	//rije�iti uporabom dvostrukog uvjetnog granjanja
	int a;
	cout<<"Upi�i neki broj razli�it od 0";
	cin>>a;
	if(a<0){
		cout<<"Broj"<<a<<"je manji od 0";
	}
	else{
			cout<<"Broj"<<a<<"je ve�i od 0";
	}
}
