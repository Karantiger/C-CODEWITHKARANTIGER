package array;

public class buysellstock {
    public static int buyandsellstock(int prices[]){
        int buyPrice = Integer.MAX_VALUE;
        int max_profit = 0;
        for (int i = 0; i <prices.length ; i++) {
            if (buyPrice <prices[i]) {
                int profit = prices[i]-buyPrice; // profit
                max_profit = Math.max(max_profit,profit); //today's profit
            }
            else {
                buyPrice = prices[i];
            }
        }
        return max_profit;
    }
    public static void main(String[] args) {
        int prices[] = {7,1,5,3,6,4};
        System.out.print(buyandsellstock(prices));
    }
}
