#include <iostream>
#include <vector>

class BankAccount
{
    int balance;

public:
    int depositMoney;
    int withdrawnMoney;

    BankAccount() {};

    BankAccount(int deposit)
    {
        this->balance = deposit;
        this->depositMoney = deposit;
    };

    int deposit(int money)
    {
        this->balance += money;
        this->depositMoney = money;
        return this->balance;
    };

    int withdraw(int money)
    {
        if (this->balance < money)
        {
            return -1;
        };
        this->balance -= money;
        this->withdrawnMoney = money;
        return this->balance;
    };

    int balanceCheck()
    {
        return this->balance;
    };
    friend std::ostream &operator<<(std::ostream &os, const BankAccount &account);
};

std::ostream &operator<<(std::ostream &os, const BankAccount &account)
{
    os << "Balance: " << account.balance
       << " | Last deposit: " << account.depositMoney
       << " | Last withdrawn: " << account.withdrawnMoney;
    return os;
}

int main()
{

    std::vector<BankAccount> history;

    int initialDeposit;
    std::cout << "Enter the initial deposit to open the bank account: ";
    std::cin >> initialDeposit;

    BankAccount Account(initialDeposit);
    history.push_back(Account);

    bool transaction = true;

    for (; transaction;)
    {
        char todo = 'y';
        std::cout << "Do you want to perform a transaction? y/n ";
        std::cin >> todo;
        if (todo == 'n')
        {
            transaction = false;
            break;
        }
        else
        {
            int opr;
            std::cout << "Select one of following to perform the action: \n"
                         "1. Withdraw \n"
                         "2. Deposit \n"
                         "3. Balance inquiry \n"
                         "4. History \n"
                         "5. Abort \n"
                         << std:: endl;
                         ;

            std::cin >>
                opr;
            if (opr == 1)
            {
                int withdraw;
                std::cout << "Enter ammount to withdraw: ";
                std::cin >> withdraw;
                int status = Account.withdraw(withdraw);
                if (status == -1)
                {
                    std::cout << "You don't have enough balance to withdraw, you balance is : " << Account.balanceCheck() << std::endl;
                    continue;
                }
                std::cout << "Withrawal successfull, you remaining balance is: " << status << std::endl;
                history.push_back(Account);
            }
            else if (opr == 2)
            {

                int deposit;
                std::cout << "Enter ammount to deposit: ";
                std::cin >> deposit;
                std::cout << "Deposit successfull, you total balance is: " << Account.deposit(deposit)<<std::endl;
                history.push_back(Account) ;
            }
            else if (opr == 3)
            {
                std::cout << "you total balance is: " << Account.balanceCheck();
            }
            else if (opr == 4)
            {
                for (auto &h : history)
                {
                    std::cout << h << std::endl;
                }
            }
            else
            {
                transaction = false;
                break;
            }
        }
    }

    return 0;
}