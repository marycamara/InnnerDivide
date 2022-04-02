//
//  main.cpp
//  officalinnderdivide
//
//  Created by Mary Camara on 27/03/2022.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;



///name fuctions
string lastname(string surname){
    string userinput;
    string lastname;
    
    string userlast = userinput + " " + lastname;
    cout << "Please enter your first name\n\n";
    cout<<"Welcome ";
    cin >>  userinput ;
    cout << surname << "\n";
    return userlast;
    
//Function declartion for direction
}
    
void handle_left()
{
    cout << "You have made the left decision by picking this direction.You are almost"
         "close to the first family memberYou have 20 coin at the moment. This will"
         "be used throughout the journey\n\n";
        
    std::cout<<"In your view you see a white box with but as you approach the box moves back dispear."
    "So, you take a few steps back and the box is back in its original place with another two boxes."
    "Two is empty only one of the boxes has a family member. Each box  have initial them. Pick the right one\n\n";
            
    cout<<"What is your guess\n\n";
    cout << "2.Black Box L \n\n";
    cout << "3. White Box R \n\n";
    cout << "4. Red Box S \n\n";
    int leftchoice;
    cin >> leftchoice;
    cout << "\n";
    
    if(leftchoice == 2 - 4)
        cout <<"This box is empty. Meaning you have lost a family member. \n\n";
    cout<<"Which family member are you not saving\n\n";
           cout << "1. Brother 1-Evan \n\n";
           cout << "11. Mother - Rosie  \n\n";
           cout << "111. Father - Sam \n\n";
           int savechoice;
           cin >> savechoice;
           cout << "\n";
           if(savechoice == 1)
           {
               cout<<" You have decided to not save your brother Evan. His box is permanently sailed.\n\n";
    
               cout<<" You can only save 4 members of your family \n\n";
               cout<<" Member Saved: 0 \n\n";
    
           }
           else if (savechoice == 11){
               
               cout<<" You have decided to not save your  Mother Rosie. Her box is permanently sailed \n\n";
               cout<<" Member Saved: 0 \n\n";
           }
    
           else if(savechoice == 111){
               cout<<" You have decided to not save your  Father Sam. His box is permanently sailed \n\n";
               cout<<" Member Saved: 0 \n\n";
           }
    
    if (leftchoice == 3)
    {
        cout <<"Ruby is in this box\n\n";
        cout<<"This mean you have saved one family member\n\n";
        cout<<" Member Saved: 1 \n\n";
        cout<<" Member Unsaved: 4 \n\n";
        cout<<"Reward. 2 \n\n";
        
        cout << "You have made it to the next mission of Inner Divide."
                "The day has reach an end and you are about to spend your first night."
                "The night will be long.Can you survive it?\n\n";
        string userinput;
        cin >> userinput;
        cout<<"Would you like a display of the avaliable iteam that can be purchased in the Divide store\n\n";
        string coininput;
        if(coininput=="Yes || yes || YES"){
        cout<<"£10:Tent"
              "£4.Water"
              "£15.Proective bubble \n\n";
    }
    }
   
    }
    


void handle_right()
{
    cout<< "You have decided to go Right\n\n";
    cout<<"You have made the right decision by picking this direction."
                 "The night and day keep switching out. as everytime it switches out it’s"
                  "a brand-new day and you 4 days to get all the members out of boxes.  Its"
                  "almost your second day and to make the day last longer you can only save 3 out of 5 family members.\n\n";
       
    cout << "3.I want a longer day.Can only save 3 family members L\n";
    cout << "4. I will find another way to make the day go slower or move fasterR\n";

    int rightchoice;
    cin >> rightchoice;
    cout << "\n";
    if(rightchoice == 3)
        cout <<"With is option your day has slow down and you can finally see a white box in"
                      "the distance that may contain a family member. When you approach there is two boxes.\n\n";
    

    else if (rightchoice == 4)
    {
        cout <<"With is option you will have o find a way to reach your family members before your all locked in \n";
    }


}
void handle_ahead(){
     
    cout<< "You have decided to go Right\n\n";
    cout<<"As your trying to walk up the mountain its too windy.  The journey has just started, and you have" "fell over countless of time and its taking too much energy to keep going. You don’t know if you will" "survive this before you reach a family member, but in the distance you can see see a white box in view.\n";
           
    cout<<"You  can stop and rest for the night or stop the wind for 5 coins.\n\n";
    cout << "1.Yes,I need to rest \n\n";
    cout << "2. White Box R \n\n";
    int aheadchoice;
    cin >> aheadchoice;
    cout << "\n";
    if(aheadchoice == 1)
    {
        cout<<"you will be camping for the night meaning you have lost the chance of saving a family member. Which family member are you not saving further into the journey.\n\n";
    }
    cout << "3.Lucas – brother \n\n";
    cout << "4. Rosie – Sister\n\n";
   
    cin >> aheadchoice;
    cout << "\n";
    if(aheadchoice == 3){
       
       cout<< "You have lost the chance to save Lucas\n";
       
    }
               
    else if (aheadchoice == 4)
        cout<<"End of game\n";
}

void handle_quit(){
}


