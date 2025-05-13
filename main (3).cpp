#include <iostream>

using namespace std;


void multi(int start = 1, int end = 10) {

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; i++) {
        cout << "Таблиця для " << i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }
}









string reverse(string text = "Привіт") {
    string result = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        result += text[i];
    }
    return result;
}






int main() {
    
    
//     int a;
//     int b;

//     cout << " початок: ";
//     cin >> a ;
//   cout << " кінецб: ";
//     cin >> b ;
//     multi(a, b); 









    string s;

    cout << "Введіть рядок (або нічого не вводьте): ";
    cin >> s;

    if (s == "") {
        cout << reverse() << endl; 
    }
    else {
        cout << reverse(s) << endl;
    }
}
