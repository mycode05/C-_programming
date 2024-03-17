 #include<iostream>
 using namespace std;
 class MathLib{
 	public:
 		static int factorial (int n){
 			if (n==0){
 				return 1;
			 }
			 else{
			 	return n*factorial(n-1);
			 }
		 }
 };
 int main(){
 	cout<<"Factorial of 5 is :"<<MathLib::factorial(5);
 	return 0;
 }