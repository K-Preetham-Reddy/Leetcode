class Solution {

    public int helper(int[] freq, int idx, int n,HashMap<String, Integer> map){
        if( idx == n)return 1;
        String key = Arrays.toString(freq)+"|"+idx;
        if(map.containsKey(key))return map.get(key);
        int count = 1;
        
        for(int i=0;i<10;i++){
            if((freq[i] != 1) && (i!=0 || idx != 0 )){
                freq[i] = 1;
                count+=helper(freq, idx+1, n, map);
                freq[i] = 0;
            }
        }
        map.put(key, count);
        return count;
    }

    public int countNumbersWithUniqueDigits(int n) {
        if(n == 0)return 1;
        HashMap<String, Integer> map = new HashMap<>();
        return helper(new int[10], 0, n, map);

    }
}