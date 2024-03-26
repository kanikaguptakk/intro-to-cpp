#include <iostream>
using namespace std;
int main()
{
    int value=10;
    cout<<"the value of our integer is"<<  value << " " << "and it has"<<sizeof(int)<<"bytes of memory!"<<endl;
    float floating_value=3.5;
    cout<<"the value of our floating_value"<<floating_value<<"and it has"<<sizeof(float)<<"bytes of memory!"<<endl;
    double huge_number=1000000;
    cout<<"the value of our double huge number"<<huge_number<<"and it has"<<sizeof(double)<<"bytes of memory!"<<endl;
    char character='a';
    cout<<"the value of our character"<<character<<"and it has"<<sizeof(char)<<"bytes of memory!"<<endl;
    bool boolean_value=false;
    cout<<"the value of our  boolean is"<<boolean_value<<"and it has"<<sizeof(bool)<<"bytes of memory!"<<endl;
    return 0;
}