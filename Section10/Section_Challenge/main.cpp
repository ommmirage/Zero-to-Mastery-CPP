#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet {"abcABC"};
    string key {"SfsHeW"};
    string message;
    
    cout << "Enter your message: ";
    
    getline(cin, message);
    
    cout << "Encrypting...\n";
    
    size_t i {0};
    for (char c : message)
    {
        size_t key_position {alphabet.find(c)};
        if (key_position != string::npos)
        {
            message[i] = key[key_position];
        }
        i++;
    }
    
    cout << message << endl;
    
    cout << "Decrypting...\n";
    
    for (size_t i{0}; i<message.length(); i++)
    {
        size_t key_position {key.find(message[i])};
        if (key_position != string::npos)
        {
            message[i] = alphabet[key_position];
        }
    }
    
    cout << message << endl;
    
    return 0;
    
}