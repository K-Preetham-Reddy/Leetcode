class LRUCache {
    HashMap<Integer, DLL> map = new HashMap<>();
    DLL head = new DLL(-1, -1);
    DLL tail = new DLL(-1, -1);
    int capacity;

    public LRUCache(int capacity) {
        this.capacity = capacity;
        head.next = tail;
        tail.prev = head;
    }

    public int get(int key) {
        if (!map.containsKey(key))
            return -1;
        DLL node = map.get(key);
        delete(node);
        insertfront(node);
        return node.val;
    }

    public void put(int key, int value) {
        if (map.containsKey(key)) {
            // If the key exists, remove it and update its value
            DLL node = map.get(key);
            delete(node);
            node.val = value;
            insertfront(node);
        } else {
            // If capacity is full, remove the least recently used (LRU) node
            if (map.size() >= capacity) {
                DLL lru = tail.prev; // Get LRU node
                map.remove(lru.key); // Remove from map
                delete(lru); // Remove from DLL
            }
            // Insert new node at the front
            DLL node = new DLL(key, value);
            insertfront(node);
            map.put(key, node); // Store in map
        }
    }

    private void delete(DLL node) {
        node.prev.next = node.next;
        node.next.prev = node.prev;
    }

    private void insertfront(DLL node) {
        node.next = head.next;
        head.next.prev = node;
        head.next = node;
        node.prev = head;
    }
}

class DLL {
    DLL prev, next;
    int key, val;

    public DLL(int key, int val) {
        this.key = key;
        this.val = val;
    }
}