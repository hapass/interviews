#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& numbers) {
    int swap_index = 0;
    int last_number = numbers[0];

    for(int index = 0; index < numbers.size(); index++) {
        if(numbers[index] != last_number) {
            last_number = numbers[index];
            swap_index++;
            auto temp = numbers[index];
            numbers[index] = numbers[swap_index];
            numbers[swap_index] = temp;
        }
    }

    return swap_index + 1;
}

void test(vector<int>& numbers) {
    auto total = removeDuplicates(numbers);

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
}

