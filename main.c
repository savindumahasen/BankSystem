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
      printf(" into the %s", recieverAccountNumber[12]);
      printf("successfully");
    }else{
      printf("Third party Transaction is not successfully completed!");

      
    }

  

}
void payement(int value1,int value,int salary ){  //payement function  declaration

  if(value1==0){
                                                                               /*payement function definition
                                                                                                           */
       if(value==0){
              printf("Transaction is successfully confirmed!\n");
              printf("you transfered %d",salary);

        }else{
              printf("Transaction is not successfully confirmed!");
        }

           
  }else{
        printf("Transaction process cannot be done!");
    }
  
}
void telephonePayement(){
    int salary;
    char gsmNumber[20];
    char rGsmNumber[20];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Enter the telephone GSM Number\n");
    scanf("%s",&gsmNumber);
    printf("Re Enter the telephone gsm number again\n");
    scanf("%s",&rGsmNumber);
    printf("Enter your telephone amount\n");
    scanf("%d",&salary);
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    printf("If you want to do a payement Please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(gsmNumber,rGsmNumber);
    payement(value1,value,salary);
}


void dialogBroadBand(){
    printf("Dialog Broadband Internet Service Providers\n");
    //-----------------------------------------------
    int salary;
    char routerNo[4];
    char rRouterNo[4];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Router No\n");
    scanf("%s",&routerNo);
    printf("Please Re-Enter the Router No\n");
    scanf("%s",&rRouterNo);
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    printf("Please Enter the yes for doing the payement\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(routerNo,rRouterNo);
    payement(value1,value,salary);
   
}
 void SLT(){
     printf("SLT-4G Internet Service Providers");
    //-----------------------------------------------
    int salary;
    char invoiceNo[20];
    char rInvoiceNo[20];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    char confirmPayement[10];
    char confirmPayment1[10]="yes";
    printf("If you want to do the payements ");
    scanf("%s",&confirmPayement);

    int value1=strcmp(confirmPayement,confirmPayment1);
 
    int value=strcmp(invoiceNo,rInvoiceNo);
    payement(value1,value,salary);
    


 
}
 void mobitelBroadBrand(){            
  printf("Mobitel Internet Service Providers\n");
    //-----------------------------------------------
    int salary;
    char routerNo[4];
    char rRouterNo[4];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Router No\n");
    scanf("%s",&routerNo);
    printf("Please Re-Enter the Router No\n");
    scanf("%s",&rRouterNo);
    char confirmPayement[10];
    char confirmPayement1[10]="yes";
    printf("Please Enter the yes for doing the payement\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    int value=strcmp(routerNo,rRouterNo);
    payement(value1,value,salary);

 }
 
 void lankaHost(){
   printf("Lanka Host Internet Service Providers");
    //-----------------------------------------------
    int salary;
    char invoiceNo[4];
    char rInvoiceNo[4];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    char confirmPayement[10];
    char confirmPayment1[10]="yes";
    printf("If you want to do the payements please Enter the yes\n");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayment1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    payement(value1,value,salary);
 }

  void refisterLK(){
    printf("Lanka Host Internet Service Providers");
    //-----------------------------------------------
    int salary;
    char invoiceNo[4];
    char rInvoiceNo[4];
    printf("Pay From\n");
    printf("1234567890\n");
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    printf("Please Enter the Invoice with -\n");
    scanf("%s",&invoiceNo);
    printf("Please Re-Enter the Invoice with -\n");
    scanf("%s",&rInvoiceNo);
    char confirmPayement[10];
    char confirmPayment1[10]="yes";
    printf("If you want to do the payements please Enter the  1  ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayment1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    payement(value1,value,salary);   // call the payement function by passing two arguements


    


  }

  void dialogMobile(){
  
    telephonePayement();


  }

  void lankaBell(){
    telephonePayement();
       
  }
  void mobitel(){
    telephonePayement();
  }

  void sriLankaTelecom(){
       telephonePayement();
  }

  void  airtel(){
       telephonePayement();
  }
  void huch(){
       telephonePayement();
  }
  void sunnetLanka(){
       telephonePayement();
  }
  void nationalWaterAndDrainge(){
    //------------------------------------
    int salary;
    char billNumber[12];
    char reBillNumber[12];
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
    printf("Do you want to do a pay Enter the  yes ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayement1);
    payement(value1,value,salary);

    


  }

 
  void makePayements(){
  printf("If you want to do a payements for Internet Service providers Please Enter the option 1\n");
  printf("If you want to  do a payements for Telephone Services Please Enter the option 2\n");
  printf("If you want to do a payement for water Board Please Enter the option 3\n");
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
              printf("You Enterd the incorrect option");
              printf("Please Enter the correct option");
                
        }
      break;
     case 2:
         int option2;
         printf("Please Enter the Telephone service");
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







