/*
 * stack.cxx
 * 
 * Copyright 2018 Сергей Черевков <seriu007@debcom>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

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

int main(int argc; char ** argv){
	stack a;
	int c;
	while (scanf("%d",&c)>=1){
		a.push(c);
	}
	while (!a.empty(){
		int ob;
		a.pop(ob);
		printf("%d ",ob);
	}
	return 0;
}
