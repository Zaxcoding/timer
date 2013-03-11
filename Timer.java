// Trying to redo this in java swing

public class Timer {
  public static void main(String [] args) {
    long startTime = System.nanoTime();
    while (true) {
      System.out.println(System.nanoTime() - startTime);
    }
  }
}

