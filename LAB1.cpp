//wap to find the reverse of the given number
#include<iostream>
using namespace std;
int main(){
	int n,i,rev=0;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	while(n!=0){
		i=n%10;
		rev=rev*10+i;
		n=n/10;
		
	}
	cout<<"Reverse of the inputted number is: "<<rev<<endl;
	return 0;
}
