#include <iostream>
#include <string>
using namespace std;


class BaseAdvertising{
    public:
        int getClicks() {return clicks;}
        int getViews() {return views;}
        string describeMe(){return "BaseAdvertising class stores common methods.";}

    protected:
        int clicks;
        int views;

};
