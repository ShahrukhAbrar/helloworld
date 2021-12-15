#include <iostream>
#include <string>
#include<unistd.h>
using namespace std;

int main()
{
    int i = 1;
    string url =  "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

    cout << url << endl;
    string op = string("xdg-open ").append(url); 
    system(op.c_str());
    sleep(1);
    system("exit");
    return 0;
}