#include <iostream>
using namespace std;

int main() {
  string fullName;
  cout << "Type your name: ";
  getline (cin, fullName);
  
    string address;
  cout << "Type your address: ";
  getline (cin, address);

  string phone;
  cout << "Type your number: ";
  getline (cin, phone);


  string email;
  cout << "Type your email: ";
  getline (cin, email);

  cout <<  fullName << endl;
   cout <<  address << endl;
  cout <<  phone << endl;
  cout <<  email << endl;
  return 0;
}