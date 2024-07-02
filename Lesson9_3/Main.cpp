template <class T>
class Father
{
    T* data;
};


class Girl : public Father<int>
{
    //…
};

template <class T>
class Son : public Father<T>
{
    //T …
};


int main()
{
    Girl g;
    //...
     
    Father<char> f;
    Son<int> s;
    //...

    
    //ok:
    Father<int>* f1 = new Father<int>;

    Girl g1;

    Son<int> s1;

    f1 = &s1;

    f1 = new Girl();

    f1 = &g1;

    Son<char> s2;

    //f1 = &s2; //comp error

}
