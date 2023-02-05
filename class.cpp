#include<iostream>
using namespace std;

class Num{
    public:
    int answer;
    int num(int x,int y){
        answer=x+y;
         cout<< answer;
    }

};
int main()
{
    Num numobject;
    numobject.num(453,3453);
return 0;
}