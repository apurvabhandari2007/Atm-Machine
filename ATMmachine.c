
#include<stdio.h>
int balance =100000;
int correct_pin=1987;

int check_pin(){
    int pin;
    for(int i=1;i<=3;i++){
        printf("Enter pin: ");
        scanf("%d",&pin);

        if (pin ==correct_pin){
            return 1;
        }
        printf("Wrong pin!");
        
    }
        return 0;

        
    }

    void showmenu() {
        printf("\n------ATM Menu-------\n");
        printf("1.Check balance\n");
        printf("2.Deposit\n");
        printf("3.Withdrwal\n");
        printf("4.Exit\n");
        printf("Enter any of your choice: ");
    }
    

    void check_balance(){
        printf("%d is the balance",balance);
    }

    void deposit(){
        int amount;
        printf("Enter amount:");
        scanf("%d",&amount);
        if(amount<0){
            printf("Invaild amount");
        }else{
            balance = balance + amount;
        }
        check_balance();
    }

    void withdrwal(){
        int amount;
        printf("ENter amount: ");
        scanf("%d",&amount);
        if (amount>balance){
            printf("Not enough balance!");
        }else if(amount<0){
            printf("invaild balance");
        }else{
            balance=balance-amount;
            
        }
        check_balance();
    }

    int main(){
        int choice;
        printf("Welcome!\n");

        if(check_pin()==0){
            printf("No enough tries,Card bloacked!");
            return 0;
        }

        do{
            showmenu();
            scanf("%d",&choice);
            switch(choice){
                case 1:check_balance();break;
                case 2:deposit();break;
                case 3:withdrwal();break;
                case 4:printf("Thank for using our servies!");break;
                default:printf("Invaild");
            }
        }
        while(choice != 4);
        return 0;

    }

    
    
