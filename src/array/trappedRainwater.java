package array;

public class trappedRainwater {
    public static int trappwater(int height[]){

        // calculate max left boundary - by using auxiliary array
        int leftMax[] = new int[height.length];
        leftMax[0] = height[0];
        for (int i = 1; i <height.length; i++) {
            leftMax[i] = Math.max(height[i],leftMax[i-1]); // current height ----> height[i] comparing leftMax[i-1]
        }


        // calculate max right boundary - by using auxiliary array
        int rightMax[] = new int[height.length];
        rightMax[height.length-1] = height[height.length-1];
        for (int i = height.length-2; i >=0 ; i--) {
            rightMax[i] = Math.max(height[i],rightMax[i+1]);
        }

        int trappedwater = 0;
        //loop
        for (int i = 0; i < height.length ; i++) {

            //Waterlevel = min(left max-boundary , right max-boundary)
            int waterlevel = Math.min(leftMax[i],rightMax[i] );

            // trapppedwater = waterlevel - height[i]
            trappedwater  += waterlevel - height[i];
        }

        return trappedwater;
    }
    public static void main(String[] args) {
        int height[] = {4,2,0,6,3,2,5};
        System.out.println("Trapped Rainwater is: "+trappwater(height));
    }
}
