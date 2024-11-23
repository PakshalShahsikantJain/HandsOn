/*
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
*/

//Required Libraries
import { exit } from "process";

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Fee According To Standard
function SchoolFee(No : number) : number {
    var fee : number = 0;

    //Logic To Display 
    switch(No) {
        case 1 : {
            fee = 8900;
            return fee;
        } 
        case 2 : {
            fee = 12790;
            return fee;
        }
        case 3 : {
            fee = 21000;
            return fee;
        }
        case 4 : {
            fee = 23450;
            return fee;
        }
        default : {
            console.log("Invalid Input");
            exit(0);
        }

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 1;
    var iret : number = 0;

    console.log("Jay Ganesh.....");

    //call To SchoolFee Function
    iret = SchoolFee(No);

    //Printing Output According To Standard
    console.log("Your Fees is : %d",iret);
}

//Call To Main Function
main();