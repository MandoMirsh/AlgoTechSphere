//a^2+b^2<=n;
//0<=a,b;
//1<=n<=10^18
using u4 unsigned long long int;
for (u64 a = 0; a*a<=n; a++){
	for (u64 b = 0; b*b <=n;b++){
		if( a*a+b*b<=n)
			count++;
		}
	}
	
for (u64 a = 0; a*a<=n; a++){
	for (u64 b = 0; b*b <=n-a*a;b++)
			count++;
		}
	}
//произведение длинных чисел идеально работает через FFT

