#include <iostream>
#include <queue>
#include <ctime>

using namespace std;

bool myCmp( int a , int b ){

    return a%10 > b%10;
}

int main() {

    srand(time(NULL));

    // 默认的priority queue
    priority_queue<int> pq;

    for( int i = 0 ; i < 10 ; i ++){
        int num = rand()%100;
        pq.push( num );
        cout<<"insert "<<num<<" in priority queue."<<endl;
    }

    // 从大到小输出
    for( int i = 0 ; i < 10 ; i ++ ){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl<<endl;

    // 使用greater的priority queue
    priority_queue<int, vector<int>, greater<int>> pq2;

    for( int i = 0 ; i < 10 ; i ++){
        int num = rand()%100;
        pq2.push( num );
        cout<<"insert "<<num<<" in priority queue."<<endl;
    }

    // 从小到大输出
    for( int i = 0 ; i < 10 ; i ++ ){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

    cout<<endl<<endl;

    // 使用自定义Comparator的priority queue
    priority_queue<int, vector<int>, function<bool(int,int)>> pq3(myCmp);

    for( int i = 0 ; i < 10 ; i ++){
        int num = rand()%100;
        pq3.push( num );
        cout<<"insert "<<num<<" in priority queue."<<endl;
    }

    for( int i = 0 ; i < 10 ; i ++ ){
        cout<<pq3.top()<<" ";
        pq3.pop();
    }

    return 0;
}