#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

int arr[10];
vector<int> vec;

for(int i = 0; i < 10; i++){
    arr[i] = i;
    vec.push_back(i);
}

for(int i : arr){
    cout << arr[i] << endl;
}

for(int i : vec){
    cout << vec.at(i) << endl;
}
for_each(vec.begin(),vec.end(), [](int i){
cout << i << endl;
});

for_each(arr,arr + 9, [](int i){
cout << i << endl;
});
}