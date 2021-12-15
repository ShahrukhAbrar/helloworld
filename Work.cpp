#include<iostream>
#include<string>


int main()
{   std::string userName, userPass, userMail;  //declared variables for Login info;
    int userChoice, userMoney;                  //declared Variables
    std::cout<<"Enter Your Name : ";

    getline(std::cin, userName);           //Used getline to take output with spaces
      
    std::cout<<"Hello "<<userName<<" , what would you like to do?"<<std::endl; 
    std::cout<<" 1:Register \n 2:Login \n 3:Donate "<<std::endl;
    std::cout<<"Enter Your Choice : ";
    std::cin>>userChoice;

    //using IF-ELSE to take condition

    if(userChoice == 1)
    {                //Registration

        std::string userPass, userMail;  //declared variables for Login info
        std::cout<<"Enter Your email : ";
        std::cin>>userMail;

        std::cout<<"Enter Your Password: ";
        std::cin>>userPass;
        
        std::cout<<"\n ";
        std::cout<<"Registration Completed!";


    }

    else if(userChoice == 2)
    {
        //LOGIN 
        std::cout<<"Enter Your email : ";
        std::cin>>userMail;

        std::cout<<"Enter Your Password: ";
        std::cin>>userPass;
        
        std::cout<<"\n ";
        std::cout<<"You are now Logged-In!";
    }

    else if( userChoice == 3)
    {
        //DONATION
        std::cout<<"Please Login to Donate"<<std::endl;
        std::cout<<"Enter Your email : ";
        std::cin>>userMail;

        std::cout<<"Enter Your Password: ";
        std::cin>>userPass;
        
        std::cout<<"\n ";
        std::cout<<"How much would you like to Donate? : ";
        std::cin>>userMoney;

        std::cout<<"\n ";
        std::cout<<"Thank You for your Donation of "<<userMoney<< "$ !";
    }

    else
    {
    std::cout<<"Wrong Input, Please Try Again! : ";        
    }




}
