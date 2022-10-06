#include <iostream>
#include <fstream>
#include <string>

// operator overloading
std::ostream& operator<<(std::ostream& cout, std::fstream& file_object) {
    std::string nigger;
    while (true) {
        std::getline(file_object, nigger);
        // file_object >> character;
        

        cout << nigger << '\n';
        if (file_object.eof())
            break;
    }
    cout << '\n';

    return cout;
}

std::istream& operator>>(std::istream& cin, std::fstream& file_object) {
    std::string file_contents;
    std::cout << "file contents: ";
    std::getline(cin, file_contents);
    
    // once we have the file contents the user wants
    file_object << file_contents;

    return cin;
};

using namespace std;
int main() {
    fstream file;
    file.open("filename.txt");

    if (!file) {
        cout << "file does not exist";
        return 1;
    }

    // cin >> file; // this can also be used

    cout << file;

    file.close();

    cin.get();

    return 0;
}
