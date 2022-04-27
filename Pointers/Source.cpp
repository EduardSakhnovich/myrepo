#include<iostream>

int main()
{
	int age = 30;
	const double Pi = 3.1416;

	//Use & to find the address in memory
	std::cout << "Integer age is located at: 0x" << &age << std::endl;
	std::cout << "Double Pi is located at: 0x" << &Pi << std::endl;

	int* pointsToInt = &age;// pointer initialized to age

	//Displaying the value of pointer
	std::cout << "pointsToInt points to age now" << std::endl;
	std::cout << "Integer age at: 0x" << std::hex << pointsToInt << std::endl;
	std::cout << "Variable age at: 0x" << std::hex << &age << std::endl;

	int dogsAge = 9;
	pointsToInt = &dogsAge;

	std::cout << "pointsToInt points to dogsAge now" << std::endl;

	std::cout << "pointsToInt= 0x" << std::hex << pointsToInt << std::endl;

	int age = 30;
	int dogsAge = 9;

	std::cout << "Integer age= " << age << std::endl;
	std::cout << "Integer dogsAge = " << dogsAge << std::endl;

	int* pointsToInt = &age;
	std::cout << "pointsToInt points to age" << std::endl;
	
	//Displaying the value of pointer
	std::cout << "pointsToInt= 0x" << std::hex << pointsToInt << std::endl;

	//Displaying the value at the pointed location
	std::cout << "*pontsToInt= " << std::dec << *pointsToInt << std::endl;

	pointsToInt = &dogsAge;
	std::cout << "pointsToInt points to dogsAge now" << std::endl;

	std::cout << "pointsToInt = 0x" << std::hex << pointsToInt << std::endl;
	std::cout << "*pointsToInt=" << std::dec << *pointsToInt << std::endl;

	/**
	* Manipulating Data Using a Pointer and Dereference Operator (*)
	*/

	int dogsAge = 30;
	std::cout << "Initialized dogsAge = " << dogsAge << std::endl;

	int* pointsToAnAge = &dogsAge;

	std::cout << "pointsToAnAge points to dogsAge" << std::endl;

	std::cout << "Enter an age of your dog: " << std::endl;

	// store input at the memory pointed to by pointsToAnAge

	std::cin >> *pointsToAnAge;

	////Displaying an adress where age is stored
	std::cout << "Input stored at 0x" << std::hex << pointsToAnAge << std::endl;

	std::cout << "*pointsToDogsAge="  << std:: dec << *pointsToAnAge << std::endl;

	std::cout << "Integer dogsAge = " << std::dec << dogsAge << std::endl;

	/*
	* sizeof()
	*/

	std::cout << "sizeof fundamental types  - " << std::endl;
	std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
	std::cout << "sizeof(int)   =" << sizeof(int) << std::endl;
	std::cout << "sizeof(double)= " << sizeof(double) << std::endl;

	std::cout << std::endl;

	std::cout << "sizeof pointers to fundamental types - " << std::endl;
	std::cout << "sizeof(char*) = " << sizeof(char*) << std::endl;
	std::cout << "sizeof(int*)   =" << sizeof(int*) << std::endl;
	std::cout << "sizeof(double*)= " << sizeof(double*) << std::endl;

	return 0;
}