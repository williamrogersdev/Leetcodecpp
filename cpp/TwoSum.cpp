#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;


// brute force 

//go though and see each combo in the array 
//complexity is 0(n^2)





vector<int> TwoSum(vector<int>& nums, int target) {

    vector<int> target_indices;


    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums.at(i) + nums.at(j) == target) {
                target_indices.push_back(i);
                target_indices.push_back(j);
                break;

            }

        }
    }



    return target_indices;

}




//hashmap solution 


//instead of going though each ele
//subtract the 1st element minus the target so you know what value you are looking for
//hashmap tells you key of that value in the array
//only have to run though array once 
//complexity o(n)
//could create hash mp at begining but this is faster 
//linear time whenever hashmap

vector<int> twoSum(vector<int>&nums, int target) {


vector<int> target_index;

//define hashmap 

unordered_map<int,int> hash_table;


for(int i = 0; i < nums.size(); i++) {
    int second_val = target - nums.at(i);

    if (hash_table.find(second_val) != hash_table.end()) {
        target_index.push_back(i);
        target_index.push_back(hash_table.find(second_val)->second);
        break;

    } else {
        hash_table[nums.at(i)] - i;
    }
}





return target_index;


}



