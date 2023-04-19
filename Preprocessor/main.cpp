#include<iostream>
#include"Foo.h"


#define PI 3.14
#define E 2.71
#define forever for(int fori=0; ;fori++)
#define begin {
#define end }
#define sum(a,b) a+b
#define pr_arr(arr,len) std::cout<<'[';\
for (int i=0;i<len;i++)\
	std::cout<<arr[i]<<", ";\
std::cout<<"\b\b]\n"

#define NUMB 0
#if NUM > 0

void func() {
	std::cout << "Hello world\n";
}
#elif NUM < 0
void func() {
	std::cout << "WoW world\n";
}
#else

void func() {
	std::cout << "Bye world\n";
}
#endif

#ifdef NUM
const int L = 10;
#else 
const int L = 20;
#endif // NUM

















int main() {
	setlocale(LC_ALL, "ru");
	int n, m;

	func();
	std::cout << L << std::endl;






	/*std::cout << "PI = " << PI << std::endl;
	std::cout << "E = " << E << std::endl;
	forever{
		std::cout << '.';
		if (fori >= 10)
			break;
	}*/

	//Макросы препроцессора

//	std::cout << "Введите два числа :";
//	std::cin >> n >> m;
//	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;
//
//
//	const int size = 5;
//	int arr[size]{ 10,20,30,40,50 };
//	pr_arr(arr, size);
//
//	std::cout << PI << std::endl;
//#undef PI
//	//std::cout << PI << std::endl; // ошибка, т.к. имя PI освобождено
//#define PI 3
//	std::cout << PI << std::endl;





	return 0;
}