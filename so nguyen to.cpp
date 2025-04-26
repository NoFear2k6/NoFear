#include<iostream>
using namespace std;
int main(){
	int n,dem=0;
	cin>>n;
	if(n<2) cout<<"khong phai so nguyen to";
	else{
	for(int i=2;i<=n/2;i++){
		if (n%i==0){
		dem++;
		break;
		}
	}
	if(dem==0)
	 cout<<"la so nguyen to";
	 else cout<<"khong la so nguyen to";
}
}

