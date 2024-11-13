class SimpleRunnable implements Runnable {
    private String threadName;

    public SimpleRunnable(String name) {
        this.threadName = name;
    }

    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(threadName + " - Count: " + i);
            try {
                // Sleep for a short period to simulate work
                Thread.sleep(100);
            } catch (InterruptedException e) {
                System.out.println(threadName + " interrupted.");
            }
        }
    }
}

public class ThreadPriorityExample {
    public static void main(String[] args) {
        // Create runnable instances
        SimpleRunnable runnable1 = new SimpleRunnable("High Priority Thread");
        SimpleRunnable runnable2 = new SimpleRunnable("Low Priority Thread");

        // Create threads
        Thread thread1 = new Thread(runnable1);
        Thread thread2 = new Thread(runnable2);

        // Set priorities
        thread1.setPriority(Thread.MAX_PRIORITY); // Highest priority
        thread2.setPriority(Thread.MIN_PRIORITY); // Lowest priority

        // Start threads
        thread1.start();
        thread2.start();
    }
}