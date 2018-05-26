#include<bits/stdc++.h>
using namespace std;

vector<int> h;

int size() { return int(h.size()); }
bool empty() { return h.size()==0; }

int PARENT(int x){
 return (x-1)/2;
}

int LEFT(int x){
 return (2*x)+1;
}

int RIGHT(int x){
 return (2*x)+2;
}

void swap(int i,int j){
    int temp = h[i];
    h[i] = h[j];
    h[j] = temp;
}

void heapify_down(int i){
    int right = RIGHT(i);
    int left = LEFT(i);

    int smallest = i;

    if(left < size() && h[left] < h[i])
        smallest = left;

    if(right < size() && h[right] < h[smallest])
        smallest = right;

    if(smallest != i) {
        swap(i, smallest);
        heapify_down(smallest);
    }
}

void heapify_up(int i){
    int parent = PARENT(i);

    if(i>0 && h[i] < h[parent]){
        swap(i, parent);
        heapify_up(parent);
    }
}


void insert(int x){
//heap insert code
    h.push_back(x);
    heapify_up(size()-1);
}

void  minimum() {
//return minimum value in heap
    if(size() == 0)
        cout<<"sorry, heap already empty";
    else
        cout<<h[0]<<endl;

}

void remove() {
//deleted minimum value present in heap
    if(size() == 0)
        cout<<"already empty";

    h[0] = h[size()-1];
    h.pop_back();

    heapify_down(0);
}

void display(){
    for(int i=0; i<size(); i++)
        cout<<h[i]<<" ";
    cout<<'\n';
}
int main() {
    char ch;
    cout<<"i to insert, m for minimum, r for removal of minimum value: ";
    cin>>ch;
   while(true){
    switch(ch) {
        case 'i': int x;
                  cin>>x;
                  insert(x);
                  break;
        case 'm': minimum();
                  break;
        case 'r': remove();
                  break;
        default : exit(0);
    }
    display();
    cin>>ch;
   }
    return 0;
}
