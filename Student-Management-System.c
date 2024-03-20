#include<stdio.h>
#include<stdlib.h>
#include<string.h> // Added for strcmp()

int age; 
char firstname[30];
char lastname[30]; 
char fullname[60];
int pn;
char usn[30];
char gender[30];
int branch[30];
char username[30];
char password[30];

void login();
int passusercheck(char username[30], char password[30]);
void features(); // Declare the features function
void details();
void features();
void modify();
void SGpa();
void fees();
int hostel();

void main(){
  printf("\n");
  printf("\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\t\t\t\t\t ||||     STUDENT MANAGEMENT SYSTEM    ||||\n");
  printf("\t\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n");
  printf("\t\t\tPrepared By : Gursimranjeet Singh and Gautam Kumar Gandhani\n\n");
  printf("\t\t\t Project : Student Management System\n\n");
  printf("\t\t\t  Press Enter to continue......");
  printf("\n\n");
  char c;
  scanf("%c",&c);
  login();
}

void login(){
  char username[30];
  char password[30];
  
  system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t");
  printf("Username: ");
  scanf("%s",username);
  printf("\t\t\t\t\t");
  printf("\n");
  printf("\t\t\t\t\t");
  printf("Password: ");
  scanf("%s",password);
  system("cls"); 
  passusercheck(username, password);
}

int passusercheck(char username[30], char password[30]){
  int tries = 4;
  int success = 0; // Changed to 0 for false
  while(success == 0 && tries > 0){
    char usernamecheck[30]; // Added array size
    char passwordcheck[30]; // Added array size
    printf("Enter Username: ");
    scanf("%s", usernamecheck);
    printf("Enter Password: ");
    scanf("%s", passwordcheck);
    
    if(strcmp(usernamecheck, username) == 0 && strcmp(passwordcheck, password) == 0){
      printf("WELCOME TO STUDENT MANAGEMENT SYSTEM :-");
      success = 1; // Set success to 1 for true
      details();
    }
    else{
      printf("You have %d tries remaining\n\n", tries-1);
      tries--;
      if(tries==0){
        break;

      }
      int yn;
      printf("Do you want to continue?\n\n");
      
      printf("Type 1 for yes\nType 2 for no \n");
      scanf("%d", &yn);
      if(yn == 2){
        success=1;
      }
    }
  }
  return success; // Added return statement
}



void details(){
    printf("We would love to know about you please enter your details\n");
    
    printf("Please enter your Age: \n");
    scanf("%d",&age);
    printf("Please enter your Firstname: \n");
    scanf("%s",&firstname);
    printf("Please enter your Lastname: \n");
    scanf("%s",&lastname);
    strcpy(fullname, firstname); // Copy firstname into fullname
    strcat(fullname, " "); // Add a space between firstname and lastname
    strcat(fullname, lastname);
    printf("Please enter your Phone Number: \n");
    scanf("%d",&pn);
    printf("Please enter your Gender: \n");
    scanf("%s",&gender);
    printf("Please enter your Branch: \n");
    scanf("%s",&branch);
    printf("Please enter your USN: \n");
    scanf("%s",&usn);

    features();
}



void features(){
    int true=1;
    while(true==1){
        int choice;
        printf("Please select the below choice\n");
        printf("Please enter 1 if you want to modify details:\n");
        printf("Please enter 2 if you want to calculate your cgpa or sgpa:\n");
        printf("Please enter 3 if you want to calculate your total fees:\n");
        printf("Please enter 4 to exit \n");
        scanf("%d",&choice);
        if(choice==1){
          modify();
        }
        else if(choice==2){
           SGpa();
        }
        else if(choice==3){
             fees();
        }
        else if(choice==4){
          printf("....Thank You! visit again....");
          break;
        }
        else{
            printf("...Invalid choice...\n");
            printf("...Please try again..");
        }
        
        int yn;
        printf("\nDo you want to continue?\n");
      
        printf("Type 1 for yes\nType 2 for no: ");
        scanf("%d", &yn);
        if(yn ==1){
          true=1;
        }
        else{
            true=0;
        }

    }
}


