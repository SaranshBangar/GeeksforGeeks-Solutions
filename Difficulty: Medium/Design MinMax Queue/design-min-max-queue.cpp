class SpecialQueue {
        vector<int> vt;
  public:

    void enqueue(int x) {
        // Insert element into the queue
        vt.push_back(x);
    }

    void dequeue() {
        // Remove element from the queue
        vt.erase(vt.begin());
    }

    int getFront() {
        // Get front element
        return vt.front();
    }

    int getMin() {
        // Get minimum element
        return *min_element(vt.begin(), vt.end());
    }

    int getMax() {
        // Get maximum element
        return *max_element(vt.begin(), vt.end());
    }
};