int main(int argc, const char * argv[]) {
    
    
    cout<<"██╗███╗   ██╗███╗   ██╗███████╗██████╗     ██████╗ ██╗██╗   ██╗██╗██████╗ ███████╗"
          "██║████╗  ██║████╗  ██║██╔════╝██╔══██╗    ██╔══██╗██║██║   ██║██║██╔══██╗██╔════╝"
          "██║██╔██╗ ██║██╔██╗ ██║█████╗  ██████╔╝    ██║  ██║██║██║   ██║██║██║  ██║█████╗"
          "██║██║╚██╗██║██║╚██╗██║██╔══╝  ██╔══██╗    ██║  ██║██║╚██╗ ██╔╝██║██║  ██║██╔══╝"
          "██║██║ ╚████║██║ ╚████║███████╗██║  ██║    ██████╔╝██║ ╚████╔╝ ██║██████╔╝███████╗"
          "╚═╝╚═╝  ╚═══╝╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝    ╚═════╝ ╚═╝  ╚═══╝  ╚═╝╚═════╝ ╚══ \n\n";
    cout<<"  "<<std::endl <<std::endl;
    
    
    int choice;
    string userobject =
    lastname( "Divide");
    
    
    //Main Menu
    cout<<" ////////////////////////////////////// loading MENU ///////////////////////////////////////////////"
        "//////////////////////////////////////////\n";
    
    
    cout << "9.Play\n";
    cout << "8. Help\n";
    cin >> choice;
    cout << "\n";
    
    // The option play
    if (choice == 9){
    
        cout<<" /////////////////////////////////////////////////////////////////////////////////////"
            "//////////////////////////////////////////\n";
        //StoryLine
        cout << "Welcome To The Story Of Divide\n\n";

        cout << "Divide left home in the middle of the day to the mountains,to go and collect more food for fire wood for the winter."
        "On his way back home Divide came to a stop as a ghostly figure blocked his way. He try ignoring and tried walking through it."
        "However as he tried walking through the air  felt like there was an invisible wall."
        "Divide took a sep back, only for the ghostly demon to appear again."
        "Your familys live now are in your hands. \n\n";
        

        cout<<" ////////////////////////////////////// loading ///////////////////////////////////////////////"
            "//////////////////////////////////////////\n";
        
        //Family Introduction
        cout << "MEET THE FAMILY \n \n";
        
        //Mother Rose
        std::cout <<"Family: Mother Rose\n";
        std::cout <<"Age: 48\n";
        std::cout <<"Think Right Path I:Ahead";
        std::cout <<"Least favirote family member: Father\n\n";
        
        //Father Sam
        std::cout <<"Family: Father Sam\n";
        std::cout <<"Age:56\n";
        std::cout <<"Think Right Path I:Ahead\n";
        std::cout <<"Least favirote family member: Divide\n\n";

        //Sister Ruby
        std::cout <<"Family: SisterRuby \n";
        std::cout <<"Age:18\n";
        std::cout <<"Think Right Path I:Right \n";
        std::cout <<"Least favirote family member: Divide\n\n";

        //Brother Lucas
        std::cout <<"Family: Brother Lucas \n";
        std::cout <<"Age:20\n";
        std::cout <<"Think Right Path I:Right \n";
        std::cout <<"Least favirote family member: Divide \n\n";

        //Brother Evan
        std::cout <<"Brother Evan \n";
        std::cout <<"Age:20\n";
        std::cout <<"Think Right Path I:Ahead \n";
        std::cout <<"Least favirote family member: Divide \n\n";
        
        // The option Help
    }else if (choice == 8){
              cout<<"HOW TO PLAY INNER DIVIDE \n\n";
              cout<<"To play the game you have to make sure you read the intoduction of each family member"
                    "You have to read the story as you go so that you don't make dession based on confusion"
                    "Enter the option which will be spefifc number to pick your options depending on the"
                    "direction and your advancement within the game"
                    "Each player starts of with 20 coins. This so very important to not as"
                    "when you are allow to purchase object the game will shoawse it\n\n";
                    
        cout<<" ////////////////////////////////////// loading ///////////////////////////////////////////////"
            "//////////////////////////////////////////\n";
        
        cout<<"BE AWARE\n\n";
        cout<<"When you see this cout |Which family member are you not saving| is"
              "is a sigh you have lost a mission and need o pick which family member you will not save\n\n";
        
        
}
    
    
    cout<<" ////////////////////////////////////// loading ///////////////////////////////////////////////"
        "//////////////////////////////////////////\n";
        
    
    
    
        
//The direction with the users options of direcion.
    while(true)
   
    {
        cout << "Pick the direction you would like to go:"
        "Left:1 Right:2 Ahead:3: Please choose one of the following options to continue: \n\n";

        cout << "1.Left \n";
        cout << "2.Right \n";
        cout << "3.Ahead \n";
        cout << "4.Quit \n\n";
        cin >> choice;
        cout << "\n";

        // The  Direction //*****using pointer to reference the the declared function for the direction*****
        if (choice  == 1)
            handle_left();
        // The Right Direction
        else if (choice == 2)
            handle_right();
        //The Ahead Direction
        else if (choice == 3)
            handle_ahead();
        else if (choice == 4)
        {
             cout << "Goodbye. \n";
             break;
        }
    }
    
    
    
    
    return 0;
}
