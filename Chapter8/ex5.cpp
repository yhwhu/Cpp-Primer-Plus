#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[]);

int main(){
    int arr1[5] = {1,2,3,4,5};
    double arr2[5] = {1.1,2.2,3.3,4.4,5.5};


    cout << max5(arr1) << endl;
    cout << max5(arr2) << endl;

    // explicit instance
    cout << max5<int>(arr1) << endl;
    cout << max5<double>(arr2) << endl;
    return 0;
}


template <typename T>
T max5(T arr[]){
    T max = arr[0];
    for(int i = 1; i < 5; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

