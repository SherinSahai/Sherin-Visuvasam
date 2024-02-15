#include <iostream>
#include<vector>
using namespace std;
void upheapify(int heap[],int n,int child)
{
    int parent=(child-1)/2;
    if(heap[parent]>0)
    {
    if(heap[child]>heap[parent])
    {
        swap(heap[child],heap[parent]);
        upheapify(heap,n,parent);

    }
}}
void insert(int heap[],int& n,int key)
{
    n=n+1;
    heap[n-1]=key;
    upheapify(heap,n,n-1);

}
void downheapify(int heap[],int n,int parent)
{
    int large=parent;
    int left=2*parent+1;
    int right=2*parent+2;
    if(left<n && heap[left]>heap[large])
        large=left;
    if(right<n && heap[right]>heap[large])
        large=right;
    if(large!=parent)
    {
        swap(heap[parent],heap[large]);
        downheapify(heap,n,large);
    }}
void deleter(int heap[],int& n)
{
    int last=heap[n-1];
    heap[0]=last;
    n=n-1;
    downheapify(heap,n,0);
}
void insert(vector<int>& heap,int child)
{
    heap.push_back(child);
   int ind=heap.size()-1;
    while(ind>0 && heap[(ind-1)/2] >heap[ind])
    {
        swap(heap[ind],heap[(ind-1)/2]);
        ind=(ind-1)/2;
    }
}
void deleteheap(vector<int>& heap, int value)
{
    int index = -1;
    for (int i = 0; i < heap.size(); i++) {
        if (heap[i] == value) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        return;
    }
    heap[index] = heap[heap.size() - 1];
    heap.pop_back();
    while (true) {
        int left_child = 2 * index + 1;
        int right_child = 2 * index + 2;
        int smallest = index;
        if (left_child < heap.size()
            && heap[left_child] < heap[smallest]) {
            smallest = left_child;
        }
        if (right_child < heap.size()
            && heap[right_child] < heap[smallest]) {
            smallest = right_child;
        }
        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            index = smallest;
        }
        else {
            break;
        }
    }
}
void print(int heap[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<heap[i]<<endl;

    }
}
    int main()
    {

        int h[50],n,key,i,swi;
        vector<int> heap;
    int v[50];
    do
    {
        cout<<".....MINHEAP AND MAXHEAP....."<<endl;
        cout<<" 1.Insertion in Max Heap"<<endl;
        cout<<" 2.Deletion in max Heap"<<endl;
        cout<<" 3.Insertion in min Heap"<<endl;
        cout<<" 4.Deletion in min Heap"<<endl;
        cout<<" 5.Enter 5 to exit"<<endl;
        cout<<"Enter the Choice:"<<endl;
        cin>>swi;
        switch(swi)
        {
        case 1:
        cout<<"Enter the size:"<<endl;
        cin>>n;
        cout<<"The elements are:"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>h[i];

        }
        cout<<"Enter the key to insert"<<endl;
        cin>>key;
        insert(h,n,key);
        cout<<"After Insertion:"<<endl;
        print(h,n);
        break;
        case 2:
             deleter(h,n);
        cout<<"After deletion:"<<endl;
         print(h,n);
         break;
        case 3:
            cout<<"enter the size of the values:"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cout<<"Enter the Element:"<<endl;
       cin>>v[i];
   }
    for (int i = 0; i < n; i++) {
        insert(heap, v[i]);
        cout << "Inserted " << v[i]
             << " into the min-heap: ";
        for (int j = 0; j < heap.size(); j++) {
            cout << heap[j] << " ";
        }
        cout << endl;
    }
       break;

        case 4:
            deleteheap(heap, heap[0]);
    cout << "Heap after deleting root: ";
    for (int j = 0; j < heap.size(); j++) {
        cout << heap[j] << " ";
    }
    cout << endl;
    break;

        }
    }
        while (swi!=5);
        cout<<"Program completed successfully"<<endl;
        return 0;
    }

