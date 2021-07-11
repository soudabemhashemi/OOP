CREATE DATABASE adDB;

CREATE TABLE Advertiser(
	id INT NOT NULL,
    name VARCHAR(20),
    clicks INT,
    views INT,
    PRIMARY KEY (id));

CREATE TABLE Ad(
	id INT NOT NULL,
    AdvertiserID INT NOT NULL,
    title VARCHAR(20),
    imgUrl VARCHAR(20),
    link VARCHAR(20),
    clicks INT,
    views INT,
    PRIMARY KEY (id),
    FOREIGN KEY (AdvertiserID) REFERENCES Advertiser);
    