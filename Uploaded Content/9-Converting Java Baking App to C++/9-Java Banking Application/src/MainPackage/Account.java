package MainPackage;

public class Account {
	
	// Protected variables so the extended class can access them
	protected int AccountID;
    protected String Name;
    protected String Address;
    protected double Balance;
    protected double Overdraft;
    
    // Default constructor
    public Account (){
        AccountID = 0001;
        Name = "Joe Bloggs";
        Address = "1 Here Place";
        Balance = 0.0;
        Overdraft = 0.0;
    } 
    
    // Overridden Constructor
    public Account (int n, String a, String b, double o, double z){
       AccountID = n;
       Name = a;
       Address = b;
       Balance = o;
       Overdraft = z;
    }
    
    // Getters
    public int getAccountID(){
        return AccountID;
    }

    public String getName(){
        return Name;
    }
    
    public String getAddress(){
        return Address;
    }
    
    public double getBalance(){
        return Balance;
    }
    
    public double getOverdraft(){
        return Overdraft;
    }
    
    // Setters
    public void setAccountID(int n){
        AccountID = n;
    }
    
    public void setName(String a){
        Name = a;
    }
    
    public void setAddress(String b){
        Address = b;
    }
    
    public void setBalance(double o){
        Balance = o;
    } 
    
    public void setOverdraft(double z){
        Overdraft = z;
    }
}