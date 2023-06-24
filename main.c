#include <stdio.h>
#include<string.h>
#include<stdlib.h>



 void thirdPartyTransaction(){   // function declaration
    char recieverAccountNumber[12];  // define the variables
    char re_recieverAccountNumber[12];                         /*function definition*/
    //char senderAccountNumber1[12]="1234567890"; // function declaration
    int salary;
    printf("From Account\n");
    printf("1234567890\n");                            // get the user input fro users
    printf("Please Enter the Reciever Account Number\n");
    scanf("%s",&recieverAccountNumber);     // get the user input fro users
    printf("Please Re-Enter the Reciever Account Number\n");
    scanf("%s",&re_recieverAccountNumber);
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);     // get the user input fro users
    printf("Please Enter the recieverAccountNumber\n");
    int value=strcmp(recieverAccountNumber,re_recieverAccountNumber);
    if(value==0){
      printf("Third party Transaction is successfully completed!\n");
      printf("you transferd the %d ",salary);
      printf(" into the %s", recieverAccountNumber);
      printf(" Account");
      printf(" successfully");
    }else{
      printf("Third party Transaction is not successfully completed!");

      
    }

  

}
void payement(int value1,int value,int salary,char billingYear[20],char billingMonth[20],char service[100],int recietNumber){  //payement function  declaration

  if(value1==0){
                                                                               /*payement function definition
                                                                                                           */
       if(value==0){
              printf("Transaction is successfully confirmed!\n");
              printf("you transfered RS: %d",salary);
              printf(" in to the %s \n",service);
              char option[20];
              char option1[20]="yes";
              printf("If you want to see the payement History! Please Enter the yes\n");
              scanf("%s",&option);
              int value3=strcmp(option,option1);
              if(value3==0){
                  
                  char accountNumber[12]="1234567890";
                
                  printf("      Payement Successful    \n");
                  printf("       Rs: %d \n",salary);
                  printf("   Transaction successfully processed and amount\n");
                  printf("   will be credited to your account within one or two\n");
                  printf("                     buisness days             \n");
                  printf("SUMMARY\n");
                  printf("Account Number %s \n",accountNumber);
                  printf("Billing Year %s \n",billingYear);
                  printf("Billing Month %s \n",billingMonth);
                  printf("-----------------------------------------------------------------\n\n");
                  printf("STATUS\n");


                  printf("Your Bill Script is\n");
                  printf("salary %d \n",salary);
                  printf("Billing year %s \n",billingYear);
                  printf("Billing Month %s \n",billingMonth);
                  printf("Reciet Number %d \n",recietNumber);
                  printf("Result     Captured");

              }


        }else{
              printf("Transaction is not successfully confirmed!");
        }

           
  }else{
        printf("Transaction process cannot be done!");
    }
  
}


