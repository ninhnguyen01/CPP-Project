#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> last_jedi;

  // Add characters here:
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");

  cout << last_jedi[0] << " ";
  cout << last_jedi[1] << " ";
  cout << last_jedi[2] << " ";
  cout << last_jedi[3] << " ";
}