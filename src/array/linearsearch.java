package array;

public class linearsearch {
    public static int linearSearch(String menu[], String key){
        for (int i = 0; i < menu.length; i++) {
            if (menu[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        String menu[] = {"samosa", "dosa", "pav bhajhi", "vadapav", "puff", "cofee"};
        String key = "vadapav";
        int index = linearSearch(menu,key);
        if (index == -1) {
            System.out.println("Not found");
        }else {
            System.out.println("Key at index: " +index);
        }
    }
}
