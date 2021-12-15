#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> userInput;
    int n;
    userInput.assign(5,10);
    
    for(int i=0; i<userInput.size(); i++)
    {
        cout<<userInput[i];
      
    }

   

}