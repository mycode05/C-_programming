 #include <iostream>
 using namespace std;
 int add(int,int);
 double add(double,int);
 double add(int,double);
 int add(double,double);
 int main(){
 	cout << "int + int : " << add(5,5)<<endl;
 	cout << "double + int : " << add(5.5,5)<<endl;
 	cout << "int + double : "<< add(5,5.5)<<endl;
 	cout << "double + double : "<<add(5.5,5.5)<<endl;
 	return 0;
 }
 int add(int a,int b){
 	return a+b;
 }
 double add(double a,int b){
 	return a+b;
}
double add(int a,double b){
	return a+b;
}
int add(double a,double b){
	return a+b;
}