#include <iostream>
#include <array>
#include <string>
#include <cstring>
#include <iterator>
#include <vector>
using namespace std;

const size_t cnt = 42;
constexpr unsigned sz = 42;
int arr[cnt];
int *parr[sz];
string s1 = "abcdefg";
const char* c6 =(s1.c_str());
int initial[sz]{0, 1, 2};
int a2[] = {0, 1 ,2};
int a3[5] = {0, 1, 2};
const char c1[] = {'c', '+', '+'};
char c2[4] = "c++";
char c3[5] = "c++";
const char* c4[] = {"abc", "cde", "", "fgh"};
char c5[][5] = {"", "a"};
vector<int> v1(begin(initial), initial+3);
int o = 5;
int &o1 = o;
const int o2 = 5;
int main() {  
    
    const int num = 5; 
    int n1[num];
    for (int i = 0; i < num; i++)
        n1[i] = v1[i];

    for(auto i : n1)
        cout << i << endl;

     
    int a[3]={1,2,3};
    
    int b[num][a[1]];
    /*
    cout << strcat(c2, c3);  
    for(auto c : c4)
       cout << c <<endl; 
    const size_t num = 5; 
    int num2 = end(arr) - begin(arr);
    */
    return 0;
}

