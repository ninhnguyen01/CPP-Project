/*
**A program that prompts two users for their
**name, address, and phone number.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
     string name1, address1, phoneNo1;
     string name2, address2, phoneNo2;

     // get user1 information
     cout << "User1: what is your name?\n";
     getline(cin, name1);
     cout << "User1: what is your address?\n";
     getline(cin, address1);
     cout << "User1: what is your phone number?\n";
     getline(cin, phoneNo1);

     // get user2 information
     cout << "User2: what is your name?\n";
     getline(cin, name2);
     cout << "User2: what is your address?\n";
     getline(cin, address2);
     cout << "User2: what is your phone number?\n";
     getline(cin, phoneNo2);

     // print information
     cout << "\n\n"
          << name1 << "\n";
     cout << "\t\t" << address1 << "\n";
     cout << "\t\t" << phoneNo1 << "\n";

     cout << "\n\n"
          << name2 << "\n";
     cout << "\t\t" << address2 << "\n";
     cout << "\t\t" << phoneNo2 << "\n";
     return 0;
}