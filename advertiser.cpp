#include "baes_model.cpp"

class Advertiser: public BaseAdvertising{
    public:
        static int totalClicks;

        Advertiser(int _id, string _name){
            id = _id;
            name = _name;
            clicks = 0;
            views = 0;
        }
        string getName(){ return name;}
        void setName(string _name) {name=_name;}
        static string help(){return "Id: is unique for every advertiser. name: is a name of advertiser. clicks: The number of clicks of an ad. views: The number of views of an ad";}
        static int getTotalClicks(){return totalClicks;};
        void incClicks(){
            clicks += 1;
            totalClicks += 1;
        }
        void incViews() {views += 1;}
        string describeMe(){return "Advertiser class stores information of advertiser.";}

    private:
        int id;
        string name;
};