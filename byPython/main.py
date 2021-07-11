import ad
import advertiser
import baes_model

advertiser.Advertiser.totalClicks = 0

def main():
    baseAdvertising = baes_model.BaseAdvertising

    advertiser1 = advertiser.Advertiser(1, "name1")
    advertiser2 = advertiser.Advertiser(2, "name2")

    ad1 = ad.Ad(1, "title1", "img-url1", "link1", advertiser1)
    ad2 = ad.Ad(2, "title2", "img-url2", "link2", advertiser2)

    print(baseAdvertising.describeMe())
    print(ad2.describeMe())
    print(advertiser1.describeMe())

    ad1.incViews()
    ad1.incViews()
    ad1.incViews()
    ad1.incViews()
    ad2.incViews()
    
    ad1.incClicks()
    ad1.incClicks()
    ad2.incClicks()

    print("The name of advertiser2: "+ advertiser2.getName())
    advertiser2.setName("new name")
    print("The name of advertiser2: " + advertiser2.getName())

    print("Number of clicks of ad1: " , ad1.getClicks())
    print("Nember of clicks of advertiser2: " , advertiser2.getClicks())
    # print(advertiser1.getViews())
    # print(ad2.getViews())

    print("Number of total clicks: ", advertiser.Advertiser.getTotalClicks())
    print(advertiser.Advertiser.help())

main()