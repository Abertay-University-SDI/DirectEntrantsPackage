package MainPackage;

// Import scanner so we can ask for user input
import java.util.Scanner;

// Import array list so we can use a dynamic array
import java.util.ArrayList;

public class ExtendedAccount extends Account {
	
	// Create an array list for storing the account history. Make the type of the array list a double
    ArrayList<Double> transactionHistory;
    
    // Create a scanner for user input
    Scanner scan = new Scanner(System.in);
   
    // No default constructor, to create an instance of ExtendedAccount we HAVE to pass in arguments
   public ExtendedAccount (int n, String a, String b, double o, double z){
       
	   // Calls the argument constructor in Account class
       super (n, a, b, o, z);
       
       // Creates a local instance
       transactionHistory = new ArrayList <Double>();
   }
   
   // Getters
   public ArrayList <Double> getTransactionHistory(){
       return transactionHistory;
   }
   
   // Setters
   public void setTransactionHistory(ArrayList <Double> t){
       transactionHistory = t;
   }
   
   // Handle withdraws to the account
   public void Withdraw()
   {
	    // Print message and ask for user input
	   	System.out.print("Please enter the amount you wish to withdraw: ");
	   	double amount = Double.valueOf(scan.nextLine());
	   
	   	// Validate user input so they cannot withdraw too much or a negative amount
		if(amount < 0.0)
	   	{
	   		System.out.println("Cannot withdraw a negative amount.");
	   	}
	   	else if(amount > (Balance + Overdraft))
	   	{
	   		System.out.println("Cannot withdraw more than is available.");
	   	}
	   	else
	   	{
	   		// Add item to history
	   		transactionHistory.add(amount);
	   		
	   		// Reduce balance by amount
	   		Balance = Balance - amount;
	   		
	   		// Print completion message
	   		System.out.println("Thank you for withdrawing £" + amount + ". Your new balance is: £" + Balance);
	   	}
   }
   
   // Handle deposits to the account
   public void Deposit()
   {
	   	// Print message and ask for user input
	   	System.out.print("Please enter the amount you wish to deposit: ");
	   	double amount = Double.valueOf(scan.nextLine());
	   
	   	// Check input so the user isn't trying to deposit less than 0
	   	if(amount < 0.0)
	   	{
	   		System.out.println("Cannot deposit a negative amount.");
	   	}
	   	else
	   	{
	   		// Add item to history
	   		transactionHistory.add(amount);
	   		
	   		// Add amount to balance
	   		Balance = Balance + amount;
	   		
	   		// Print completion message
	   		System.out.println("Thank you for depositing £" + amount + ". Your new balance is: £" + Balance);
	   	}
   }
   
   // Print items in transaction history ArrayList
   public void displayTransactionHistory()
   {
	   // Print introductory message
	   System.out.println("Your account transaction history is:");
	   
	   // Use a for loop to go through each item in the ArrayList
	   for(int i = 0; i < transactionHistory.size(); i++)
	   {
		   // Extract the item
		   double currentItem = transactionHistory.get(i);
		   
		   // Calculate an index for where in the list is was
		   int indexNumber = i + 1;
		   
		   // Print the current item and index numbers into the console
		   System.out.println("Item " + indexNumber + ": " + currentItem);
	   }
   }
}


    