void modify(){

  printf("please press 1 if you want to modify Username:\n");
  printf("please press 2 if you want to modify Password:\n");
  printf("please press 3 if you want to modify Firstname:\n");
  printf("please press 4 if you want to modify Lastname:\n");
  printf("please press 5 if you want to modify age:\n");
  printf("please press 6 if you want to modify phonenumber:\n");
  printf("please press 7 if you want to modify USN:\n");
  printf("please press 8 if you want to modify gender:\n");
  printf("please press 9 if you want to modify branch:\n");
  int c;
  scanf("%d",&c);
  switch (c)
  {
     case 1:{
         
         printf("Enter new Username:");
         scanf("%s",&username);
         printf("Your Username has been changed");
         break;

     }
     case 2:{
      printf("Enter new Password:");
         scanf("%s",&username);
         printf("Your password has been changed");
         break;
     }
     case 3:{
      printf("Enter new Firstname:");
         scanf("%s",&firstname);
         printf("Your firstname has been changed");
         break;
     }
     case 4:{
      printf("Enter new Lastname:");
         scanf("%s",&lastname);
         printf("Your lastname has been changed");
         break;
     }
     case 5:{
      printf("Enter new age:");
         scanf("%d",&age);
         printf("Your age has been changed");
         break;
     }
     case 6:{
      printf("Enter new phonenumber:");
         scanf("%s",&pn);
         printf("Your phone number has been changed");
         break;
     }
     case 7:{
      printf("Enter new USN:");
         scanf("%s",&usn);
         printf("Your usn has been changed");
         break;
     }
     case 8:{
      printf("Enter new gender:");
         scanf("%s",&gender);
         printf("Your gender has been changed");
         break;
     }
     case 9:{
      printf("Enter new branch:");
         scanf("%s",&branch);
         printf("Your branch has been changed");
         break;
     }

  } 
}

void SGpa()
{
    printf("Enter 1 for Sgpa calculation\nEnter 2 for Cgpa calculation:\n");
    int choice;
    scanf("%d", &choice);
    

    float tmc = 0;

    if (choice == 1)
    {
        printf("Please enter how many subjects you have: ");
        int subchoice;
        scanf("%d", &subchoice);
        printf("Enter total credit: ");
        int choice1;
        scanf("%d", &choice1);

        for (int i = 0; i < subchoice; i++)
        {
            printf("Enter your marks for subject %d: ", i + 1);
            int subnum;
            scanf("%d", &subnum);

            printf("Enter your credits for subject %d: ", i + 1);
            int subcre;
            scanf("%d", &subcre);

            float markscredit = gradesys(subnum) * subcre;
            tmc = tmc + markscredit;
            
        }
        printf("%.2f\n", tmc / choice1);
    }
    else if (choice == 2)
    {
        printf("You want to calculate CGPA for how many semesters? ");
        int sem;
        scanf("%d", &sem);
        printf("Enter total credit for one semester: ");
        int choice1;
        scanf("%d", &choice1);

        for (int i = 0; i < sem; i++)
        {
            printf("\nPlease enter the following details for semester %d:\n", i + 1);
            printf("Please enter how many subjects you have: ");
            int subchoice;
            scanf("%d", &subchoice);

            for (int j = 0; j < subchoice; j++)
            {
                printf("Enter your marks for subject %d: ", j + 1);
                int subnum;
                scanf("%d", &subnum);

                printf("Enter your credits for subject %d: ", j + 1);
                int subcre;
                scanf("%d", &subcre);

                float markscredit = gradesys(subnum) * subcre;
                tmc = tmc + markscredit;
            }
        }
        printf("%.2f\n", tmc / (choice1 * sem));
    }
}

