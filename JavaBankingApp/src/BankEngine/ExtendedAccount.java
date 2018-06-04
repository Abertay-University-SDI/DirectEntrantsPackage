/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package BankEngine;

import java.util.*;
/**
 *
 * @author Matthew
 */
public class ExtendedAccount extends Account {
    ArrayList<Double>transactionHistory;
    private double adjustment;
    private double currentBalance;
   
   public ExtendedAccount (int n, String a, String b, double o, double x, double y, double z){
       
       super (n, a, b, o, x, y, z);
       
       transactionHistory = new ArrayList <Double>();
   }
   
   public ArrayList <Double> gettransactionHistory(){
       return transactionHistory;
   }
   
   public void settransactionHistory(ArrayList <Double> t){
       transactionHistory = t;
   }
   
   public void setBalance (double newBalance){
       if(newBalance > (0 -getOverdraft())){
           adjustment = currentBalance - newBalance;
           transactionHistory.add(adjustment);
           super.setBalance(newBalance);
       }
   }
}


    

