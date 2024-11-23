/*
    Author : Pakshal Jain
    Date : 22/10/2022
    Program : To Convert Entered Single Digit Number into Word
*/

//Function TO Convert Number into Word
function Convert(No : number)
{
    //Handeling Condition if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic
    switch(No) 
    {
        case 1 :
            console.log("One");
            break;
        case 2 :
            console.log("Two");
            break;
        case 3 :
            console.log("Three");
            break;
        case 4 :
            console.log("Four");
            break;
        case 5 :
            console.log("Five");
            break;
        case 6 :
            console.log("Six");
            break;
        case 7 :
            console.log("Seven");
            break;
        case 8 :
            console.log("Eight");
            break;
        case 9 :
            console.log("Nine");
            break;
        default :
            console.log("Invalid Number");
            break;        
    }
}

//Main Function
function main() 
{
    var No : number = -2;

    console.log("Jay Ganesh...");

    //Call To Convert Function
    Convert(No);
}

main()