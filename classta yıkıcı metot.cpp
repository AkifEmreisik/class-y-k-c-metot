#include<iostream>

class Silah{
	public:
		int mermi;
	Silah(){
		std::cout<<"look at me  ";
	}
	~Silah(){
		std::cout<<"Akif";
	}
};
class Ak47 : public Silah{
	public:
		bool SeriTek;
	Ak47(){
		std::cout<<"My ";
	}
	~Ak47(){
		std::cout<<"name is ";
	}
};


int main(){
	class Ak47 ak47;
	return 0;
}
