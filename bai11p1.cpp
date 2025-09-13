#include <iostream>
#include <string>
using namespace std;

int main(){
	int sobotest;
	cin>>sobotest;
	
	while(sobotest--){
		int giasp,tongtien;
		cin>>giasp>>tongtien;
		int tienthua=tongtien-giasp;
		cout<<tienthua<<" = ";
		int t10=tienthua/10;
		int t=tienthua%10;
		int t5=t/5;
		int t1=t%5;
		cout<<t10<<" * 10"<<" + "<<t5<<" * 5"<<" + "<<t1<<" * 1";
		
		
		
	}
	return 0;
}
