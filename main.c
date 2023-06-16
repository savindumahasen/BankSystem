#include <stdio.h>
#include<string.h>


 void thirdPartyTransaction(){
    char recieverAccountNumber[12];
    char senderAccountNumber[12];
    char senderAccountNumber1[12]="1234567890";
    int salary;
    printf("Please Enter the Sender Account numbers\n");
    scanf("%s",&senderAccountNumber);
    printf("Please Enter the recieverAccountNumber\n");
    scanf("%s",&recieverAccountNumber);
    printf("Please Enter the Amount\n");
    scanf("%d",&salary);
    int value=strcmp(senderAccountNumber,senderAccountNumber1);
    if(value==0){
      printf("Third party Transaction is successfully completed!\n");
      printf("you transferd the %d ",salary);
      printf("in to the  recieverAccountNumber successfully");
    }else{
      printf("Third party Transaction is not successfully completed!");

      
    }

  

}
void   Payement(int value1,int value ){  //payement function  declaration

  if(value1==0){
                                                                               //payement function definition
        if(value==0){
              printf("Transaction is successfully confirmed!");

        }else{
              printf("Transaction is not successfully confirmed!");
        }

           
  }else{
        printf("Transaction process cannot be done!");
    }
  
}



void dialogBroadBand(){
    printf("Dialog Broadband Internet Service Providers");
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
    int confirmPayement;
    int confirmPayement1=1;
    printf("Please Enter the 1 for doing the payement ");
    int value1=strcmp(confirmPayement,confirmPayement1);
     int value=strcmp(routerNo,rRouterNo);
    if(value1==0){
         if(value==0){
            printf("Transaction is successfully confirmed!");

         }else{
            printf("Transaction is not successfully confirmed!");
         }

    }else{
         printf("Transaction cannot be done!");
    }

   



     printf("Payement is successfully confirmed!");

}
 void SLT(){
     printf("SLT-4G Internet Service Providers");
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
    char confirmPayement;
    char confirmPayment1=1;
    printf("If you want to do the payements please Enter the  1  ");
    scanf("%s",&confirmPayement);

    int value1=strcmp(confirmPayement,confirmPayment1);
 
    int value=strcmp(invoiceNo,rInvoiceNo);
    Payement(value1,value);
    


 
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
    char confirmPayement;
    char confirmPayment1=1;
    printf("If you want to do the payements please Enter the  1  ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayment1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    if(value1==0){
      
        if(value==0){
              printf("Transaction is successfully confirmed!");

        }else{
              printf("Transaction is not successfully confirmed!");
        }

           
    }else{
        printf("Transaction process cannot be done!");
    }
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
    char confirmPayement;
    char confirmPayment1=1;
    printf("If you want to do the payements please Enter the  1  ");
    scanf("%s",&confirmPayement);
    int value1=strcmp(confirmPayement,confirmPayment1);
    int value=strcmp(invoiceNo,rInvoiceNo);
    Payement(value1,value);   // call the payement function by passing two arguements


    


  }
void makePayements(){
  int option;
  printf("Please Enter the correct option\n");
  scanf("%d",&option);
  switch(option){
     case 1:
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
              mobitelBroadBand();
              break;
            case 4:
              lankaHost();
              break;
            case 5:
              registerLk();
              break;
            case 6:
              nameBirth();
              break;
            default:
              printf("you Enterd the incorrect option");
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
    printf("Please Enter the password ");
    scanf("%d",&password);
    int value=strcmp(userName,userName1);
  

    if((value==0)&&(password==456)){      
        printf("Login is successfully confirmed\n");
        printf("You can see the options below\n");
        printf("Please Enter the correct option\n");
        scanf("%d",&option);
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







