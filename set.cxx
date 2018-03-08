class Set{
using u8 = unsigned char;
//байт - кусок памяти, адресуемый прямо или косвенно, в который записывается один сивол.
//В настоящее время равен одному октету.
//октет - восемь бит.
	u8 *base;
	int rmax;
public:
 Set(int n){
	 base = new u8[max = (n+7)/8];
 }
 ~Set(){
	 delete[] base;
 }
 
 bool insert(unsigned n){
	 if (n>>3>=max) return false;
	 base[n>>3] |= 1<<(n&7);
	 return true;
 }
bool remove(unsigned n){
	if (n>>3>=max) return false;
	base[n>>3]&=~(1<n&7);
	return true;
}
int in( unsigned n){
	return (base[n>>3]>>(n&7))&1;
}
//11111{k единиц} (1<<k)-1
