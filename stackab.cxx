#include <iostream>

class Stack{
	//если будет динамический, будет, сцуко, медленный.
	int * base, size, max_size;
	
public:
	
	Stack(int n = 1000){
		base = new int[max_size = n];
		size =0;
	};
	~Stack(){
		delete [] base;
	};
	bool push (int ob){
		if (size>=max_size) return false;
		//assert(size<max) ;
		
		base[size++] = ob;
		return true;
	};
	
	bool pop(int &ob){
		if(size<=0) return false;
		//assert(size>0);
		ob = base[--size];
		return true;
	};
	bool isempty(){
		return size<=0;
	};
};

int main(int argc, char **argv)
{
	Stack a(20000),b(20000);	
	int i;
	char c;
	while (scanf("%c",&c)>0)
	{
		if (c=='a')
			a.push(i);
		if (c=='b')
			b.push(i);
	}
	while(a.pop(i)&&b.pop(i));
	if (a.isempty()&&b.isempty())
		std::cout<<"YES";
	else 
		std::cout<<"NO";	
	
	return 0;
}
