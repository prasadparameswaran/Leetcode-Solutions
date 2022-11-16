// The approach is to maintain the incoming data stream in two heap data structures so that they are in sorted order. The maxHeap which stores the bottom half of the sorted list and the minHeap store the larger half of the sorted data stream. The incoming numbers are inserted such that the difference in the number of elements of both heaps is not more than one. 
class MedianFinder {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int> maxHeap;
    int minHeapSize;
    int maxHeapSize;
public:
    MedianFinder() {
        minHeapSize = 0;
        maxHeapSize = 0;
    }
    
    void addNum(int num) {
        if(maxHeapSize==0){//insert 1st element 
            maxHeap.push(num);
            maxHeapSize++;
            return;
        }else{ //insert all elements other than 1st
            if(num<=maxHeap.top()){
                maxHeap.push(num);
                maxHeapSize++;
                if(maxHeapSize-minHeapSize==2){
                    minHeap.push(maxHeap.top());
                    minHeapSize++;
                    maxHeap.pop();
                    maxHeapSize--;
                }
            }
            else{
                minHeap.push(num);
                minHeapSize++;
                if(maxHeapSize-minHeapSize==-2){
                    maxHeap.push(minHeap.top());
                    maxHeapSize++;
                    minHeap.pop();
                    minHeapSize--;
                }
            }
        } 
    }

    // If the number of elements is even then the median is the avg of the top elements of the two heaps. This is nothing but the mean of the middle two elements. If the number of elements is odd, Then the element at the top of the heap having a larger number of elements is returned. This is nothing but the middle element of the heap.
    
    double findMedian() {
        if((minHeapSize+maxHeapSize)%2 == 0) return ((minHeap.top()+maxHeap.top())/2.0);
        else return minHeapSize > maxHeapSize ? minHeap.top() : maxHeap.top();         
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */