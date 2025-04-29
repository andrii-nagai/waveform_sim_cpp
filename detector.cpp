// SiPM or SPAD related class

#include <iostream>
using namespace std;

class Detector{
public:
    string Name;

    Detector(){
        Name = "TBD";
    }

    Detector(string dName){
        Name = dName;
    }

};

class SiPM:public Detector{

};

class SPAD:public Detector{

};

ostream& operator<<(ostream& COUT, Detector myDetector){
    COUT << "Detector Name :: "<<myDetector.Name << endl;
    return COUT;
}

int main() {

    Detector TestSiPM1("SiPM");
    Detector TestSiPM2;
    //TestSiPM.Name = "SiPM";

    cout << TestSiPM1 << TestSiPM2;
    return 0;
}