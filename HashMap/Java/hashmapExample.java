import java.util.HashMap;

public class hashmapExample {
public static void main(String[] args) {
    //Example
    HashMap<String, Integer>  map = new HashMap<>();
    map.put("Jake", 70);
    map.put("Adams", 70);
    map.put("Smith", 90);
    map.put("Evans", 100); 
    map.remove("Jake");
    System.out.println("Size of map is = " + map.size());  
    System.out.println("Print Element in map -> " + map);
    //Check if key exist
    if(map.containsKey("Adams")){
        System.out.println("Adams score is: " + map.get("Adams"));
    }
    //Check if value exist
    if(map.containsValue(100)){
        System.out.println("Someone got 100.");
    }

}   

}
