#include <iostream>
using namespace std;

class GPSCoordinates {
private:
    double latitude;
    double longitude;

public:
    
    GPSCoordinates() {
        latitude = 0.0;
        longitude = 0.0;
    }

    GPSCoordinates(double lat, double lon) {
        latitude = lat;
        longitude = lon;
    }

    void setLatitude(double lat) {
        latitude = lat;
    }

    void setLongitude(double lon) {
        longitude = lon;
    }

    double getLatitude() const {
        return latitude;
    }

    double getLongitude() const {
        return longitude;
    }

    void display() const {
        cout << "(" << latitude << ", " << longitude << ")" << endl;
    }
};

int main() {
    
    GPSCoordinates location1;
    cout << "Location 1 (default): ";
    location1.display();

    location1.setLatitude(33.6844);
    location1.setLongitude(71.0975);
    cout << "Updated Location 1: ";
    location1.display();

    GPSCoordinates location2(33.6844, 73.0479);
    cout << "Location 2: ";
    location2.display();

    return 0;
}

