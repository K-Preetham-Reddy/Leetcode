class RandomizedSet {
    ArrayList arr;
    public RandomizedSet() {
        this.arr=new ArrayList();
    }
    
    public boolean insert(int val) {
        if(!arr.contains(val)){
            arr.add(val);
            return true;
        }else{
            return false;
        }
    }
    
    public boolean remove(int val) {
        if(arr.contains(val)){
            arr.remove(Integer.valueOf(val));
            return true;
        }else{
            return false;
        }
    }
    
    public int getRandom() {
        Random random=new Random();
        return (int) arr.get(random.nextInt(arr.size()));

    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */