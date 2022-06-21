class LRUCache {
    const int _MAX;
    list<pair<int, int>> _lst;
    unordered_map<int, list<pair<int, int>>::iterator> _umap;

public:
    LRUCache(int capacity): _MAX(capacity) {}

    int get(int key) {
        auto it = _umap.find(key);
        if (it == _umap.end())
            return -1;

        _lst.splice(_lst.begin(), _lst, it->second);

        return it->second->second;
    }

    void put(int key, int value) {
        auto it = _umap.find(key);

        if (it == _umap.end()) {
            if (_MAX <= _lst.size()) {
                _umap.erase(_lst.back().first);
                _lst.pop_back();
            }
            _lst.push_front({key, value});
            _umap.insert({key, _lst.begin()});
        } else {
            it->second->second = value;
            _lst.splice(_lst.begin(), _lst, it->second);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
