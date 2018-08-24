package MainPackage;

// Import to use Scanner tool
import java.util.Scanner;

// Bank Program
public class BankProgram {

	// Create static account so main and other functions can access
	static ExtendedAccount account = null;
	
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    	// Create instance of scanner
    	Scanner scan = new Scanner(System.in);
    	
    	// Print out welcome message
    	System.out.println("Welcome to your Banking Program.");
    	
    	// Flag to keep while loop running
    	boolean running = true;
    	
    	// Start main app loop
    	while(running)
    	{    	
    		// Print options message
	    	System.out.print("Please choose one of the following options: 'Create', 'Destroy', 'Withdraw', 'Deposit', 'View' or 'Exit'.");
	    	
	    	// Wait for user input
	    	String input = scan.nextLine();
	    	
	    	// Switch statement to handle user messages
	    	switch(input)
	    	{
	    	case "Create":
	    		// Create account and print completed message after
	    		account = CreateNewAccount();
	    		System.out.println("Your new account has been created.");
	    		break;
	    	case "Destroy":
	    		// Reference the account and print message
	    		account = null;
	    		System.out.println("We have removed the account.");
	    		break;
	    	case "Withdraw":
	    		// Check the account has been created before attempting to withdraw
	    		if(account != null)
	    		{
	    			account.Withdraw();
	    		}
	    		else
	    		{
	    			// Print message if no account
	    			System.out.println("You need to create an account first.");
	    		}
	    		break;
	    	case "Deposit":
	    		// Check the account has been created before attempting to deposit
	    		if(account != null)
	    		{
	    			account.Deposit();
		    	}
	    		else
	    		{
	    			// Print message if no account
	    			System.out.println("You need to create an account first.");
	    		}
	    		break;
	    	case "View":
	    		// Check the account has been created before attempting to view transactions
	    		if(account != null)
	    		{
	    			account.displayTransactionHistory();
	    		}
	    		else
	    		{
	    			// Print message if no account
	    			System.out.println("You need to create an account first.");
	    		}
	    		break;
	    	case "Exit":
	    		// Print message and set loop flag to false
	    		System.out.println("Closing the program.");
		    	running = false;
	    		break;
	    	default:
	    		// Print message for unknown commands
	    		System.out.println("I did not recognise that command. Please try again.");
	    		break;
	    	}
    	}
    }
    
    static ExtendedAccount CreateNewAccount()
    {
    	// Create instance of the scanner for user input
		Scanner scan = new Scanner(System.in);
    	
		// Ask for account ID and save
    	System.out.print("Please enter an Account ID:");
    	int ID = Integer.valueOf(scan.nextLine());
    	
    	// Ask for user name and save
    	System.out.print("Please enter your name:");
    	String name = scan.nextLine();
    	
    	// Ask for user address and save
    	System.out.print("Please enter your address:");
    	String address = scan.nextLine();
    	
    	// Ask for starting balance and save
    	System.out.print("Please enter a starting balance:");
    	double balance = Double.valueOf(scan.nextLine());
    	
    	// Ask for overdraft and save
    	System.out.print("Please enter an overdraft limit:");
    	double overdraft = Double.valueOf(scan.nextLine());
    	
    	// Create an instance of the ExtendedAccount class
    	ExtendedAccount account = new ExtendedAccount(ID, name, address, balance, overdraft);
    	
    	// return the instance to main
    	return account;
    }
}