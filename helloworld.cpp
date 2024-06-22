#include<iostream>
#include<stack>
#include<vector>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(std::vector<int> &a){
    for(int i = 0; i<a.size()-1; i++){
        int minValueIndex = i;
        for(int j = i + 1; j< a.size(); j++){
            if(a[j] < a[minValueIndex]){
                minValueIndex = j;
            }
            swap(a[i], a[minValueIndex]);
        }
    }
}
void tranversal(std::vector<int> a){
    for(int x : a){
        std::cout << x << " ";
    }
}
bool findFirstElements(std::vector<int> a, int num){
    for(int x: a){
        if(x == num)
            return true;
    }
    return false;
}
int main(){
    std::vector<int> a;
    int n; std::cin>>n;
    system("pause>0");
}