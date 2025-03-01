// Header file for input output functions
#include <iostream>
#include <string>

using namespace std;

// main() function: where the execution of
// C++ program begins
int main() {
  
    std::string sant; 
    int times;
    // This statement prints "Hello World"
    cout << "Please write Short Santance: \n";
    cin >> sant;
    cout << sant <<endl;
    cout << "How many times you want to print it ?" ;
    cin >> times;    
    for(int i =0 ; i<times;i++)
    {
        cout << sant <<endl;
    }
    return 0;
}
