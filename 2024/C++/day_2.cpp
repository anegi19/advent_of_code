// Online C++ compiler to run C++ program online
// validate
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

bool validate( int report[], int length)
{
    // return valid
    int i = 0;
    int diff;
    bool positive = true;
    bool this_positive;
    
     
    std::cout << "Length of list = " <<  length << std::endl;
    
    while (i < length-1) 
    {
        diff = report[i+1] - report[i];
        std::cout << diff << "\n";
        if (diff == 0 or abs(diff) >= 3) // check for stagnancy or jumps
        {
            return false;
        }
        else //check for decreasing or increasing
        {
            this_positive = diff>0; //current sign
            if (i==0) //set the trend from first element
            {
                positive = this_positive;
            }
            else if (this_positive != positive)
            {
                return false;
            }
        }
        
        i++;
    }
    
    return true;
}


int main() {
    // Write C++ code here
    std::cout << "Trying to code in C++ hehe :3 \n";
    
    //int report[] = {7, 6, 4, 2, 1}; // list
    int report[] = {1, 2, 7 ,8, 9};
    int length = std::size(report);
    int count = 0;
    count += validate(report, length);
    std::cout << "valids = " << count << std::endl;
    
    return 0;
}

