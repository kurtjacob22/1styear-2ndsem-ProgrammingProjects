import java.util.Scanner;

/**
 * SortingNames
 */
public class SortingNames {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int nameCount = 50;
		String[] listOfNames = new String[nameCount];
		String temp;

		for(int i = 0; i < nameCount; i++) {
			System.out.print("Enter name no." + (i + 1) + ": ");
			listOfNames[i] = scanner.nextLine();
		}
		scanner.close();

		// sorting algorithm:
		for(int i = 0; i < listOfNames.length; i++) {
			for(int j = i + 1; j < listOfNames.length; j++) {
				if(listOfNames[i].compareTo(listOfNames[j]) > 0){
					temp = listOfNames[i];
					listOfNames[i] = listOfNames[j];
					listOfNames[j] = temp;
				}
			}
		}

		System.out.println("Sorted List\n");
		for(String i : listOfNames) {
			System.out.println(i);
		}
	}
}