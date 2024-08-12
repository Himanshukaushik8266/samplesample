#include<bits/stdc++.h>

using namespace std;
long long computeFactorial(int a){
	if(a==0 || a==1){	
		return 1;
	}
	return a*computeFactorial(a-1);
}
int main(){
	
	int a=6;
	long long ans = computeFactorial(a);
	std::cout<<"The factorial of a is : "<<ans<<std::endl;

	return 0;
}
