import baes_model

class Advertiser(baes_model.BaseAdvertising):
    totalClicks = 0

    def __init__(self, _id, _name):
            self.__id = _id
            self.__name = _name
            self.clicks = 0
            self.views = 0

    def getName(self):
        return self.__name

    def setName(self, _name):
        self.__name=_name

    def help():
        return "Id: is unique for every advertiser. name: is a name of advertiser. clicks: The number of clicks of an ad. views: The number of views of an ad"

    def getTotalClicks():
        return Advertiser.totalClicks

    def incClicks(self):
            self.clicks += 1
            Advertiser.totalClicks += 1

    def incViews(self):
        self.views += 1

    def describeMe(self):
        return "Advertiser class stores information of advertiser."
