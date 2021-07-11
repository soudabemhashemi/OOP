import advertiser
import baes_model

class Ad(baes_model.BaseAdvertising):

    def __init__(self, _id, _title, _imgUrl, _link, _advertiser):
        self.__id = _id
        self.__title = _title
        self.__imgUrl = _imgUrl
        self.__link = _link
        self.views = 0
        self.clicks = 0
        self.setAdvertiser(_advertiser)

    def getTitle(self): 
        return self.__title

    def getImgUrl(self):
        return self.__imgUrl

    def setImgUrl(self, url):
        self.__imgUrl = url

    def getLink(self):
        return self.__link

    def setLink(self, _link):
        self.__link = _link

    def setAdvertiser(self, _advertiser):
        self.__advertiser = _advertiser

    def describeMe(self):
        return "Ad class stores information of advertisement."

    def incClicks(self):
            self.clicks += 1
            self.__advertiser.incClicks()

    def incViews(self):
            self.views += 1
            self.__advertiser.incViews()
