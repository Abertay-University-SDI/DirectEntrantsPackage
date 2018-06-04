/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package BankEngine;

/**
 *
 * @author Matthew
 */
public class BankProgram {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int tmpAccountID;
        String tmpName;
        String tmpAddress;
        double tmpBalance;
        double tmpDeposit;
        
        Account AccountA = new Account ();
        Account AccountB = new Account ();
        
        tmpAccountID = AccountA.getAccountID();
        System.out.println("AccountA holders ID is " + tmpAccountID);
        
        tmpName = AccountA.getName();
        System.out.println("AccountA holders Name is " + tmpName);
        
        tmpAddress = AccountA.getAddress();
        System.out.println("AccountA holders address is " + tmpAddress);
        
        tmpBalance = AccountA.getBalance();
        System.out.println("AccountA holders balance is " + tmpBalance);
        
        AccountB.setAccountID(0002);
        AccountB.setName("Jane Bloggs");
        AccountB.setAddress("2 Here Place");
        AccountB.setBalance(1.1);
        
        tmpAccountID = AccountB.getAccountID();
        System.out.println("AccountB holders ID is " + tmpAccountID);
        
        tmpName = AccountB.getName();
        System.out.println("AccountB holders Name is " + tmpName);
        
        tmpAddress = AccountB.getAddress();
        System.out.println("AccountB holders address is " + tmpAddress);
        
        tmpBalance = AccountB.getBalance() + AccountB.getDeposit();
        System.out.println("AccountB holders balance is " + tmpBalance);
       
    }
    
}
