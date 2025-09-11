#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool snt=true;
	if(n<2){
		snt=false;
	}
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				snt=false;
			}
		}
	}
	if(snt){
		cout<<"la so nguyen to";
	}else cout<<"khong";
	return 0;
}
