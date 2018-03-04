#include  <iostream>
using namespace std;
 
class Hello
{
    private:
        void sayHello()
        {
                cout << "Hello World" << endl;
        }
};
 
void main(void)
{
    Hello h;
     
    h.sayHello();
     
    return 0;
}
