// previously we dealt with handling input from keyboard
// this time we will handle input using files
// we would use library fstream (will read values from files)

#include <iostream>
#include <fstream>  
using namespace std;
int main()
{
    ifstream input_file("file1.in");
    ofstream output_file("file2.out");
    int value;
    input_file>>value;
    output_file<<value;
    return 0;
}