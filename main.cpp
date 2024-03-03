#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 선택 정렬 : 최솟값 또는 최댓값을 일일이 하나씩 찾아 앞으로 보내어 정렬하는 알고리즘 -- 시간복잡도 안좋으므로 거의 쓰이지 않는다고 함.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;
    vector<int> A(str.length(),0); // 정렬할 수

    for(int i = 0; i < str.length(); i++){
        A[i] = stoi(str.substr(i,1));
    }

    for(int i = 0; i < str.length(); i++){
        int max = i;
        for(int j = i+1; j < str.length(); j++){
            if(A[j] < A[max]){
                max = j;
            }
        }
        if(A[i] < A[max]){
            int temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }
    for(int i=0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    return 0;
}