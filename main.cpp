#include <iostream>
#include <vector>
#include <vector>
using namespace std;

class HashTable {
private:
    //Number of Buckets
    int BUCKET;

    //Array pointer
    vector<int> *table;
public:
    HashTable(int i) {
        this->BUCKET = i;
        this->table = new vector<int>[BUCKET];
    }

    //Insert item w. key
    void insertItem(int key) {
        //Hash key
        int index = key % BUCKET;

        //push item to table
        table[index].push_back(key);
    }

    //Delete key
    void deleteItem(int key) {
        //get hash index of the key
        int index = key % BUCKET;

        //search for key in vector
        vector <int> :: iterator i;
        for (i = table[index].begin(); i != table[index].begin(); i++) {
            if (*i == key)
                break;
        }

        // if key is found in hash table, remove it
        if (i != table[index].end())
            table[index].erase(i);
    }

    //Hashing Function
    int hashFunction(int x) {
        return (x % BUCKET);
    }

    //Display hash
    void displayHash() {
        for (int i = 0; i < BUCKET; i++) {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }
        cout << "Target: " << target << endl;
        return {1, 2};
    }

};

int main() {
    HashTable hashTable(7);

    vector<int> nums = {2,7,11,15};
    int target = 9;

    hashTable.twoSum(nums, target);

    return 0;
}