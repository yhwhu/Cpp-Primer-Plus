#include <iostream>

using namespace std;

template <typename T>
T maxn(T arr[], int);

template<> char* maxn<char*>(char* arr[], int);


int main(){
    int arr1[6] = {1,2,3,4,5,6};
    double arr2[4] = {1.1,2.2,3.3,4.4};


    cout << maxn(arr1, 5) << endl;
    cout << maxn(arr2, 4) << endl;


    char ch1[] = "1", ch2[] = "12", ch3[] = "123", ch4[] = "1234", ch5[] = "12345";
    char* arr3[5] = {ch1, ch2, ch3, ch4, ch5};
    cout << maxn(arr3, 5) << endl;

    return 0;
}


template <typename T>
T maxn(T arr[], int n){
    T max = arr[0];
    for(int i = 1; i < n; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

template<> char* maxn<char*>(char* arr[], int n){
    char* longest = arr[0];
    int length = strlen(arr[0]);
    for (int i = 0; i < n; ++i) {
        if (strlen(arr[i]) > length) longest = arr[i];
    }
    return longest;
}

