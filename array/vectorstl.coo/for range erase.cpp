// CPP program to illustrate
// Implementation of erase() function
#include <iostream>
#include <vector>

using namespace std;
 

int main()
{

    vector<int> myvector{ 1, 2, 3, 4, 5 };

    vector<int>::iterator it1, it2;
 

    it1 = myvector.begin();

    it2 = myvector.end();

 //  it2--;

  // it2--;
  

 

    myvector.erase(it1, it2);
 

    // Printing the Vector

    for (auto i=0;i<myvector.size();i++)

        cout <<myvector[i]<<" ";

    return 0;
}