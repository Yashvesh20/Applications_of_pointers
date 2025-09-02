Yashvesh Singh 24070123138
#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() {
    int a=20,b=22;
    swap(a,b);
    cout<<a<<endl<<b;
}
output:
22
50
