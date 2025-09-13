#include <iostream>
#include <string>
using namespace std;

int main(){
	int thang;
	float laisuat, tg;
	cin>>tg>>thang>>laisuat;
	for(int i=0;i<thang;i++){
		tg=tg/(1+laisuat/100);
	}
	cout<<"so tien can gui la: "<<tg;
	return 0;
	
}
