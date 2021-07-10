all: main.out
CXXFLAGS = -std=c++11

main.out: main.cpp ad.cpp advertiser.cpp baes_model.cpp
	g++ $(CXXFLAGS) main.cpp baes_model.cpp -o main.out

baes_model.out: baes_model.cpp
	g++ $(CXXFLAGS) baes_model.cpp -o baes_model.out

advertiser.out: advertiser.cpp baes_model.cpp
	g++ $(CXXFLAGS) advertiser.cpp -o advertiser.out

ad.out: ad.cpp advertiser.cpp baes_model.cpp
	g++ $(CXXFLAGS) ad.cpp -o ad.cpp

.PHONY: clean
clean:
	rm *.out
	rm -r pipes

