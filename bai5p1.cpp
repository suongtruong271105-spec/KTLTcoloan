#include <iostream>
#include <string>
using namespace std;

int main(){
	float diem;
	cin>>diem;
	float thang4;
	string thangchu;
	if(diem>=9.0){
		thang4=4.0;
		thangchu="A+";
	}else if(diem>=8.0&&diem<9.0){
		thang4=3.5;
		thangchu="A";
	}
	else if (diem >= 7.0) {
        thang4 = 3.0;
        thangchu = "B+";
    } else if (diem >= 6.0) {
        thang4 = 2.5;
        thangchu = "B";
    } else if (diem >= 5.0) {
        thang4 = 2.0;
        thangchu = "C";
    } else if (diem >= 4.0) {
        thang4 = 1.5;
        thangchu = "D";
    } else { 
        thang4 = 1.0;
        thangchu = "F";
    }
	cout<<"thang diem 4 :"<<thang4<<"  thang diem chu :"<<thangchu;
	return 0;
}
