#include "ad.cpp"

int Advertiser::totalClicks = 0;

int main(){
    BaseAdvertising baseAdvertising;

    Advertiser advertiser1(1, "name1");
    Advertiser advertiser2(2, "name2");

    Ad ad1(1, "title1", "img-url1", "link1", &advertiser1);
    Ad ad2(2, "title2", "img-url2", "link2", &advertiser2);

    cout << baseAdvertising.describeMe() <<endl;
    cout << ad2.describeMe() << endl;
    cout << advertiser1.describeMe() << endl;

    ad1.incViews();
    ad1.incViews();
    ad1.incViews();
    ad1.incViews();
    ad2.incViews();
    
    ad1.incClicks();
    ad1.incClicks();
    ad2.incClicks();

    cout << "The name of advertiser2: " << advertiser2.getName() << endl;
    advertiser2.setName("new name");
    cout << "The name of advertiser2: " << advertiser2.getName() << endl;

    cout << "Number of clicks of ad1: " << ad1.getClicks() << endl;
    cout << "Nember of clicks of advertiser2: " << advertiser2.getClicks() << endl;

    cout << "Number of total clicks: " << Advertiser::getTotalClicks() << endl;
    cout << Advertiser::help() << endl;
}
