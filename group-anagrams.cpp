class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> hp = new HashMap<>();
        for (String str : strs) {
            char[] charArray = str.toCharArray();
            Arrays.sort(charArray);
            String temp = new String(charArray);
            if (!hp.containsKey(temp)) {
                List<String> element = new ArrayList<>();
                element.add(str);
                hp.put(temp, element);
            } else {
                hp.get(temp).add(str);
            }
        }
        List<List<String>> result = new ArrayList<>();
        for (List<String> fin : hp.values()) {
            result.add(fin);
        }
        return result;
    }
}