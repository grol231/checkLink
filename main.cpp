#include <iostream>
#include <memory>
using namespace std;
class Object
{
public:
    Object() { /*cout << "create Object" << endl;*/ }
    ~Object(){ /*cout << "destroy Object" << endl;*/}
    shared_ptr<Object> ptr;
};
int main()
{
    shared_ptr<Object> p1 = make_shared<Object>();
    shared_ptr<Object> p2 = make_shared<Object>();
    p1->ptr = p2;
    p2->ptr = p1;
    return 0;
}