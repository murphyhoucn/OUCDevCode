#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void shout() = 0;   //���麯��
};
// �ڴ˴�������Ĵ���

class Dog:public Animal
{
public:
    virtual void shout()
    {
        cout << "dog" << endl;
    }

};

class Cat :public Animal
{
public:
    virtual void shout()
    {
        cout << "cat" << endl;
    }

};

class Bird :public Animal
{
public:
    virtual void shout()
    {
        cout << "bird" << endl;
    }

};

int main()
{
    Animal* anim1 = new Dog;
    Animal* anim2 = new Cat;
    Animal* anim3 = new Bird;

    anim1->shout();
    anim2->shout();
    anim3->shout();

    return 0;
}