int gradesys(int a)
{
    int grade;
    if (a >= 90 && a <= 100)
    {
        grade = 10;
    }
    else if (a >= 80 && a <= 90)
    {
        grade = 9;
    }
    else if (a >= 70 && a <= 80)
    {
        grade = 8;
    }
    else if (a >= 60 && a <= 70)
    {
        grade = 7;
    }
    else if (a >= 50 && a <= 60)
    {
        grade = 6;
    }
    else if (a >= 40 && a <= 50)
    {
        grade = 5;
    }
    else
    {
        grade = 0;
    }
    return grade;
}


int hostel()
{
    int d, e;
    printf("So you are in which hostel\n");
    printf("Press 1 for IH\nPress 2 for NH\n");
    scanf("%d", &d);
    switch (d){
    
        case 1:{
           printf("are you a vegetatian or non vegetarian\n");
           printf("Press 1 for vegetarian\nPress 2 for non vegetarian\n");
           scanf("%d", &e);
           
           switch (e){
              case 1:{
                
               return 153000;
               break;}
        
              case 2:{
                
                return 160000;
                break;}
              default:{
                printf("inavlid input");}
           }
          break;}
    
        case 2:{
          printf("are you a vegetatian or non vegetarian\n");
          printf("Press 1 for vegetarian\nPress 2 for non vegetarian\n");
          scanf("%d", &e);
          switch (e){
           case 1:{
             
             return 202000;
             break;}
           case 2:{
             
             return 207000;
             break;}
           default:{
             printf("inavlid input");}
          } 
          break;}
        
        
    }
}
void fees()
{    
        int a, c;
        printf("From which admission quota you have taken admission:\n");
        printf("Press 1 to select KCET\nPress 2 to select COMEDK\nPress 3 to select Managment\n");
        scanf("%d", &a);
        switch (a){
         case 1:{
        
            int totalKcetFee = 91796;
            printf("Are you staying in hostel\n");
            printf("Press 1 for yes\nPress 2 for no\n");
            scanf("%d", &c);
            switch (c)
            {
                // admission fees
             case 1:
             {

                int hostelFee = hostel();
                int totalFees = hostelFee + totalKcetFee;
                printf("Your total fees for one year is %d\n", (totalFees + 2000 / 4));
                printf("Your total fees for four year is %d", (4 * totalFees) + 2000);
                break;
             }

             case 2:
             {
                printf("Your total fees for one year is %d\n", (totalKcetFee + 2000 / 4));
                printf("Your total fees for four year is %d", (4 * totalKcetFee) + 2000);
                break;
             }
            }
          break;}
        
        case 2:
        {
            int totalComedkFee = 222000;
            printf("Are you staying in hostel\n");
            printf("Press 1 for yes\nPress 2 for no\n");
            scanf("%d", &c);
            switch (c)
            {
             case 1:
             {
                
                int totalFees = hostel() + totalComedkFee;
                printf("Your total fees for one year is %d\n", totalFees + (30000 / 4));
                printf("Your total fees for four year is %d", (4 * totalFees) + 30000);

                break;
             }

             case 2:
             {
                printf("Your total fees for one year is %d\n", (totalComedkFee + 30000 / 4));
                printf("Your total fees for four year is %d", (4 * totalComedkFee) + 30000);
                break;
             }
            }
            break;}
        
        case 3:
        {
            int totalManagementFee = 5000000;
            printf("Are you staying in hostel\n");
            printf("Press 1 for yes\nPress 2 for no\n");
            scanf("%d", &c);
            switch (c)
            {
             case 1:
             {
                int hostelfee=hostel();
                int totalFees =hostelfee  + totalManagementFee;
                printf("Your total fees for one year is %d\n", (totalFees + 30000 / 4));
                printf("Your total fees for four year is %d", (4 * totalFees) + 30000);
                break;
             }

             case 2:
             {
                printf("Your total fees for one year is %d\n", ((totalManagementFee / 4) + 30000 / 4));
                printf("Your total fees for four year is %d", (totalManagementFee) + 30000);
                break;
             }
            }
            break;
        }
        default:{
            printf("invalid input");
            break;}
        }   
}








