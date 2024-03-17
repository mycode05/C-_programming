 //Operating overloading on--- Binary operators and unary operators
 #include<iostream>
 using namespace std;
 class Distance{
 	public:
 		int feet,inches;
 		Distance(){
 			feet=0;
 			inches=0;
		 }
		Distance(int f,int i){
			feet=f;
			inches=i;
		}
		//- minus unary operator overloading
		Distance operator -(){
			feet=-feet;
			inches=-inches;
			return Distance(feet,inches);
		}
		//++ unary operator overloading
		Distance operator ++(){
			feet=++feet;
			inches=++inches;
			return Distance(feet,inches);
		}
		//- bianry operator overloading
		Distance operator -(const Distance &obj){
			return Distance(feet-obj.feet,inches-obj.inches);
		}
		//dispaly diatance
		void display(){
			cout << "FEET: "<<feet<<" INCHES: "<<inches<<endl;
		}
 };
 int main(){
 	Distance d1(10,11),d2(2,-3),d3;
 	d3=d1-d2;
 	cout<<"D3 = D1 -D2 --->";
	d3.display();
 	-d1;
 	cout<<"\n-D1 --->";
	 d1.display() ;
 	++d2;
 	cout<<"\n++D2 --->";
	 d2.display();
	
 	return 0;
}