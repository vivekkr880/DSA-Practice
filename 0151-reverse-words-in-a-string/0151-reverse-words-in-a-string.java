class Solution {
    public String reverseWords(String s) {
        String[] words=s.trim().split("\\s+");
        String result="";
        for(int i=words.length-1;i>=0;i--){
            result=result+words[i];
            if(i !=0){
                result=result+" ";
            }
        }

     return result;
    }
}
// 1)s.trim()
// 2)s.split("//s")
// 3)loop
// 4)string result