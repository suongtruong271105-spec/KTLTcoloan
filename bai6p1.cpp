#include <iostream>
#include <string>
using namespace std;

int main(){
	int thang;
	float laisuat, tg;
	cin>>tg>>thang>>laisuat;
	for(int i=0;i<thang;i++){
		tg=tg+(tg*laisuat/100);
	}
	cout<<"so tien sau khi gui la: "<<tg;
	return 0;
	
}
