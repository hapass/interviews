#include <iostream>
#include <vector>

using namespace std;

int remove_duplicates(vector<int>& numbers) {
    if(numbers.size() == 0) {
        return 0;
    }

    int swap_index = 0;

    //mistake: this variable is redundant
    int last_number = numbers[0];

    for(int index = 0; index < numbers.size(); index++) {
        if(numbers[index] != last_number) {
            last_number = numbers[index];
            swap_index++;

            //mistake: we can do a simple copy instead of swap
            auto temp = numbers[index];
            numbers[index] = numbers[swap_index];
            numbers[swap_index] = temp;
        }
    }

    return swap_index + 1;
}

void test(vector<int>& numbers) {
    auto total = remove_duplicates(numbers);

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];

        if(i != numbers.size() - 1) {
            cout << ",";
        } else {
            cout << " ";
        }
    }

    cout << "total: " << total << "\n";
}

int main() {
    vector<int> simple_vector = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 5, 5, 5 };
    test(simple_vector);

    vector<int> one_value_repeated_vector = { 0, 0 };
    test(one_value_repeated_vector);

    vector<int> one_value_vector = { 0 };
    test(one_value_vector);

    vector<int> empty_value_vector = {};
    test(empty_value_vector);
}

