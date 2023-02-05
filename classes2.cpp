#include<iostream>
#include<string>
using namespace std;

class Name()
{
    public: 
    void setname(string x){
        name=x;
        }
    string get()
    { return name;
    }
    private :
    string name;
};
int main()
{
    Name name;
    name.setname("Vimalakoja");
}