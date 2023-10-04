#include <iostream>

using namespace std;

double Score(int numberOfCorrect ) {
return numberOfCorrect * 1;
}

string status(double Score) {
    string str;
if (Score < 0) {
    str = "Error";
}
else if (Score < 4) {
    str = "Kem";
}
else if (Score >= 4 && Score <8) {
    str = "Dat";
}
else if (Score >= 8) {
    str = "Gioi(Award)";
}
else {
    str = "Error";
}
return str;
}

int main() {
int numberOfCorrect;
cin >> numberOfCorrect;
if (numberOfCorrect < 0 || numberOfCorrect > 50) {
    cout << "Khong hop le";
}
else {
    double sc = Score(numberOfCorrect);
    string outp = status(sc);
    cout << outp;
}
return 0;
}

