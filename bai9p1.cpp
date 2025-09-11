#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int kq=1;
	for(int i=n;i>1;i=i-2){
		kq=kq*i;
	}
	cout<<"ket qua bang: "<<kq;
	return 0;
}
