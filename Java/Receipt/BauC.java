public class BauC{
    public static void main(String[] args) {
        
        String product1 = "Hotdog";
        String product2 = "Rice";
        String product3 = "Spam";
        String product4 = "Bacon";
        String product5 = "Corned Beef";

        float currentCash = 1000.0f;

        float price1 = 180.0f;
        float price2 = 100.0f;  
        float price3 = 200.0f;
        float price4 = 130.0f;
        float price5 = 50.0f;
        float total = price1 + price2 + price3 + price4 + price5;
        float change = currentCash - total;

        System.out.println("+------------------------------------------+");
        System.out.println("|                                          |");
        System.out.println("|               NENE'S STORE               |");
        System.out.println("|          Address: 123 Dalandan           |");
        System.out.println("|            Street Paco,Manila            |");
        System.out.println("|                                          |");
        System.out.println("|* * * * * * * * * * * * * * * * * * * * * |");
        System.out.println("|               CASH RECEIPT               |");
        System.out.println("|* * * * * * * * * * * * * * * * * * * * * |");
        System.out.println("| Item                               Price |");
        System.out.println("| " + product1 + "                             " + price1 + " |");
        System.out.println("| " + product2 + "                               " + price2 + " |");
        System.out.println("| " + product3 + "                               " + price3 + " |");
        System.out.println("| " + product4 + "                              " + price4 + " |");
        System.out.println("| " + product5 + "                         " + price5 + " |");
        System.out.println("|* * * * * * * * * * * * * * * * * * * * * |");
        System.out.println("| TOTAL                              " + total + " |");
        System.out.println("| CASH                              " + currentCash + " |");
        System.out.println("| CHANGE                             " + change + " |");
        System.out.println("|* * * * * * * * * * * * * * * * * * * * * |");
        System.out.println("|                                          |");
        System.out.println("|__________________________________________|");
    }
}

