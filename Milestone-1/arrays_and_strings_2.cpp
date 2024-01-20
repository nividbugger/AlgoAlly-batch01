//#include<bits/stdc++.h>
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

// Function to be implemented by students
vector<string> fizzBuzz(const vector<int>& nums) {
    
}

// Function to be implemented by students
int removeDuplicates(vector<int>& nums) {
    
}

// Function to be implemented by students
int maxProfit(vector<int>& prices) {
    
}


int main() {
    // Sample test cases for FizzBuzz
    vector<int> input1 = {1, 3, 5, 15, 10, 7, 30};
    vector<string> output1 = {"1", "Fizz", "Buzz", "FizzBuzz", "Buzz", "7", "FizzBuzz"};
    vector<string> result1 = fizzBuzz(input1);
    assert(result1 == output1);

    vector<int> input2 = {2, 4, 8, 16, 32};
    vector<string> output2 = {"2", "4", "8", "16", "32"};
    vector<string> result2 = fizzBuzz(input2);
    assert(result2 == output2);

    vector<int> input3 = {9, 27, 81, 243};
    vector<string> output3 = {"Fizz", "Fizz", "Fizz", "Fizz"};
    vector<string> result3 = fizzBuzz(input3);
    assert(result3 == output3);

    vector<int> input4 = {14, 28, 56, 112};
    vector<string> output4 = {"14", "28", "56", "112"};
    vector<string> result4 = fizzBuzz(input4);
    assert(result4 == output4);

    cout << "All test cases passed : FizzBuzz!" << endl;

    //Sample test cases for Remove duplicate elements in sorted array in place 
    vector<int> nums1 = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    vector<int> expectedNums1 = {1, 2, 3, 4, 5};
    int k1 = removeDuplicates(nums1);
    assert(k1 == expectedNums1.size());
    for (int i = 0; i < k1; ++i) {
        assert(nums1[i] == expectedNums1[i]);
    }

    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> expectedNums2 = {1, 2, 3, 4, 5};
    int k2 = removeDuplicates(nums2);
    assert(k2 == expectedNums2.size());
    for (int i = 0; i < k2; ++i) {
        assert(nums2[i] == expectedNums2[i]);
    }

    vector<int> nums3;
    vector<int> expectedNums3;
    int k3 = removeDuplicates(nums3);
    assert(k3 == expectedNums3.size());

    vector<int> nums4 = {42};
    vector<int> expectedNums4 = {42};
    int k4 = removeDuplicates(nums4);
    assert(k4 == expectedNums4.size());
    for (int i = 0; i < k4; ++i) {
        assert(nums4[i] == expectedNums4[i]);
    }

    cout << "All test cases passed : Remove Duplicate Elements in sorted array!" << endl;

    //Sample test cases for Buy and Sell Stock 1 (valley - peak  method)
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int res1 = maxProfit(prices1);
    assert(res1 == 7);

    vector<int> prices2 = {1, 2, 3, 4, 5};
    int res2 = maxProfit(prices2);
    assert(res2 == 4);

    vector<int> prices3;
    int res3 = maxProfit(prices3);
    assert(res3 == 0);

    vector<int> prices4 = {5, 4, 3, 2, 1};
    int res4 = maxProfit(prices4);
    assert(res4 == 0);

    vector<int> prices5 = {3, 1, 2, 5, 6, 4};
    int res5 = maxProfit(prices5);
    assert(res5 == 5);  

    cout << "All test cases passed! : Buy and Sell stocks 1" << endl;

    return 0;
}
