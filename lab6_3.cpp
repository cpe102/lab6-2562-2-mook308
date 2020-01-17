#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char ans;
	if(x>'Z' || x<'A'){
		ans=48;
		return ans;
	}
	x = x-1;
		if(x<65){
			ans = x+26;
			return ans;
		}else{
			ans = x;
			return ans;
		}




}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
