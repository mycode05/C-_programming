 #include<iostream>
 using namespace std;
 class Base{
 	private:
 		int private_variable;
 	protected:
 		int protected_variable;
 	public:
 		Base(){
 			private_variable=123;
 			protected_variable=234;
		 }
    friend void friendfunction(Base & obj);
 };
 void friendfunction(Base & obj){
 	cout<<"Friend function is called!"<<endl;
 	cout<<"Private variable: "<<obj.private_variable<<endl;
 	cout<<"Protected variable: "<<obj.protected_variable<<endl;
 }
 int main(){
 	Base obj1;
 	friendfunction(obj1);
 	return 0;
 }