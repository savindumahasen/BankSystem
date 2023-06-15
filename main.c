#include <stdio.h>
#include<string.h>


 void thirdPartyTransaction(){
    char recieverAccountNumber[12];
    char senderAccountNumber[12];
    char senderAccountNumber1[12]="1234567890";
    printf("Please Enter the Sender Account numbers\n");
    scanf("%s",&senderAccountNumber);
    printf("Please Enter the recieverAccountNumber\n");
    scanf("%s",&recieverAccountNumber);
    int value=strcmp(senderAccountNumber,senderAccountNumber1);
    if(value==0){
      printf("Third party Transaction is successfully completed!");
    }else{
      printf("THird part Transaction is not successfully completed!");

      
    }

  

}
int main()
{
    char userName[50];
    int password;
    int option;
   char userName1[50]="Savindu";

    printf("Please Enter theUser Name\n");
    scanf("%s",&userName);
    printf("Please Enter the password ");
    scanf("%d",&password);
    int value=strcmp(userName,userName1);
  

    if((value==0)&&(password==456)){
        printf("Login is successfully confirmed\n\n\n");
        printf("You can see the options below\n");
        printf("Please Enter the correct option\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
           thirdPartyTransaction();
          break;
        
        default:
          break;
        }
      


    }else{
        printf("Login is not successfully confirmed");
      }


    return 0;
}







