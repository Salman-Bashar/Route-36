#include<stdio.h>
main ()
{
    int TBP=0;
     char y,loop;
     int x,xx,Bus;
     int fuelunit,fuelcost,driver,helper,damage,subtotal,totalcost,balance;
     int passenger1, income1, passenger2, income2, passenger3, income3, totalincome, grandtotalincome;
     int busfare1,busfare2,halfbusfare2;
    char choice,checkpoint,output;
    struct BusProfile {
int BusNumber;
char DriverName[20];
char HelperName[20];
char PlateNumber[20];
char Condition[20];
int TotalIncome;

};

struct BusProfile BP[20];
while (loop!='E'){
printf("\n\n\n\n\t\t\t\t\ttWelcome to Route-36\n\n\n\n");
printf("\t\t\t\t\tPlease select : \n\n");

         printf("\t\t\t\t\t1. Admin\n");
         printf("\t\t\t\t\t2. Checker\n");
         printf("\t\t\t\t\t3. owner\n");
         printf("\t\t\t\t\t4. EXIT");
         printf("\n\t\t\t\t\tYour Choice: ");

        choice  = getche();
        switch (choice)

{
case '1':
        system("cls");
         printf("\n\n\t\t\t\t\t1. New Bus Information\n");
         printf("\t\t\t\t\t2. Add Costs\n");
         printf("\t\t\t\t\t3. Set Bus Fare\n");
         char AdminChoice;
         printf("\n\t\t\t\t\tYour Choice: ");
         AdminChoice=getche();
         switch (AdminChoice){
     case '1':

         while (y!='N'){
 printf("\n\n\t\t\t\t\tDriver Name: ");
scanf("%s",&BP[TBP].DriverName);
 printf("\n\t\t\t\t\tHelper Name: ");
scanf("%s",&BP[TBP].HelperName);
 printf("\n\t\t\t\t\tPlate Number: ");
scanf("%s",&BP[TBP].PlateNumber);
 printf("\n\t\t\t\t\tCondition: ");
scanf("%s",&BP[TBP].Condition);
BP[TBP].BusNumber=TBP+1;
TBP = TBP+1;

printf("\n\t\t\t\t\tYour Bus ID: %d",TBP);
printf("\n\n\t\t\tEnter N to Exit or Any key to Add another Bus Information: ");

y = getche();

         }
         break;
case '2':
         y='Y';
        while (y!='N'){
            printf("\n\n\t\t\t\t\tUnit price of Fuel: ");
scanf("%d",&fuelunit);
fuelcost = fuelunit*30;
printf("\n\n\t\t\t\t\tDriver's Salary: ");


scanf("%d",&driver);
printf("\n\n\t\t\t\t\tHelper's Salary: ");
scanf("%s",&helper);
printf("\n\n\t\t\t\t\tDamage Cost: ");
scanf("%s",&damage);
printf("\n\n\t\t\t\tEnter N to Exit or Enter any key to Add another Cost: ");
y=getche();
subtotal = fuelcost+driver+helper+damage;
          totalcost = totalcost + subtotal;
        }
        break;
     case '3':
        printf("\n\n\t\t\t\t\tBus fare at Purobi Checkpoint: ");
scanf("%d",&busfare1);
printf("\n\n\t\t\t\t\tBus fare at Sheorapara Checkpoint: ");
scanf("%d",&busfare2);
printf("\n\n\t\t\t\t\tBus fare of students/staffs at Sheorapara Checkpoint: ");
scanf("%d",&halfbusfare2);
break;
         }

         break;
     case '2':
        system("cls");
        printf("\n\n\t\t\t\t1.Checkpoint 1");
        printf("\n\n\t\t\t\t2.Checkpoint 2");
         printf("\n\n\t\t\t\tEnter the checkpoint :");
         checkpoint = getche();
         switch (checkpoint){
     case '1':
         printf("\n\n\t\t\t\tPlease Enter Bus Entry Number: ");
         scanf("%d",&Bus);
        printf("\n\n\t\t\t\tPassenger Number from Checkpoint 1: ");
        scanf("%d",&passenger1);
        income1 = passenger1*busfare1;
        BP[Bus-1].TotalIncome = BP[Bus-1].TotalIncome + income1;
        break;

case '2':
          printf("\n\n\t\t\t\tPlease Enter Bus Entry Number: ");
         scanf("%d",&Bus);
         printf("\n\n\t\t\t\tPassenger Number from Checkpoint 2: ");
        scanf("%d",&passenger2);
        income2 = passenger2 * busfare2;
         printf("\n\n\t\t\t\tNumber of Students/Staffs from Checkpoint 2: ");
        scanf("%d",&passenger3);
        income3 = (passenger2 - passenger3) * halfbusfare2;
        totalincome = income2 + income3;
        BP[Bus-1].TotalIncome = BP[Bus-1].TotalIncome + totalincome;
        break;
         }
         break;
     case '3':
        system("cls");
        printf("\n\n\t\t\t\t1. See all");
        printf("\n\n\t\t\t\t2. For specific Bus");
        printf("\n\n\t\t\t\tEnter your choice :");
        output = getche();
        switch (output){
    case '1':
        system("cls");
        printf("\n\nEntry Number\t\tDriver Name\t\tHelper Name\t\tPlate Number\t\tIncome");
        for(xx=0;xx<TBP;xx++){
            printf("\n\n\t\t%d\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%d",BP[xx].BusNumber,BP[xx].DriverName,BP[xx].HelperName,BP[xx].PlateNumber,BP[xx].TotalIncome);
        }
        break;
    case '2':
        printf("hi");

        }
        }
        printf("\n\nEnter E to Exit or Any Other Key to Go to the Main Menu :");
        loop = getche();
}
}
