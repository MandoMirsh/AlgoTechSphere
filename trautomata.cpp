#include <iostream>
int main(int argc, char ** argv){
	//5 10 50 100
	//+1 -1 -9 -19
	long long int n,m,s=0,ms=0;
	
	std::cin>>n;
	for (int i=0; i<n; i++)
		{
			std::cin>>m;
			if (m==5)
				s--;
			else
				s+=m/5-1;
			if (s>ms)
				ms = s;
		} 
		std::cout<<ms;
	return 0;
	
}
