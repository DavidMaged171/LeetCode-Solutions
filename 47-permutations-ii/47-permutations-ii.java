class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        
        HashMap<Integer,Integer>counter=new HashMap<>();
        for(int i:nums)
        {
            if (!counter.containsKey(i))
                counter.put(i, 0);
            counter.put(i, counter.get(i) + 1);
        }
        
        LinkedList<Integer>comb=new LinkedList<>();
        this.backtrack (comb,nums.length,counter,results);
        return results;
        
    }
    private void backtrack(LinkedList<Integer>comb,int n,HashMap<Integer,Integer>counter,List<List<Integer>>results)
    {
        if(comb.size()==n)
        {
            results.add(new ArrayList<Integer>(comb));
            return;
        }
        for(Map.Entry<Integer,Integer>entry:counter.entrySet())
        {
            int num=entry.getKey();
            int count=entry.getValue();
            if(count==0)
            {
                continue;
            }
            comb.addLast(num);
            counter.put(num, count - 1);
            backtrack(comb,n,counter,results);
            comb.removeLast();
            counter.put(num,count);
        }
    }
}