#include <stdio.h>
#include<string.h>


 void thirdPartyTransaction(){   // function declaration
    char recieverAccountNumber[12];  // define the variables
    char senderAccountNumber[12];                          /*function definition*/
    char senderAccountNumber1[12]="1234567890"; // function declaration
    int salary;
    printf("Please Enter the Sender Account numbers\n");
    scanf("%s",&senderAccountNumber);                            // get the user input fro users
    printf("Please Enter the recieverAccountNumber\n");
    scanf("%s",&recieverAccountNumber);     // get the user input fro users
    printf("Please Enter the recieverAccountNumber\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);     // get the user input fro users
    printf("Please Enter the recieverAccountNumber\n");
    int value=strcmp(senderAccountNumber,senderAccountNumber1);
    if(value==0){
      printf("Third party Transaction is successfully completed!\n");
      printf("you transferd the %d ",salary);
      printf(" into the %s", recieverAccountNumber);
      printf(" successfully");
    }else{
      printf("Third party Transaction is not successfully completed!");

      
    }

  

}
void payement(int value1,int value,int salary,char billingYear[20],char billingMonth[20],char service[100]){  //payement function  declaration

  if(value1==0){
                                                                               /*payement function definition
                                                                                                           */
       if(value==0){
              printf("Transaction is successfully confirmed!\n");
              printf("you transfered %d",salary);
              printf(" in to the %s",service);

        }else{
              printf("Transaction is not successfully confirmed!");
        }

           
  }else{
        printf("Transaction process cannot be done!");
    }
  
}
void insurancePayement(int value1,int value,int salary,char service[100]){

  if(value1==0){
     if(value==0){

            printf("you transfered %d",salary);
            printf(" into the %s",service);
     }else{
          printf("Transaction is not successfully onfirmed!");
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
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(gsmNumber,rGsmNumber);
    payement(value1,value,salary,billingYear,billingMonth,service);
}


void dialogBroadBand(){
    printf("Dialog Broadband Internet Service Providers\n");
    //-----------------------------------------------
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
    printf("%s",&billingYear);
    printf("Please Enter the Billing Month\n");
    printf("%s",&billingMonth);
    printf("If you want to do the payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(routerNo,rRouterNo);
    payement(value1,value,salary,billingYear,billingMonth,service);
   
}
 void SLT(){
     printf("SLT-4G Internet Service Providers");
    //-----------------------------------------------
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
    payement(value1,value,salary,billingYear,billingMonth,service);
    


 
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
    payement(value1,value,salary,billingYear,billingMonth,service);

 }
 
 void lankaHost(){
   printf("Lanka Host Internet Service Providers");
    //-----------------------------------------------
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
    payement(value1,value,salary,billingYear,billingMonth,service);
 }

  void refisterLK(){
    printf("Refister LK Internet Service Providers");
    //-----------------------------------------------
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
    payement(value1,value,salary,billingYear,billingMonth,service);   // call the payement function by passing two arguements


    


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
    payement(value1,value,salary,billingYear,billingMonth,service);

    


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
    payement(value1,value,salary,billingYear,billingMonth,service);



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
      payement(value1,value,salary,billingYear,billingMonth,service);
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
     int value1=strcmp(confirmPayement,confirmPayement1);
     int value=strcmp(accountNumber,reAccountNumber);
     payement(value1,value,salary,billingYear,billingMonth,service);

  }
 

  void softlogicInsurance(){
      //-----------SoftLogic Insurance-----------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement;
      char confirmPayement1[12];
      char service[100];
      printf("Pay From\n");
      printf("1234567890");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the yes for dping the payement\n");
      scanf("%s",&confirmPayement);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      insurancePayement(value1,value,salary,service);

  }
  void fairFirstInsurance(){
    //---------------Fair First Insurance---------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement;
      char confirmPayement1[12];
      char service[100];
      printf("Pay From\n");
      printf("1234567890");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the yes for dping the payement\n");
      scanf("%s",&confirmPayement);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      insurancePayement(value1,value,salary,service);
      
  }
  void  sriLankaInsuranceLife(){
    //-----------------Srilankan Insurance Life----------------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement;
      char confirmPayement1[12];
      char service[100];
      printf("Pay From\n");
      printf("1234567890");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the yes for dping the payement\n");
      scanf("%s",&confirmPayement);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      insurancePayement(value1,value,salary,service);

  }
  void sriLankaMotorInsurance(){
    //---------------Srilankan Motor Insurance-------------------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement;
      char confirmPayement1[12];
      char service[100];
      printf("Pay From\n");
      printf("1234567890");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the yes for dping the payement\n");
      scanf("%s",&confirmPayement);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      insurancePayement(value1,value,salary,service);

      
  }
  void  ceylincoLife(){
    //-------Ceylinco Life--------------
      int salary;
      char policyNumber[12];
      char rePolicyNumber[12];
      char confirmPayement;
      char confirmPayement1[12];
      char service[100];
      printf("Pay From\n");
      printf("1234567890");
      printf("Please Enter the Amount\n");
      scanf("%d",&salary);
      printf("Please Enter the Policy Number\n");
      scanf("%s",&policyNumber);
      printf("Please Re-Enter the policy Number");
      scanf("%s",&rePolicyNumber);
      printf("Please Enter the yes for dping the payement\n");
      scanf("%s",&confirmPayement);
      printf("Please Enter the Insurance Service name\n");
      scanf("%s",&service);
      int value1=strcmp(confirmPayement,confirmPayement1);
      int value=strcmp(policyNumber,rePolicyNumber);
      insurancePayement(value1,value,salary,service);
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
          printf("If you want to do a payement for Janashathi Insurance Please Enter the option 4\n");
          printf("If you want to do a payement for Ceylinco Life Insurance Please Enter the option 5\n");
          int option6;
          printf("Please Enter the Insurance option\n");
          scanf("%d",&option6);
          switch(option6){

            case 1:
                softloginInsurance();
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
         
     
       default:
        printf("Your options are invalid please Enter the correct options");

                 
         
  }
      
 
  }

int main()
{
    char userName[50];   // define the variables
    int password;
    int option;
    char userName1[50]="Savindu";   // declare the variables

    printf("Please Enter the User Name\n");
    scanf("%s",&userName);
    printf("Please Enter the password\n");
    scanf("%d",&password);
    int value=strcmp(userName,userName1);
  

    if((value==0)&&(password==456)){      
        printf("Login is successfully confirmed\n");
        printf("You can see the options below\n");
        //-----------------------------------------
        printf("If you want to do Third party Transaction Please Enter the option 1\n");
        printf("If you want to do Make Payements please Enter the option 2 ");
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


    return 0;
}







