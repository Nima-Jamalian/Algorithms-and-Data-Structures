import java.util.HashMap;
import java.util.Map;

public class hashmapExample {
public static void main(String[] args) {
    //example
    HashMap<String, Integer>  map = new HashMap<>();
    map.put("Jake", 70);
    map.put("Adams", 70);
    map.put("Smith", 90);
    map.put("Evans", 100); 
    map.remove("Jake");

    System.out.println("Size of map is = " + map.size());  
    System.out.println("Print Element in map -> " + map);

    //check if key exist
    if(map.containsKey("Adams")){
        System.out.println("Adams score is: " + map.get("Adams"));
    }
    //check if value exist
    if(map.containsValue(100)){
        System.out.println("Someone got 100.");
    }

    //iterating through hash map
    //int idx = 0;
    for(Map.Entry<String,Integer> entry: map.entrySet()){
        //idx++;
        System.out.println("Key = " + entry.getKey() + ", Value = " + entry.getValue());
        //System.out.println("idx = " + idx);
    }

}   
}
