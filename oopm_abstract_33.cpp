// Lets create a abstract base class
#include <iostream>
using namespace std;
class channel
{
protected:
    string name;

public:
    channel() {}
    channel(string s)
    {
        name = s;
    }
    virtual void display() = 0;
};
class channelText : public channel
{
    int subscriber;

public:
    channelText() {}
    channelText(string s, int sub) : channel(s)
    {
        subscriber = sub;
    }
    void display()
    {
        cout << "Channel name is " << name << endl;
        cout << "number of subscribers are " << subscriber << endl;
    }
};
int main()
{
    channel *ptr;
    channelText obj_channel;
    obj_channel = channelText("salil", 1000);
    ptr = &obj_channel;
    ptr->display();
    return 0;
}