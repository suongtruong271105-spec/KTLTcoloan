#include <iostream>
#include <string>
using namespace std;

int main(){
	float tg,tn,laisuat;
	cin>>tg>>tn>>laisuat;
	int thang =0;
	while(tg<tn){
		tg= tg+(tg*laisuat/100);
		thang++; 
	}
	cout<<"so thang can gui :"<<thang;
	return 0;
}
