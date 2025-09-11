#include <iostream>
#include <string>
using namespace std;

int main(){
int thang,nam,songay	;
cin>>thang>>nam;
switch(thang){
	
	
	case  1:case 3:case 5: case 7:case 8 :case 10:case 12 :{
		songay=31;
		break;
	}
	case 4:case 6:case 9: case 11:{
		songay=30;
		break;
	}
	case 2:{
			if((nam%4==0 && nam%100!=0)||(nam%400==0)){
			songay=29;
		}else songay=28;
		break;
	}
	
	default : {
		songay=0;
		break;
	}
}

cout<<songay;
return 0;
}
