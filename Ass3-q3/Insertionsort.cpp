#include <iostream>
#include <vector>
using namespace std;

void insertionSort(std::vector<int>& arr) {
    int si = arr.size();
    int x{ 0 };
    int first{ 0 };
    for (int i = 1; i < si; i++) {
        if (arr[i] < arr[i - 1]) {
            x= arr[i];
            first = i;
            do
            {
                arr[first] = arr[first - 1];
                first--;
            } while (first > 0 && arr[first - 1] > x);// i did the same in the lecture
            arr[first] = x;
        }
    }
}

int main() {

    vector<int> vector{ 2,3,1,5,-10,20,19,1,3,2,11 };
    insertionSort(vector);
    for (int i = 0; i < vector.size(); i++)
        cout << vector[i] << endl;
    return 0;
}