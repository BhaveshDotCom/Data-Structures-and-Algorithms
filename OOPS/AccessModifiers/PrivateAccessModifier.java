package OOPS.AccessModifiers;


public class PrivateAccessModifier {
    public static void main(String[] args) {
        BankAccount myAccount = new BankAccount();

        System.out.println("Initial Balance: "+ myAccount.getBalance());
        myAccount.deposit(100000000);
        myAccount.withdraw(233334253);
        System.out.println("Balance After Deposit: "+ myAccount.getBalance());
    
    }
}

class BankAccount {
    // The methods or data members declared as private are accessible only within the class in which they are declared
    private long balance;


    public void deposit(long amount){
        if(amount > 0) {
            balance += amount;
        } else {
            System.out.println("Invalid Amount");
        }
    }

    public void withdraw(long amount){
        if(amount <= 0){
            System.out.println("Invalid Amount");
        } else if(amount > balance){
            System.out.println("Insufficient Balance");
        } else {
            balance -= amount;
        }
    }

    public long getBalance(){
        return balance;
    }
}