void telephonePayement(char service[100]){
    int salary;
    char gsmNumber[20];
    char rGsmNumber[20];
    char billingYear[20];
    char billingMonth[20];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Enter the telephone GSM Number\n");
    scanf("%s",&gsmNumber);
    printf("Re Enter the telephone GSM number again\n");
    scanf("%s",&rGsmNumber);
    printf("Enter your telephone amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",&billingMonth);
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    printf("If you want to do the payement Please Enter the yes\n\n");
    printf("-----------------------------------------------------------\n\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(gsmNumber,rGsmNumber);
    srand(0);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
}


void dialogBroadBand(){
   
    //-----------------------------------------------
    printf("Dialog Broadband Internet Service Providers\n");
    int salary;
    char service[100]="Dialog Broad Brand";
    char routerNo[12];
    char rRouterNo[12];
    char billingYear[20];
    char billingMonth[20];
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    //-----------------------------------------------------------------------------
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Router No\n");
    scanf("%s",&routerNo);
    printf("Please Re-Enter the Router No\n");
    scanf("%s",&rRouterNo);
    printf("Please Enter the Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",&billingMonth);
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(routerNo,rRouterNo);
    srand(1);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
   
}
 void SLT(){
   
    //-----------------------------------------------
    printf("SLT-4G Internet Service Providers");
    int salary;
    char service[100]="SLT-4G";
    char invoiceNo[20];
    char rInvoiceNo[20];
    char billingYear[20];
    char billingMonth[20];
    char confirmPayement[10];
    char confirmPayment1[10]="yes";
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    printf("Please Enter the Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",&billingMonth);
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);

    int value1=strcmp(confirmPayement,confirmPayment1);
 
    int value=strcmp(invoiceNo,rInvoiceNo);
    srand(2);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
    


 
}
 void mobitelBroadBrand(){            
  printf("Mobitel Internet Service Providers\n");
    //-----------------------------------------------
    int salary;
    char service[100]="Mobitel Broad Brand";
    char routerNo[12];
    char rRouterNo[12];
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    char billingYear[20];
    char billingMonth[20];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Router No\n");
    scanf("%s",&routerNo);
    printf("Please Re-Enter the Router No\n");
    scanf("%s",&rRouterNo);
    printf("Please Enter tthe Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",billingMonth);
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(routerNo,rRouterNo);
    srand(3);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);

 }
 
 void lankaHost(){
   
    //-----------------------------------------------
    printf("Lanka Host Internet Service Providers");
    int salary;
    char service[100]="Lanka Host";
    char invoiceNo[4];
    char rInvoiceNo[4];
    char billingYear[20];
    char billingMonth[20];
    char confirmPayement[10];
    char confirmPayment1[10]="yes";
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    printf("Please Enter the Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",&billingMonth);
   
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayment1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    srand(4);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
 }

  void refisterLK(){
   
    //----------RefisterLK-------------------------------
    printf("Refister LK Internet Service Providers");
    int salary;
    char service[100]="Refister LK";
    char invoiceNo[4];
    char rInvoiceNo[4];
    char billingYear[20];
    char billingMonth[20];
    char confirmPayement[20];
    char confirmPayement1[20]="yes";
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    printf("Please Enter the Billing Year\n");
    scanf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    scanf("%s",&billingMonth);
    
    printf("If you want to do the payement Please Enter the yes\n ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    srand(5);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);   // call the payement function by passing two arguements


    


  }

  void dialogMobile(){
  
   // telephonePayement();
    char service[100]="Dialog Mobile";
    telephonePayement(service);
    


  }

  void lankaBell(){
    //telephonePayement();
    char service[100]="Lanka Bell";
    telephonePayement(service);
       
  }
  void sriLankaTelecom(){

    char service[100]="SriLanka Telecom";
    telephonePayement(service);
  }
  void mobitel(){
    //telephonePayement();
      
    char service[100]="Mobitel";
    telephonePayement(service);
    
  }

  void  airtel(){
       //telephonePayement();
    char service[100]="Airtel";
    telephonePayement(service);
  }
   
  void huch(){
      // telephonePayement();
    char service[100]="Huch";
    telephonePayement(service);
  }  
  void sunnetLanka(){
      // telephonePayement();
    char service[100]="Sunnet Lanka";
    telephonePayement(service);
  }
  void nationalWaterAndDrainge(){
    //------------------------------------
    int salary;
    char service[100]="National Water And Drainge";
    char billNumber[12];
    char reBillNumber[12];
    char billingYear[20];
    char billingMonth[20];
    printf("National Water Supply And Drainage Board\n");
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Enter the Amount\n");
    scanf("%d",&salary);
    printf("Enter the Bill Account Number\n");
    scanf("%s",&billNumber);
    printf("Re-Enter the Bill Account Number\n");
    scanf("%s",&reBillNumber);
    char value=strcmp(billNumber,reBillNumber);
    char confirmPayement[12];
    char confirmPayement1[12]="yes";
    printf("If you want to do the payement Please Enter the yes ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    srand(6);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);

    


  }
  void ceylonElectricityBoard(){
    //----------Ceylon Electricity Board----------
    int salary;
    char service[100]="Ceylon Electricity Board";
    char eBillAccountNumber[20];
    char reBillAccountNumber[20];
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    char billingYear[20];
    char billingMonth[20];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Electricty Bill Number\n");
    scanf("%s",&eBillAccountNumber);
    printf("Please Re-Enter the Electricity Bill Number\n");
    scanf("%s",&reBillAccountNumber);
    printf("If you want to do payement Please Enter the yes");
    scanf("%s",&confirmPayement);
    printf("Please Enter the Billing Year");
    scanf("%d",&billingYear);
    printf("Please Enter the Billing Month");
    scanf("%d",&billingMonth);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(eBillAccountNumber,reBillAccountNumber);
    srand(7);
    int recietNumber=(rand())*100;
    payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);



  }
  void lankaElectricityCompany(){
    //-------Lanaka Electricity Company--------
      int salary;
      char service[100]="Lanka Electricity Company";
      char accountNumber[12];
      char accountNumber1[12]="1234567890";
      char confirmPayement[10];
      char confirmPayement1[10]="yes";
      char billingYear[20];
      char billingMonth[20];
      
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Account Number\n");
      scanf("%s",&accountNumber);
      printf("Please Re-Enter the Account Number\n");
      scanf("%s",&accountNumber1);
      printf("Please Enter the Billing Year\n");
      scanf("%s",&billingYear);
      printf("Please Enter the Billing Month\n");
      scanf("%s",&billingMonth);
      printf("If you want to do payement Please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(accountNumber,accountNumber1);
      int value=strcmp(accountNumber,accountNumber1);
      srand(8);
      int recietNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
  }
  void dialogTV(){
     //--------------Dialog TV-----------------------------------------
     int salary;
     char service[100]="Dialog TV";
     char billingYear[20];
     char billingMonth[20];
     char accountNumber[12];
     char reAccountNumber[12];
     char confirmPayement[20];
     char confirmPayement1[20]="yes";
     printf("Pay From\n");
     printf("1234567890\n");
     printf("Please Enter the Amount\n");
     scanf("%d",&salary);

     printf("Please Enter the Account No");
     scanf("%d",&reAccountNumber);
     printf("Please Enter the Billing Year\n");
     scanf("%s",billingYear);
     printf("Please Enter the Billing Month\n");
     scanf("%s",billingMonth);
     printf("If you want to  do payement Please Enter the yes\n ");
     scanf("%s",&confirmPayement);
     int value1=strcmp(confirmPayement,confirmPayement1);
     int value=strcmp(accountNumber,reAccountNumber);
     srand(9);
     int recietNumber=(rand())*100;
     payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);

  }
 

  void softlogicInsurance(){
      //-----------SoftLogic Insurance-----------
      int salary;
      char policyNumber[12];
      char billingYear[20];
      char billingMonth[20];
      char rePolicyNumber[12];
      char confirmPayement[12];
      char confirmPayement1[12]="yes";
      char service[100]="SoftLogic Insurance Serivce";
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number\n");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the Billing Year\n");
      scanf("%s",&billingYear);
      printf("Please Enter the Billing Month\n");
      scanf("%s",&billingMonth);
      printf("If you want to do payement Please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      srand(10);
      int recietNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);

  }
  void fairFirstInsurance(){
    //---------------Fair First Insurance---------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement[12];
      char billingYear[20];
      char billingMonth[20];
      char confirmPayement1[12]="yes";
      char service[100]="Fair First Insurance Service";
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the Billing Year\n");
      scanf("%s",&billingYear);
      printf("Please Enter the Billing mONTH\n");
      scanf("%s",&billingMonth);
      printf("If you want to payement please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      srand(11);
      int recietNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
      
  }
  void  sriLankaInsuranceLife(){
    //-----------------Srilankan Insurance Life----------------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char billingYear[20];
      char billingMonth[20];
      char confirmPayement[12];
      char confirmPayement1[12]="yes";
      char service[100]="SriLanakan Inurance Life Service";
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      printf("If you want to do payement Please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      srand(12);
      int receitNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,receitNumber);

  }
  void sriLankaMotorInsurance(){
    //---------------Srilankan Motor Insurance-------------------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement[12];
      char confirmPayement1[12]="yes";
      char billingYear[20];
      char billingMonth[20];
      char service[100]="SriLanakan Insurance Service";
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the Billing Year\n");
      scanf("%s",&billingYear);
      printf("Please Enter the Billing Month\n");
      scanf("%s",&billingMonth);
      printf("If you want to do payement Please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(confirmPayement1,confirmPayement);
      int value=strcmp(policyNumber,rePolicyNumber);
      srand(13);
      int receitNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,receitNumber);

      
  }
  void  ceylincoLife(){
    //-------Ceylinco Life--------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement[12];
      char confirmPayement1[12]="yes";
      char billingYear[20];
      char billingMonth[20];
      char service[100]="Ceylinco Insurance Service";
      printf("Pay From\n");
      printf("1234567890\n");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the Billing Year\n");
      scanf("%s",&billingYear);
      printf("Please Enter the Billing Month\n");
      scanf("%s",&billingMonth);
      printf("If you want to do payement Please Enter the yes\n");
      scanf("%s",&confirmPayement);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      srand(14);
      int recietNumber=(rand())*100;
      payement(value1,value,salary,billingYear,billingMonth,service,recietNumber);
  }
 
  void makePayements(){
   printf("If you want to do a payements for Internet Service providers Please Enter the option 1\n");
   printf("If you want to  do a payements for Telephone Services Please Enter the option 2\n");
   printf("If you want to do a payement for water Board Please Enter the option 3\n");
   printf("If you want to do  a payements for Electricity Please Enter the option 4\n");
   printf("If youw want to do a payement for Cable TV  Please Enter the option 5\n");
   printf("Ïf you want to do a payement for Insurance Please Enter the option 6\n");
   int option;
   printf("Please Enter the correct option\n");
   scanf("%d",&option);

   switch(option){
     case 1:
        printf("If you want to  do  a payements for Dialog Broadbrand Please Enter the option 1\n");
        printf("If you want to  do a payements for SLT-4G Please Enter the option 2\n");
        printf("If you want to do a payement for Mobitel Broadbrand Please Enter the option 3\n");
        printf("If you want to  do a payement for Lanka Host Please Enter the option 4\n");
        printf("If you want to do a payement for Refister LK Please Enter the the option 5\n");
        int option1;
        printf("Please Enter the Inernet service provider\n");
        scanf("%d",&option1);
        switch(option1){
            case 1:
              dialogBroadBand();
            break;
               
            case 2:
              SLT();
            break;
            case 3:
              mobitelBroadBrand();
              break;
            case 4:
              lankaHost();
              break;
            case 5:
              refisterLK();
            default:
              printf("You Enterd the incorrect option\n");
              printf("Please Enter the correct option\n");
                
        }
      break;
     case 2:
         int option2;
         printf("Please Enter the Telephone service\n");
         scanf("%d",&option2);
         switch(option2){

              case 1:
                  dialogMobile();
                  break;

              case 2:
                  lankaBell();
                  break;
              case 3:
                  mobitel();
                  break;
              case 4:
                  sriLankaTelecom();
                  break;
              case 5:
                  airtel();
                  break;
              case 6:
                  huch();
                  break;
              case 7:
                  sunnetLanka();
                  break;
              default:
                  printf("You Entered Invalid option \n");
                  printf("Please Enter the correct option\n");
         }
         break;
     case 3:
            printf("If you want to do a payement for National Water And Drainge Please Enter the 1\n");
            int option3;
            printf("Please Enter the water Board service option\n");
            scanf("%d",&option3);
            switch(option3){
                 
                 case 1:
                    nationalWaterAndDrainge();
                    break;
                default:
                    printf("You Entered Incorrect option");
            }
      break;

     case 4:
          printf("If you want to do a payement for Ceylon Electricity Board Please Enter the option 1\n");
          printf("If you want to do a payement for Lanka Electricity Company Please Enter the option 2\n ");
          int option4;
          printf("Please Enter the correct Electricity board service option\n");
          scanf("%d",&option4);
          switch(option4){

            case 1:
                ceylonElectricityBoard();
                break;

            case 2:
                lankaElectricityCompany();
                break;
            default:
                printf("you entered incorrect option\n");
                printf("Please Enter the correct option\n");
          }

        break;
     case 5:
          printf("If you want to  do a payement for Dialog TV Please Enter the option 1\n");
          int option5;
          printf("Please Enter the correct TV service option \n");
          switch(option5){
            case 1:
                dialogTV();
                break;;
          }
          break;
     case 6:
          printf("If you want to do a payement for Softlogic Life Insurance Please Enter the option 1\n");
          printf("If you want to  do a payement for Fairfirst Insurance Please Enter the option 2\n");
          printf("If you want to do a payement for Srilanka Insurance-Life Renewals Please Enter the option 3\n");
          printf("If you want to do a payement for Srilana Insurance-Motor Renewals Please Enter the option 4\n");
          //printf("If you want to do a payement for Janashathi Insurance Please Enter the option 5\n");
          printf("If you want to do a payement for Ceylinco Life Insurance Please Enter the option 5\n");
          int option6;
          printf("Please Enter the Insurance option\n");
          scanf("%d",&option6);
          switch(option6){

            case 1:
                softlogicInsurance();
                break;
            case 2:
                fairFirstInsurance();
                break;
            case 3:
                sriLankaInsuranceLife();
                break;
            case 4:
                sriLankaMotorInsurance();
                break;
            case 5:
                ceylincoLife();
                break;

            default:
               printf("You Entered incorrect option\n");
               printf("Please Enter the correct option");
          
          }
          break;
         
     
       default:
        printf("Your options are invalid please Enter the correct options");

                 
         
  }
      
 
  }

int main()
{
    char userName[50];   // define the variables
    int  password;
    char option2[20]="yes";
    char option1[20];
    char userName1[50]="Savindu";   // declare the variables
    int  newPassword;
  
    int  value1;

    printf("Please Enter the User Name\n");
    scanf("%s",&userName);
    printf("Please Enter the password\n");
    scanf("%d",&password);
    printf("Do you need to change the password Please Enter the yes\n");
    scanf("%s",&option1);
    int value=strcmp(option1,option2);
    if(value==0){
    printf("Please Enter the New Password\n");
    scanf("%d",&newPassword);
    password=newPassword;
    
     value1=strcmp(userName,userName1);
    if((value1==0)&&(password==newPassword)){
        printf("Login is successfully confirmed\n");

     
        printf("You can see the options below\n");
        //-----------------------------------------
        printf("If you want to do Third party Transaction Please Enter the option 1\n");
        printf("If you want to do Make Payements please Enter the option 2 ");
        int option;
        printf("Please Enter the correct option\n");
    
        scanf("%d",&option);
      
        //------------------------------------------------------
        switch (option)
        {
        case 1:
           thirdPartyTransaction();
          break;
        case 2:
           makePayements();
        
        default:
          break;
        }
      


    }else{
        printf(" Login is not successfully confirmed");
      }


    }else{    
        printf("Login is successfully confirmed\n");

     
        printf("You can see the options below\n");
        //-----------------------------------------
        printf("If you want to do Third party Transaction Please Enter the option 1\n");
        printf("If you want to do Make Payements please Enter the option 2 ");
        int option;
        printf("Please Enter the correct option\n");
        scanf("%d",&option);
      
        //------------------------------------------------------
        switch (option)
        {
        case 1:
           thirdPartyTransaction();
          break;
        case 2:
           makePayements();
        
        default:
          printf("Please Enter the correct option\n");
          break;
        }
      


  


   return 0;
    }
}








