// Online C++ compiler to run C++ program online
// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

bool func_compare (int i,int j) { 
    return (i<j); }

struct class_compare {
            bool operator() (int i,int j)
            { return (i<j);}
                        } object_compare;

std::vector <int> vectorsort (std::vector <int> myvector) {
    
    int vector_length = std::size(myvector);
    
    // using default comparison (operator <):
    std::sort (myvector.begin(), myvector.begin()+vector_length);           //(12 32 45 71)26 80 53 33
    
    // using function as comp (faster?)
    //std::sort (myvector.begin()+4, myvector.end(), func_compare); // 12 32 45 71(26 33 53 80)
    
    // using object as comp (faster ??)
    //std::sort (myvector.begin(), myvector.end(), object_compare);     //(12 26 32 33 45 53 71 80)
    
    return myvector;

}


int calculate_distance(std::vector <int> coordinates_1, std::vector <int> coordinates_2){
    // return sum of differences between each element of a vector
    int i, sum_distance=0;
    
    for ( i=0 ; i< std::size(coordinates_1); ++i )
    {
        sum_distance += std::abs(coordinates_1[i] - coordinates_2[i]);
    }
    std::cout << sum_distance;
    std::cout << '\n'; 
    return 0;
    }


int calculate_similarity(std::vector <int> coordinates_1, std::vector <int> coordinates_2){
    // return sum of differences between each element of a vector
    int i, j, sum_similarity_score=0;
    
    for ( i=0 ; i< std::size(coordinates_1); ++i )
    {
        for ( j=0 ; j< std::size(coordinates_2); ++j ) 
            
            if (coordinates_2[j] == coordinates_1[i])
        {
                sum_similarity_score += coordinates_1[i];
        }
    }
    std::cout << sum_similarity_score;
    std::cout << '\n'; 
    return 0;
    }

    

int main() {
    // Write C++ code here
    std::cout << "Trying to code in C++ hehe :3 \n";
    
    int coordinates_1[] = {3,4,2,1,3,3};
    int coordinates_2[] = {4,3,5,3,9,3};
    
    int num_coordinates = std::size(coordinates_2); 
    std::cout << "Length of array = " <<  num_coordinates << std::endl;
    
    std::vector <int> myvector_1 (coordinates_1, coordinates_1+num_coordinates);
    std::vector <int> myvector_sorted_1;
    
    myvector_sorted_1 = vectorsort(myvector_1);
    // print out content:
    std::cout << "myvector sorted 1 contains:";
    for (std::vector<int>::iterator it=myvector_sorted_1.begin(); it!=myvector_sorted_1.end(); ++it)
    std::cout << ' ' << *it;
    std::cout << '\n';
    
    std::vector <int> myvector_2 (coordinates_2, coordinates_2+num_coordinates);
    std::vector <int> myvector_sorted_2;
    
    myvector_sorted_2 = vectorsort(myvector_2);
    // print out content:
    std::cout << "myvector sorted 2 contains:";
    for (std::vector<int>::iterator it=myvector_sorted_2.begin(); it!=myvector_sorted_2.end(); ++it)
    std::cout << ' ' << *it;
    std::cout << '\n';  
    
    calculate_distance(myvector_sorted_1, myvector_sorted_2);
    calculate_similarity(myvector_sorted_1, myvector_sorted_2);
    
    
    return 0;
}
