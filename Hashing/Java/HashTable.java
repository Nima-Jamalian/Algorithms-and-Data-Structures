import java.util.List;

public class HashTable {

  private int size;
  private List<List<Pair>> table;

  public HashTable() {
    this.size = 10;
    this.table = new ArrayList<>(Collections.nCopies(size, new ArrayList<>()));
  }

  private int hashFunction(int key) {
    return key % size;
  }

  public void insert(int key, int value) {
    int hashIndex = hashFunction(key);
    List<Pair> bucket = table.get(hashIndex);
    boolean keyExists = false;

    for (Pair pair : bucket) {
      if (pair.getKey() == key) {
        pair.setValue(value);
        keyExists = true;
        break;
      }
    }

    if (!keyExists) {
      bucket.add(new Pair(key, value));
    }
  }

  static class Pair {

    private int key;
    private int value;

    public Pair(int key, int value) {
      this.key = key;
      this.value = value;
    }

    public int getKey() {
      return key;
    }

    public int getValue() {
      return value;
    }

    public void setValue(int value) {
      this.value = value;
    }
  }
}
