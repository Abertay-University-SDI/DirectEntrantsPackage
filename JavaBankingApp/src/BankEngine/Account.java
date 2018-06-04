/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package BankEngine;

import java.util.Scanner;
/**
 *
 * @author Matthew
 */
public class Account {
    
    Scanner scan = new Scanner(System.in);
    
    private int AccountID;
    private String Name;
    private String Address;
    private double Balance;
    private double Deposit;
    private double withDraw;
    private double Overdraft;
    
    
    public Account (){
        AccountID = 0001;
        Name = "Joe Bloggs";
        Address = "1 Here Place";
        Balance = 0.0;
        Deposit = 0.0;
        withDraw = 0.0;
        Overdraft = 0.0;
       
    } 
    
    public Account (int n, String a, String b, double o, double x, double y, double z){
       AccountID = n;
       Name = a;
       Address = b;
       Balance = o;
       Deposit = x;
       withDraw = y;
       Overdraft = z;
 
    }
    
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
        public double getDeposit(){
            System.out.println("  ");
            Deposit = scan.nextDouble();
         return Deposit;
        }
        
    public void withdrawFunds (){
        
        if(withDraw > Balance){
            System.out.println("Your account lacks that amount of credit");

        }
    }
}

