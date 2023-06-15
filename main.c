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
      printf("THird part Transaction is not successfully completed!");

      
    }

  

}

void dialogBroadBand(){
    printf("Dialog Broadband Internet Service Providers");

     printf("Payement is successfully confirmed!");

}
void SLT(){

     printf("Payement is successfully confirmed!");
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
                
        }
      break;
     
     default:
       printf("Your options are invalid please Enter the correct options");

                 
         
  }
      
  
}
int main()
{
    char userName[50];
    int password;
    int option;
    char userName1[50]="Savindu";

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







