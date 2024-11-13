class SimpleRunnable implements Runnable {
    @Override
    public void run() {
        // Print a message indicating that the thread is running
        System.out.println(Thread.currentThread().getName() + " is running.");
    }
}

public class RunnableExample {
    public static void main(String[] args) {
        // Create an instance of SimpleRunnable
        SimpleRunnable runnable = new SimpleRunnable();

        // Create a thread using the Runnable instance
        Thread thread = new Thread(runnable, "MyThread");

        // Start the thread
        thread.start();

        // Main thread message
        System.out.println(Thread.currentThread().getName() + " is also running.");
    }
}