class StringExercise{

    static void replaceFirstLast(String str){
      int l = str.length();
      System.out.println(str.substring(l-1)+str.substring(1,l-1)+str.substring(0,1));
    }

    static void expandRange(String str){
        String[] ranges = str.split(", ");
        String ans = "";
        for(String range : ranges){
            if(!range.contains("-"))
              ans+=range+", ";
            else{
              String[] limit = range.split("-");
              for(int i = Integer.parseInt(limit[0]); i <= Integer.parseInt(limit[1]); i++){
                  ans+=i+", ";
              }
            }
        }
        System.out.println(ans.substring(0,ans.length()-2));
    }

    static void checkNumber(String str){
        System.out.println(str.pattern("[]"))
    }

    public static void main(String[] args)
    {
      String str = "geeks for geeks";
      replaceFirstLast(str);
      str = "1-3, 8, 5-7";
      expandRange(str);
      str = "-11.9";
      checkNumber(str);
    }

}
