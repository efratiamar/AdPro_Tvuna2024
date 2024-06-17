//#include <iostream>
//using namespace std;
//
////class Animal
////{
////private:
////	int idAnimal;
////
////protected:
////	float cageSize;
////	int itemNum;
////	bool carnivorous;
////	int* feeding[7];
////
////public:
////	void setId(int id)
////	{
////		idAnimal = id; //ok
////	};
////};
////
////
////class Bird : public Animal
////{
////private:
////	float highetTopCage;
////
////public:
////	void SetBird()
////	{
////			
////		cageSize = 5; //ok
////		itemNum = 7; //ok
////		carnivorous = false; //ok
////		idAnimal = 1; //compilation error
////		setId(1); //ok
////	}
////};
////
////int main()
////{
////	Bird b;
////	b.itemNum = 8; //compilation error
////	b.cageSize = 9; //compilation error
////	b.setId(1); //ok
////	b.SetBird(); //ok
////}
//
//
//class Animal
//{
//protected:
//	float cageSize;
//	int itemNum;
//	bool carnivorous;
//	int* feeding[7];
//public:
//	//Animal()
//	//{
//	//	cageSize = 5;
//	//	itemNum = 7;
//	//	carnivorous = false;
//	//}
//
//	Animal(float c, int i, bool v)
//		: cageSize(c), itemNum(i), carnivorous(v)
//	{
//		cout << "Animal ctor " << itemNum << endl;
//	}
//	~Animal()
//	{
//		cout << "Animal dtor " << itemNum << endl;
//	}
//};
//
//class Bird : public Animal
//{
//private:
//	float highetTopCage;
//public:
//	Bird(int x, int y, int z, float h) 
//		: highetTopCage(h), Animal(x,y,z)
//	{
//		cout << "Bird ctor\n";
//	}
//
//	~Bird()
//	{
//		cageSize = 9;
//		cout << "Bird dtor " << endl;
//	}
//
//};
//
//int main()
//{
//	Bird b (1,2,4,5);
//
//}
//
////class Bird : public Animal
////{
////private:
////	float highetTopCage;
////public:
////	Bird(float h) : Animal(), highetTopCage(h)
////	{
////		//…
////	}
////};
//
////class Bird : public Animal
////{
////private:
////	float highetTopCage;
////public:
////	Bird(float h) : highetTopCage(h)
////	{ }
////};
//
//
////class Kangaroo : public Animal
////{
////	Animal babyKan;
////private:
////	float sizeOfPocket;
////public:
////	Kangaroo(float f) : Animal(1,11, false),
////		babyKan(2,22,false), sizeOfPocket(f)
////	{
////		cout << "Kangaroo ctor\n";
////	}
////	~Kangaroo()
////	{
////		cout << "Kangaroo dtor\n";
////	}
////};
//
////int  main()
////{
////	Bird  parrot(2.6);
////	Kangaroo kan(4);
////}
//
//
//
////class Animal
////{
////private:
////    int idAnimal;
////
////protected:
////    float cageSize;
////    int itemNum;
////    bool carnivorous;
////    int* feeding[7];
////
////public:
////    void setId(int id)
////    {
////        idAnimal = id; //ok
////    };
////};
////
////class Bird : public Animal
////{
////private:
////    float highetTopCage;
////
////public:
////    void SetBird()
////    {
////        cageSize = 5; //ok
////        itemNum = 7; //ok
////        carnivorous = false; //ok
////        //idAnimal = 1; //compilation error
////        setId(1); //ok
////    }
////};
////
////int main()
////{
////    Bird b;
////    //b.itemNum = 8; //compilation error
////    //b.cageSize = 9; //compilation error
////    b.setId(1); //ok
////    b.SetBird(); //ok
////}
//
