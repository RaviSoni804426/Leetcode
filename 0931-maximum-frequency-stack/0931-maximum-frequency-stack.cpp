class FreqStack {
public:
    map<int, int> freq;
    map<int, stack<int>> st;
    int maxfreq = 0;

    FreqStack() {
    }

    void push(int val) {
        freq[val]++;
        st[freq[val]].push(val);
        maxfreq = max(maxfreq, freq[val]);
    }

    int pop() {
        int x = st[maxfreq].top();
        st[maxfreq].pop();
        freq[x]--;
        if (st[maxfreq].empty()) {
            maxfreq--;
        }
        return x;
    }
};
