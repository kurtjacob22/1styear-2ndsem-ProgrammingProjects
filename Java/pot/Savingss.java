

class SavingsAccount
{
    private double sBalance;
    private static double annualInterestRate;
    
    protected SavingsAccount()
    {
        sBalance = 0;
        annualInterestRate = 0;
    }

    protected SavingsAccount(double balance)
    {
        sBalance = balance;
        annualInterestRate = 0;
    }

    protected void MonthlyInterest()
    {
        System.out.println("Your Current balance: " + sBalance);
        double monthly;
        monthly = (sBalance * annualInterestRate)/12;
        sBalance += monthly;
        System.out.println("Changed savings balance: " + sBalance);
    }

    protected double getBalance()
    {
        return sBalance;
    }

    protected static void modifyInterestRate(double newIR)
    {
        annualInterestRate = newIR;
    }    
}

class SpecialSavings extends SavingsAccount
{
    protected static void modifyInterestRate()
    {
        if(SavingsAccount.getBalance() > 10000)
        {
            modifyInterestRate(.1);
        }
    }
}

public class Savingss
{
    public static void main(String[] args)
    {
        SavingsAccount saver1 = new SavingsAccount(2000);
        SavingsAccount saver2 = new SavingsAccount(3000);

        saver1.modifyInterestRate(.04);
        saver1.calculateMonthlyInterest();
        saver2.modifyInterestRate(.04);
        saver2.calculateMonthlyInterest();

        saver1.modifyInterestRate(.05);
        saver1.calculateMonthlyInterest();
        saver2.modifyInterestRate(.05);
        saver2.calculateMonthlyInterest();
    }
}