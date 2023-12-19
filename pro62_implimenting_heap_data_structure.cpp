// Implimenting the basic heap class and implement the push and delete opration in it
#include <iostream>
using namespace std;
class Heap
{
public:
    int *arr;
    int size;
    int capacity;

    //Heap(int capacity) : arr(new int[capacity]), size(0), capacity(capacity){};
    Heap(int capacity){
        this->arr = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    void pushheap(int val)
    {
        // Base case
        if (size == capacity)
        {
            cout << "Heap overflow ";
            return;
        }
        size++;
        int index = size;
        arr[index] = val;
        // value ko uski correct position main le aao
        while (index > 1)
        {
            int perentIndex = index / 2;
            if (arr[index] > arr[perentIndex])
            {
                swap(arr[index], arr[perentIndex]);
                index = perentIndex;
            }
            else
            {
                break;
            }
        }
    }
    // delte opration from heap data structure
    int deleteFromHeap()
    {
        int savedRoot = arr[1];
        // step 1: replace first element with the last element
        arr[1] = arr[size];
        // last element ko delete kar do
        size--;
        // step 2: root element ko uski sahi position per pahucha do
        int index = 1;
        while (index < size)
        {
            int leftChild = 2 * index;
            int rightChild = 2 * index + 1;
            int largestIndex = index;

            // check in left
            if (leftChild <= size && arr[largestIndex] < arr[leftChild])
            {
                largestIndex = leftChild;
            }
            // check in right
            if (rightChild <= size && arr[rightChild] > arr[largestIndex])
            {
                largestIndex = rightChild;
            }

            if (index == largestIndex)
            { // no change
                break;
            }
            else
            {
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return savedRoot;
    }
    void printHeap()
    {
        cout<<"printing Heap :"<<endl;
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Heap hp(15);
    hp.pushheap(1);
    // hp.pushheap(2);
    hp.pushheap(3);
    hp.pushheap(4);
    hp.pushheap(100);
    hp.pushheap(500);
    hp.printHeap();
    int ans = hp.deleteFromHeap();
    cout<<"Deleted Element:"<<ans<<endl;
    hp.printHeap();
    int ans1 = hp.deleteFromHeap();
    cout<<"Deleted Element: "<<ans1<<endl;
    hp.printHeap();
     int ans2 = hp.deleteFromHeap();
    cout<<"Deleted Element: "<<ans2<<endl;
    hp.printHeap();
    
    return 0;
}