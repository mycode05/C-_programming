#include<stdlib.h>
 #include<iostream>
 using namespace std;
 class Student{
 	public:
 		string name;
 		int age;
 		Student(){
 			cout<<"constructor overloading is called\n" ;
		 }
		 Student(string n,int a){
		 	name=n;
		 	age=a;
		 }
		 void display(){
		 	cout<<"Name: "<<name<<endl;
		 	cout<<"Age: "<<age<<endl;
		 }
		 void * operator new(size_t size){
		 	cout<<"\nOverloading neww operator with size: "<<size<<endl;
		 	void *p =:: operator new(size);
		 	return p;
		 }
		 void operator delete(void *p){
		 	cout<<"\nOverloading delete operator"<<endl;
		 	free(p);
		 }
 };
 int main(){
 	Student *p=::new Student("Jyotsna",19);
 	p->display();
 	
 	delete p;
 	return 0;
 }