#include "advertiser.cpp"

class Ad: public BaseAdvertising{
    public:
        Ad(int _id, string _title, string _imgUrl, string _link, Advertiser *_advertiser){
            id = _id;
            title = _title;
            imgUrl = _imgUrl;
            link = _link;
            views = 0;
            clicks = 0;
            setAdvertiser(_advertiser);
        }
        string getTitle(){return title;}
        string getImgUrl(){return imgUrl;}
        void setImgUrl(string url){imgUrl = url;}
        string getLink(){return link;}
        void setLink(string _link){link = _link;}
        void setAdvertiser(Advertiser *_advertiser){ advertiser = _advertiser;}
        string describeMe(){return "Ad class stores information of advertisement.";}
        void incClicks() {
            clicks += 1;
            advertiser->incClicks();
            }
        void incViews() {
            views += 1;
            advertiser->incViews();
            }


    private:
        int id;
        string title;
        string imgUrl;
        string link;
        Advertiser *advertiser;

};