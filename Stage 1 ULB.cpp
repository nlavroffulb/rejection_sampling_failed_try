// Stage 1 ULB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Polymer_Generator.h"
#include "ran2.h"
#include "rejection_sampling_new_try.h"
int main()
{
    srand(time(NULL));

    std::vector<int> rejections_per_iteration;

    //polymer_generator({ 0,0,0 }, { 6,0,0 }, 8, rejections_per_iteration);
    std::vector<double> N_pos{6.5,0,0 };
    int n{ 8 };
    //random_walk_rejection_sample2({0,0,0}, N_pos, n, rejections_per_iteration);
    

    //test2({ 2,5,6 }, { 1,1,1 });

    rejection_sample(5, { 0,0,1 }, N_pos, n, rejections_per_iteration);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
