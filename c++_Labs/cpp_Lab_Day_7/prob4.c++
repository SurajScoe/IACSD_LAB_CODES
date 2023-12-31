#include<iostream>
#include<typeinfo>
using namespace std;
/*Non const class*/
class TestCast{
	private :int id;
	public:TestCast(int i){
		this->id=i;
	} 
    /*const function*/
	void test()const
         {
	//id=100;
	(const_cast<TestCast *>(this))->id=101;	
	}
	int getId(){
		return id;
	}
	void show(int *ptr){
		cout<<"Changed:"<<(*ptr+100)<<endl;
	}
};

class Emp1{
	public:virtual void show1()
	{
		cout<<"\nparent class show1"<<endl;
	}
};
class Mgr1 :public Emp1{
	public: void show1()
	{
		cout<<"\nchild class show1"<<endl;
	}
		public: void mgr1()
	{
		cout<<"\nchild class mgr1"<<endl;
	}
};

int main()
{
	int a=10;
	float f=90.909;
	//the static_cast operator is used to perform type conversions between related data types
	cout<<"float:"<<f<<"   int:"<<a<<endl; // 90.909 10
	
	//convert float into int
	int b=f;	
	cout<<"float:"<<b<<endl;//90
	
	//using static cast
	int c=static_cast<int>(f); 
	cout<<"casted int:"<<c<<endl; //90
	
	
	//const cast:
	// const_cast is a type of casting operator used to add or remove the const qualifier        from a pointer, reference, or object
	
	
	const int cnst=120;
	int &y=const_cast<int&>(cnst);
    // int &x = const_cast<int&>(cnst);

	cout<<"const:"<<cnst<<"    ref:"<<y<<endl; 
	y++;
	
	cout<<"const:"<<cnst<<"    ref:"<<y<<endl; 
	//const cast:const_cast can be used to change non-const class members inside a const member function.
	
	
	TestCast ts(2);
	cout<<"id:"<<ts.getId()<<endl;
	
	ts.test();
		cout<<"id:"<<ts.getId()<<endl;
	
	
	//const cast:const_cast can be used to pass const data to a function that doesn’t receive const.

 int fix=450;
 const int *ptr1=&fix;
int *ptr2=const_cast<int *>(ptr1);
ts.show(ptr2);
cout<<"const ptr2:"<<*ptr2;

//dynamic cast
int m=7,n=2;
float k=(float)m/n;//Now, the variable c is 3.5, because in the above expression first a is converted into float therefore a/b is also float type. 7.0/2 is 3.5. Then that is assigned to the variable c.
cout<<"\nk="<<k;

//Dynamic Cast: A cast is an operator that converts data from one type to another type.
// In C++, dynamic casting is mainly used for safe downcasting at run time. 
//To work on dynamic_cast there must be one virtual function in the base class.
// A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.



Mgr1 m1;
Emp1 e;
e.show1();
m1.show1();
Emp1 *bptr=&m1;
cout<<"base class pointer"<<endl;
bptr->show1();
//bptr->mgr1();//error
Mgr1 *mgr2=dynamic_cast<Mgr1*>(bptr);//down casting
mgr2->mgr1();

cout<<"\n typeinfo:"<<typeid(*bptr).name()<<endl;
if(typeid(*bptr)==typeid(Mgr1)){
	
	cout<<"\ncast to magr"<<endl;
}
cout<<"-------"<<endl;
Emp1 *base=new Emp1();
base->show1();


Emp1 *arr[2];
//Emp1 *arr=new Emp1[3];
arr[0]=&e;
arr[1]=&m1;

cout<<"-----collection-----"<<endl;
for(int i=0;i<2;i++){
	arr[i]->show1();
	cout<<"\t"<<typeid(*arr[i]).name();
	if(typeid(*arr[i])==typeid(Mgr1))
	{
		cout<<"    needed down casting"<<endl;
	Mgr1* mm=dynamic_cast<Mgr1*>(arr[i]);
		
		mm->mgr1();//child class
		
		
		
	}
}

return 0;
}


