#include <iostream>
//#include <cmath>
using namespace std;
int main() {

    int lineIndex;


    cout << "Enter an odd number: " ;
    cin >> lineIndex;
    cout << endl;

    if (lineIndex%2==1) {
        for (int lineCount = 1; lineCount <= lineIndex; lineCount++) {

            if ((lineIndex / 2) + 1 >= lineCount) {
                for (int space = (lineIndex / 2) + lineCount; space < lineIndex; space++) {
                    cout << " ";
                }
                for (int star = lineIndex - 2 * lineCount + 2; star <= lineIndex; star++) {
                    cout << "*";
                }
            } else {



                for (int space = (lineIndex / 2) + 2; space <= lineCount; space++) {
                    cout << " ";
                }
                for (int star = 2 * (lineIndex - lineCount) + 1; star > 0; star--) {
                    cout << "*";
                }


            }

            cout << endl;
        }
    }
    else {
        cout <<"Invalid input.";
    }


    return 0;
}

