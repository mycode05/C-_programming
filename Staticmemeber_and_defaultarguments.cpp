 #include<iostream>
 using namespace std;
 class Calculator{
 	public:
 		static int add(int x,int y);
 		static int diff(int x,int y);
 };
 int Calculator::add(int x,int y){
 	return x+y;
 }
 int Calculator::diff(int x,int y=0){
 	return x-y;
 }
 int main(){
 	int x=15,y=10;
 	cout<<"Addition :"<<Calculator::add(x,y)<<endl;
 	cout<<"Difference: "<<Calculator::diff(x)<<endl;
 	return 0;
 }